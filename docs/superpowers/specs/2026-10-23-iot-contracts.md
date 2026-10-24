# Contratos de comunicación IoT de Edifika (v1)

Fecha: 2026-10-23 · Complementa a `2026-10-23-iot-integration-design.md` · **Fuente de verdad** de todo request y response entre piezas. Plan 0 lo materializa en JSON Schema en `Edifika-IoT-Platform/contracts/`. Si un plan o un test contradice este documento, gana este documento.

## 0. Convenciones comunes

- **JSON:** camelCase, UTF-8. Fechas y horas en **ISO-8601 UTC con `Z`** (`2026-10-23T15:04:05Z`); en Java se usan `Instant`. Los campos nulos se envían como `null` (no se omiten) en los resources REST.
- **IDs:** los REST usan `Long` numérico. El `deviceCode` (`^[a-z0-9-]{3,64}$`) es la identidad de los nodos en MQTT y AMQP. El `gatewayCode` usa el mismo patrón.
- **Colores:** `^#[0-9A-F]{6}$`, en mayúsculas. La API acepta minúsculas y las normaliza.
- **UID RFID:** se normaliza a mayúsculas, sin espacios ni `:`, solo hexadecimal, de 8 a 20 caracteres (`^[0-9A-F]{8,20}$`). Fuera de la API se enmascara mostrando solo los últimos 4 caracteres: `****B2C3`.
- **Error REST** (todas las respuestas 4xx/5xx de los servicios Java), igual que `ErrorResource` de Payment:
  ```json
  { "status": 409, "error": "Conflict", "message": "La puerta ya está reservada en ese horario", "timestamp": "2026-10-23T15:04:05Z" }
  ```
  `message` en español. Códigos: 400 (validación), 401 (sin token o token inválido), 403 (rol o propiedad), 404 (no existe), 409 (conflicto de estado), 503 (dependencia externa caída).
- **Autenticación de usuarios:** `Authorization: Bearer <JWT de IAM>`.
  - Claims: `sub` (email), `user_id` (Long), `roles` (`["ADMIN"]`, `["OWNER"]`, `["TENANT"]`).
  - "Residente" = cualquier usuario autenticado sin `ADMIN`.
  - El `userId` del llamador **siempre** sale del token.
- **Listas:** arreglo JSON plano, sin paginación (igual que los servicios existentes). Los listados de intentos y lecturas tienen un límite explícito.

## 1. MQTT: ESP32 ↔ Edge Gateway

Prefijo `edifika/v1`, QoS 1, sin retained.

**Firmware de referencia:** `IoT-UPC-202620/esp32` (`C:\Users\nanak\Dev\edifika\esp32`), nodo `EdifikaNode` sobre ModestIoT, `DEVICE_ID = "esp32-acc-01"`. El firmware de `edifika-report/wokwi` está **obsoleto**.

- El nodo publica en `edifika/v1/nodes/{deviceCode}/{canal}` y escucha `edifika/v1/nodes/{deviceCode}/commands`.
- **Envelope del nodo.** El gateway acepta las dos formas siguientes, y es la regla que manda:
  - `v`: entero `1` o string `"1"`. El firmware de referencia envía `"1"`. Cualquier otro valor da `unsupported_version`.
  - `ts`: puede llegar como epoch en segundos (número) o como ISO-8601 UTC con `Z`, que es lo que envía el firmware. También puede ser `null` mientras el nodo no tiene la hora sincronizada por NTP. Si es `null`, el gateway usa su propia hora y marca la lectura con `timeSuspect: true`.
  - Hacia el nodo, el gateway siempre envía `v: 1` (entero) y `ts` en epoch.

### 1.1 Del nodo al gateway

| Canal | Payload (forma del firmware de referencia) | Notas |
|---|---|---|
| `heartbeat` | `{"v":"1","ts":"2026-10-24T15:04:05Z","deviceId":"esp32-acc-01","fw":"v0.3.0"}` | Al conectar y luego **cada 10 s**. El gateway marca offline tras `EDGE_HEARTBEAT_TIMEOUT_S` (30 s, es decir 3 heartbeats). `fw` es opcional |
| `access` | `{"v":"1","ts":…,"credentialType":"RFID","credential":"04A1B2C3"}` | UID compacto, en mayúsculas. **`deviceId` es opcional**: si falta, se toma del tópico; si viene, debe coincidir |
| `readings` | `{"v":"1","ts":…,"sensor":"temperature","value":24.5,"unit":"°C"}` | Un mensaje por sensor, **cada 10 s** con el último valor válido. `value: null` significa que no hubo medida. `deviceId` es opcional, igual que en `access` |
| `ack` | `{"v":"1","ts":…,"commandId":"c0ffee…","status":"OK","detail":""}` | `status`: `OK` o `FAILED`. Se acepta `ERROR` como alias de `FAILED`. `detail` vacío equivale a `null`. Es obligatorio para todo comando con `commandId`, en ≤ 3 s. `deviceId` es opcional |

Sensores (`sensor`, `unit`, rango válido). La unidad `C` se normaliza a `°C`.
- `temperature`, `°C`, −40..85
- `humidity`, `%`, 0..100
- `ultrasonic`, `cm`, 2..400

Un valor fuera de rango cuenta como lectura inválida; tres lecturas inválidas seguidas levantan `sensor_fault_<sensor>`.

### 1.2 Del gateway al nodo

`{"v":1,"commandId":"<32 hex o el id de la nube>","type":"…","params":{…},"ts":…}`

| `type` | `params` | El nodo hace |
|---|---|---|
| `access_result` | `{"result":"GRANTED","reason":"ok","message":"Access granted","buzzer":"granted","name":"Ana Perez","lockMs":5000}` (si es DENIED: sin `name` ni `lockMs`) | abre el relé `lockMs`, muestra el mensaje y el nombre, suena el buzzer, y pone el LED en verde o rojo 2 s si está en `FREE_ACCESS` |
| `mode` | `{"mode":"RESERVED","color":"#00FF88"}` o `{"mode":"FREE_ACCESS"}` | guarda el modo. En `RESERVED` pinta `color` (si no viene, mantiene el último) y muestra `RESERVED` en el OLED. En `FREE_ACCESS` el LED vuelve a mostrar el estado (blanco en reposo) |
| `rgb` | `{"color":"#00FF88"}` | pinta el color. Si el nodo está en `FREE_ACCESS`, responde `ack FAILED "not reserved"` |
| `unlock` | `{"durationMs":5000}` (el firmware acepta también `duration_ms`) | abre durante el tiempo indicado; si no viene, usa `LOCK_OPEN_DURATION_IN_MILLISECONDS` (REST local) |
| `display` | `{"message":"…"}` (1..64) | OLED |
| `buzzer` | `{"pattern":"granted\|denied\|alert\|off"}` | sonido |
| `alert` | `{"kind":"…","active":true,"message":"…","buzzer":"alert"}` | aviso local |
| `maintenance` | `{"active":true,"message":"Under maintenance"}` | desactiva o reactiva el nodo |
| `time_sync` | `{"epoch":1782000000,"timezone":"America/Lima","driftSeconds":3.1}` | ajusta el reloj |

Un `type` desconocido se responde con `ack FAILED "unsupported command"`.

### 1.3 Comportamiento obligatorio del nodo de puerta

- **Lectura de tarjeta:**
  1. El nodo publica `access`, suena un beep corto y muestra `Validando...`.
  2. **No abre por su cuenta** (`UNLOCK_ON_ANY_CARD = false`).
  3. Espera `access_result` hasta 5 s.
  4. Si no llega respuesta, deniega localmente y muestra `Gateway no disponible` (US47).
  5. Las lecturas repetidas de la misma tarjeta dentro de esa espera se ignoran.
- **LED RGB:** el degradado continuo se elimina.
  - En `FREE_ACCESS` el LED es blanco en reposo, y verde o rojo durante 2 s tras cada decisión.
  - En `RESERVED` muestra el color fijado.
  - En `maintenance` es ámbar (`#FF8000`).
  - Al arrancar, sin conexión, es rojo fijo hasta el primer heartbeat aceptado.
- **Malla 3x3:** sin cambios. La fila 1 se enciende con la cerradura abierta, la fila 2 con temperatura ≥ 28 °C y la fila 3 con humedad ≥ 70 %.
- **Mantenimiento:** con `maintenance.active = true` el nodo ignora las tarjetas y muestra `message`.
- **Arranque:** el modo inicial es `FREE_ACCESS`. El gateway envía `mode` cuando el nodo vuelve a `ACTIVE`, así que un nodo reiniciado recupera su rol.

## 2. Sync de caché: Edge Gateway → IoT Access Management

`GET /api/v1/edge/sync?since={version}`. El parámetro `since` es opcional.

**Request headers:** `X-Gateway-Id: edge-gateway-01`, `Authorization: Bearer <apiKey del gateway>`.

**Respuestas:**
- `200` con el cuerpo de abajo.
- `401` si falta la clave o no coincide con el `apiKeyHash` de ese `gatewayCode`. También si el gateway está `DECOMMISSIONED`.
- `404` si el `gatewayCode` no existe.

**Semántica:**
- Si `since` es igual al `syncVersion` actual, responde `{"version": N, "full": false}` con todas las listas vacías.
- En cualquier otro caso responde un **snapshot completo** (`full: true`) del edificio del gateway.
- Cada llamada actualiza `EdgeGateway.lastSyncAt` y, si estaba `OFFLINE` o `PROVISIONED`, deja `status = ONLINE`.

```json
{
  "version": 42,
  "full": true,
  "credentials": [
    { "uid": "04A1B2C3", "type": "RFID", "residentId": "15", "residentName": "Ana Perez",
      "status": "ACTIVE", "validFrom": null, "validUntil": null }
  ],
  "devices": [
    { "deviceCode": "esp32-acc-01", "name": "Puerta piscina", "location": "Piso 1",
      "capabilities": ["RFID","LOCK","BUZZER","OLED","RGB_LED","TEMPERATURE","HUMIDITY"],
      "ledColor": "#00FF88", "status": "ACTIVE", "settings": {} }
  ],
  "removedDeviceCodes": [],
  "reservations": [
    { "id": "7", "deviceCode": "esp32-acc-01", "holderResidentId": "15",
      "startsAt": "2026-10-23T20:00:00Z", "endsAt": "2026-10-23T22:00:00Z",
      "authorizedResidentIds": ["16", "21"] }
  ],
  "removedReservationIds": [],
  "permissions": [],
  "areaSchedules": []
}
```

Reglas de contenido:
- **`credentials`:** las credenciales del `buildingId` del gateway.
  - `status` se traduce: `ACTIVE→ACTIVE`, `SUSPENDED→SUSPENDED`, `REVOKED→REVOKED`, `LOST→REVOKED`.
  - `residentId` es `userId` como string; si es una credencial creada en el edge, es `edgeResidentRef`.
- **`devices`:** los dispositivos del gateway que no estén `DECOMMISSIONED`. `status` es el del registro.
- **`reservations`:** las reservas `SCHEDULED` o `ACTIVE` de esos dispositivos con `endsAt > ahora`.
- **`ledColor`:** solo viene si hay una reserva activa.

## 3. AMQP: sobre, eventos y órdenes

### 3.1 Topología

- **Exchanges:** `edifika.events` (topic, durable), `edifika.edge.commands` (topic, durable) y `edifika.dlx` (topic, durable).
- **Colas** (todas durables, con `x-dead-letter-exchange: edifika.dlx` y `x-dead-letter-routing-key: <cola>`). Cada DLQ `<cola>.dlq` se enlaza a `edifika.dlx` con la routing key `<cola>`.

| Cola | Exchange | Enlaces | Declara y consume |
|---|---|---|---|
| `access.edge-events` | `edifika.events` | `edge.access-attempt`, `edge.credential-changed`, `edge.device-status`, `edge.command-result` | IoT Access Management |
| `telemetry.edge-events` | `edifika.events` | `edge.reading`, `edge.alert`, `edge.device-status` | IoT Telemetry |
| `telemetry.device-registry` | `edifika.events` | `iot.device-registered`, `iot.device-updated`, `iot.device-decommissioned` | IoT Telemetry |
| `edge.<gatewayCode>.commands` | `edifika.edge.commands` | `<gatewayCode>.#` | Edge Gateway |

### 3.2 Sobre

Propiedades AMQP:
- `message_id` = `eventId`
- `type` = `eventType`
- `content_type: application/json`
- `content_encoding: utf-8`
- `delivery_mode: 2`
- header `x-producer` = `producer`

```json
{ "eventId": "6f1c2a9e0b7d4e1f9a3c5d7e8f901234", "eventType": "AccessAttempt", "eventVersion": 1,
  "occurredAt": "2026-10-23T15:04:05Z", "producer": "edge-gateway", "buildingId": null,
  "gatewayCode": "edge-gateway-01", "correlationId": null, "payload": { } }
```

- `eventId`: 32 caracteres hexadecimales (edge) o UUID (Java).
- `producer`: `edge-gateway`, `iot-access-management` o `iot-telemetry`.
- `buildingId`: `null` en los eventos del edge.
- `correlationId`: el `commandId` en `CommandResult`; `null` en el resto.

### 3.3 Eventos del edge (routing key `edge.<kind>`)

| Routing key | eventType | payload |
|---|---|---|
| `edge.access-attempt` | `AccessAttempt` | `{"deviceId":"esp32-acc-01","areaId":null,"credential":"04A1B2C3","credentialType":"RFID","residentId":"15","result":"GRANTED","reason":"ok","accessMode":"FREE_ACCESS"}` |
| `edge.reading` | `Reading` | `{"deviceId":"esp32-acc-01","areaId":null,"sensor":"temperature","value":24.5,"unit":"°C","capturedAt":"2026-10-23T15:04:00Z","timeSuspect":false}` (`levelPct` solo para `ultrasonic`) |
| `edge.alert` | `Alert` | `{"alert":"sensor_fault_temperature","state":"raised","deviceId":"esp32-acc-01","sensor":"temperature"}` |
| `edge.device-status` | `DeviceStatus` | `{"deviceId":"esp32-acc-01","event":"online"}`; variantes en la tabla de abajo |
| `edge.command-result` | `CommandResult` | `{"deviceId":"esp32-acc-01","commandId":"…","type":"rgb","status":"OK","detail":null}` |
| `edge.credential-changed` | `CredentialChanged` | `{"uid":"04A1B2C3","residentId":"guardia-1","status":"ACTIVE","source":"edge_manual"}` |

**Valores de `reason` en `AccessAttempt`:** `ok`, `unknown_credential`, `credential_suspended`, `credential_revoked`, `credential_expired`, `outside_schedule`, `no_permission`, `not_authorized`, `maintenance`, `unsupported_credential_type`.

**Valores de `alert`:** `humidity_low`, `water_level_critical`, `sensor_fault_<sensor>`, `device_offline`, `unregistered_device`, `firmware_incompatible`, `stale_cache`, `lock_unresponsive`, `possible_unauthorized_access`.

**Variantes de `DeviceStatus.event`:**

| `event` | Campos extra |
|---|---|
| `registered` | `status`, `areaId` |
| `settings_updated` | `settings` |
| `maintenance_started` | `by`, `until` |
| `maintenance_ended` | `by`, `durationSeconds` |
| `online` | — |
| `offline` | `lastSeen` |
| `firmware` | `firmware` |
| `mode_changed` | `from`, `to` |

**Valores de `CommandResult.status`:** `OK`, `FAILED`, `TIMEOUT`, `EXPIRED`, `ACKED` (legacy, REST local).

### 3.4 Eventos de dominio

| Routing key | eventType | Productor | payload |
|---|---|---|---|
| `access.physical-access-granted` | `PhysicalAccessGranted` | access | `{"attemptId":101,"deviceId":3,"deviceCode":"esp32-acc-01","userId":15,"credentialId":9,"accessMode":"RESERVED","occurredAt":"…"}` |
| `access.physical-access-denied` | `PhysicalAccessDenied` | access | `{"attemptId":102,"deviceId":3,"deviceCode":"esp32-acc-01","userId":null,"rfidUidMasked":"****B2C3","accessMode":"FREE_ACCESS","reason":"DELINQUENT","occurredAt":"…"}` |
| `iot.device-registered` / `iot.device-updated` | `DeviceRegistered` / `DeviceUpdated` | access | `{"deviceId":3,"deviceCode":"esp32-acc-01","gatewayCode":"edge-gateway-01","buildingId":12,"name":"Puerta piscina","deviceType":"DOOR","capabilities":["RFID","LOCK","RGB_LED","TEMPERATURE","HUMIDITY"],"accessMode":"FREE_ACCESS","status":"ACTIVE"}` |
| `iot.device-decommissioned` | `DeviceDecommissioned` | access | `{"deviceId":3,"deviceCode":"esp32-acc-01"}` |
| `iot.access-mode-changed` | `AccessModeChanged` | access | `{"deviceId":3,"deviceCode":"esp32-acc-01","from":"FREE_ACCESS","to":"RESERVED","reservationId":7}` |
| `telemetry.device-went-offline` | `DeviceWentOffline` | telemetry | `{"deviceCode":"esp32-acc-01","lastSeenAt":"…"}` |
| `telemetry.sensor-faulty` | `SensorFaulty` | telemetry | `{"deviceCode":"esp32-acc-01","sensor":"temperature"}` |

En los eventos de dominio, `buildingId` del sobre es el del dispositivo. `reason` usa el enum de la nube: `GRANTED`, `NOT_REGISTERED`, `SUSPENDED`, `DELINQUENT`, `REVOKED`, `EXPIRED`, `NOT_AUTHORIZED`, `MAINTENANCE`, `OUT_OF_SCHEDULE`, `UNSUPPORTED`.

### 3.5 Órdenes a un gateway (exchange `edifika.edge.commands`)

| Routing key | eventType | payload |
|---|---|---|
| `<gatewayCode>.device-command` | `DeviceCommandRequested` | `{"commandId":"5b0e…(uuid sin guiones, 32 hex)","deviceCode":"esp32-acc-01","type":"rgb","params":{"color":"#00FF88"},"expiresAt":"2026-10-23T15:04:15Z"}` |
| `<gatewayCode>.sync-requested` | `SyncRequested` | `{"syncVersion":43}` |

El sobre lleva `producer: "iot-access-management"`, `gatewayCode` y `buildingId`. El resultado de una orden vuelve como `edge.command-result`, con `commandId` y `correlationId` iguales.

### 3.6 Garantías

- At-least-once. Cada consumidor Java guarda `eventId` en `processed_events` en la misma transacción que su efecto. Un duplicado se confirma (ack) sin efecto.
- Fallo del consumidor: 3 intentos (1 s, 2 s, 4 s) y luego DLQ, sin requeue infinito.
- Un mensaje que no se puede deserializar va directo a la DLQ.
- Un `eventVersion` distinto de 1 va a la DLQ con un log de advertencia.

## 4. IoT Access Management: API REST

Base: `/api/v1`. Puerto 8089. Todas las rutas requieren JWT salvo `/api/v1/edge/**` (§2).

### 4.1 Resources

```json
// GatewayResource
{ "id": 1, "gatewayCode": "edge-gateway-01", "buildingId": 12, "name": "Torre A", "status": "ONLINE",
  "syncVersion": 42, "lastSyncAt": "2026-10-23T15:00:00Z", "createdAt": "…" }
// GatewayCredentialsResource  (solo en create y rotate)
{ "gatewayId": 1, "gatewayCode": "edge-gateway-01", "apiKey": "egk_3f9c…(48 chars)" }
// DeviceResource
{ "id": 3, "deviceCode": "esp32-acc-01", "gatewayId": 1, "gatewayCode": "edge-gateway-01", "buildingId": 12,
  "name": "Puerta piscina", "location": "Piso 1", "deviceType": "DOOR",
  "capabilities": ["RFID","LOCK","BUZZER","OLED","RGB_LED","TEMPERATURE","HUMIDITY"],
  "accessMode": "RESERVED", "activeReservationId": 7, "ledColor": "#00FF88", "unlockSeconds": 5,
  "firmwareVersion": "door-1.2.0", "status": "ACTIVE", "lastSeenAt": "…", "createdAt": "…" }
// CredentialResource
{ "id": 9, "rfidUid": "04A1B2C3", "buildingId": 12, "userId": 15, "holderName": "Ana Perez", "status": "SUSPENDED",
  "suspensionReason": "DELINQUENT", "validFrom": null, "validUntil": null, "origin": "CLOUD",
  "createdAt": "…", "updatedAt": "…" }
// DoorReservationResource
{ "id": 7, "deviceId": 3, "holderUserId": 15, "startsAt": "2026-10-23T20:00:00Z", "endsAt": "2026-10-23T22:00:00Z",
  "status": "SCHEDULED", "authorizedUserIds": [16, 21], "createdBy": 15, "createdAt": "…" }
// ReservationSlotResource  (disponibilidad pública)
{ "id": 7, "startsAt": "…", "endsAt": "…", "status": "SCHEDULED", "mine": false }
// AuthorizationResource
{ "reservationId": 7, "userId": 16, "status": "ACTIVE", "grantedAt": "…" }
// DeviceCommandResource
{ "commandId": "5b0e…", "deviceId": 3, "type": "SET_LED", "params": { "color": "#00FF88" }, "status": "PENDING",
  "detail": null, "requestedBy": 15, "requestedAt": "…", "expiresAt": "…", "resolvedAt": null }
// AccessAttemptResource
{ "id": 101, "deviceId": 3, "deviceCode": "esp32-acc-01", "userId": 15, "credentialId": 9, "rfidUidMasked": "****B2C3",
  "accessMode": "FREE_ACCESS", "result": "DENIED", "reason": "DELINQUENT", "occurredAt": "…", "receivedAt": "…" }
// ResidentStatusResource
{ "userId": 15, "buildingId": 12, "unitIds": [40], "delinquent": true, "overdueDebtCount": 2,
  "checkedAt": "…", "lastError": null }
// DoorSummaryResource  (vista de la app móvil)
{ "deviceId": 3, "deviceCode": "esp32-acc-01", "name": "Puerta piscina", "location": "Piso 1", "buildingId": 12,
  "status": "ACTIVE", "accessMode": "RESERVED",
  "currentReservation": { "id": 7, "startsAt": "…", "endsAt": "…", "mine": true },
  "ledColor": "#00FF88", "canEnter": true, "canReserve": false, "canChangeLed": true }
```

Notas:
- **`DoorSummaryResource`:**
  - `ledColor` es `null` si el usuario no es el titular de la reserva activa ni ADMIN.
  - `currentReservation` es `null` en `FREE_ACCESS`.
  - `canEnter` = credencial `ACTIVE` y, según el modo, no moroso (`FREE_ACCESS`) o titular/autorizado (`RESERVED`).
  - `canReserve` = no moroso y con una credencial `ACTIVE` o suspendida solo por morosidad.
  - `canChangeLed` = `RESERVED`, el usuario es titular o ADMIN, y el dispositivo está `ACTIVE`.
- **`DeviceCommandResource.status`:** `PENDING`, `OK`, `FAILED`, `EXPIRED`. Un `TIMEOUT` del edge se guarda como `FAILED` con `detail: "timeout"`. Si pasa `expiresAt + 5 s` sin resultado, un `@Scheduled` lo marca `EXPIRED`.

### 4.2 Endpoints

**Gateways y dispositivos**

| Endpoint | Rol | Request | Response |
|---|---|---|---|
| `POST /iot/gateways` | ADMIN | `{"gatewayCode":"edge-gateway-01","buildingId":12,"name":"Torre A"}` | `201 GatewayCredentialsResource` · 409 código duplicado |
| `GET /iot/gateways` | ADMIN | `?buildingId=` | `200 [GatewayResource]` |
| `GET /iot/gateways/{id}` | ADMIN | — | `200 GatewayResource` · 404 |
| `POST /iot/gateways/{id}/api-key` | ADMIN | — | `200 GatewayCredentialsResource` (la clave anterior deja de servir) |
| `POST /iot/devices` | ADMIN | `{"deviceCode":"esp32-acc-01","gatewayId":1,"name":"Puerta piscina","location":"Piso 1","deviceType":"DOOR","capabilities":["RFID","LOCK","BUZZER","OLED","RGB_LED","TEMPERATURE","HUMIDITY"],"unlockSeconds":5}` | `201 DeviceResource` (status `PROVISIONED`) · 409 código duplicado · 400 `DOOR` sin `RFID` y `LOCK` |
| `GET /iot/devices` | ADMIN | `?gatewayId=&buildingId=&deviceType=&status=` | `200 [DeviceResource]` |
| `GET /iot/devices/{id}` | ADMIN | — | `200 DeviceResource` |
| `PATCH /iot/devices/{id}` | ADMIN | `{"name"?, "location"?, "capabilities"?, "unlockSeconds"?}` | `200 DeviceResource` |
| `PUT /iot/devices/{id}/maintenance` | ADMIN | `{"enabled":true}` | `200 DeviceResource` (`MAINTENANCE` o, al salir, `ACTIVE`/`OFFLINE` según `lastSeenAt`) |
| `DELETE /iot/devices/{id}` | ADMIN | — | `204` (`DECOMMISSIONED`; cancela sus reservas futuras) |

**Puerta: reservas, autorizados y LED**

| Endpoint | Rol | Request | Response |
|---|---|---|---|
| `GET /iot/devices/{id}/reservations` | autenticado | `?from=&to=` (por defecto: ahora .. +7 días; máximo 31 días) | `200 [ReservationSlotResource]` |
| `POST /iot/devices/{id}/reservations` | autenticado | `{"startsAt":"…","endsAt":"…"}`; el ADMIN puede agregar `"holderUserId":15` | `201 DoorReservationResource`. Errores: 409 `"El residente tiene deudas vencidas"`; 409 superposición; 400 si `endsAt ≤ startsAt`, si `startsAt` está en el pasado (tolerancia de 60 s) o si dura más de `RESERVATION_MAX_HOURS`; 409 si el dispositivo no es `DOOR` o está `DECOMMISSIONED`; 503 si no se puede verificar la deuda y no hay estado previo |
| `GET /access/me/reservations` | autenticado | `?status=` | `200 [DoorReservationResource]` (como titular) |
| `GET /access/reservations` | ADMIN | `?deviceId=&status=&from=&to=` | `200 [DoorReservationResource]` |
| `GET /access/reservations/{id}` | titular o ADMIN | — | `200 DoorReservationResource` · 403 |
| `DELETE /access/reservations/{id}` | titular o ADMIN | — | `204` (`CANCELLED`) · 409 si ya está `ENDED` o `CANCELLED` |
| `POST /access/reservations/{id}/authorizations` | titular o ADMIN | `{"userId":16}` | `201 AuthorizationResource`. Errores: 409 si ya está; 400 si `userId` es el titular; 409 si la reserva está `ENDED` o `CANCELLED`; 400 si el usuario no es residente activo del edificio (según la caché de `ResidentStatus`) |
| `GET /access/reservations/{id}/authorizations` | titular o ADMIN | — | `200 [AuthorizationResource]` |
| `DELETE /access/reservations/{id}/authorizations/{userId}` | titular o ADMIN | — | `204` · 404 |
| `PUT /iot/devices/{id}/led` | titular de la reserva activa o ADMIN | `{"color":"#00ff88"}` | `202 DeviceCommandResource` (`PENDING`). Errores: 409 `"La puerta no está reservada"` (`FREE_ACCESS`); 409 si el dispositivo no está `ACTIVE`; 403 si no es titular ni ADMIN; 400 color inválido; 400 si el dispositivo no tiene `RGB_LED` |
| `GET /iot/device-commands/{commandId}` | quien lo pidió o ADMIN | — | `200 DeviceCommandResource` · 404 |

**Credenciales, accesos y estado del residente**

| Endpoint | Rol | Request | Response |
|---|---|---|---|
| `POST /access/credentials` | ADMIN | `{"rfidUid":"04 a1 b2 c3","buildingId":12,"userId":15,"holderName":"Ana Perez","validFrom":null,"validUntil":null}` | `201 CredentialResource` (se dispara la verificación de deuda del usuario) · 409 UID duplicado · 400 UID inválido |
| `GET /access/credentials` | ADMIN | `?buildingId=&userId=&status=` | `200 [CredentialResource]` |
| `PATCH /access/credentials/{id}/status` | ADMIN | `{"status":"ACTIVE"}` (`ACTIVE`, `SUSPENDED`, `REVOKED`, `LOST`) | `200 CredentialResource`. Reactivar limpia `suspensionReason`; la próxima verificación de deuda puede volver a suspenderla |
| `GET /access/me/credentials` | autenticado | — | `200 [CredentialResource]` (`rfidUid` enmascarado) |
| `GET /access/attempts` | ADMIN | `?deviceId=&userId=&result=&from=&to=&limit=100` (máximo 500) | `200 [AccessAttemptResource]` (más recientes primero) |
| `GET /access/me/attempts` | autenticado | `?from=&to=&limit=50` | `200 [AccessAttemptResource]` |
| `GET /access/me/doors` | autenticado | — | `200 [DoorSummaryResource]` (puertas de los edificios donde el usuario es residente activo; ADMIN ve todas) |
| `GET /access/residents/{userId}/status` | el propio usuario o ADMIN | — | `200 ResidentStatusResource` · 404 si nunca se verificó |
| `POST /access/residents/{userId}/debt-check` | ADMIN | — | `200 ResidentStatusResource` · 503 si Residential o Payment no responden |

## 5. IoT Telemetry: API REST

Base: `/api/v1/telemetry`. Puerto 8090. Cualquier usuario autenticado. Los no ADMIN solo ven dispositivos de los edificios que reciben en el token. Como el token no trae `buildingId`, esta regla no se aplica y **todos los autenticados ven todo**; se deja anotado como deuda.

```json
// DeviceTelemetryResource
{ "deviceCode": "esp32-acc-01", "deviceId": 3, "name": "Puerta piscina", "buildingId": 12,
  "connectionStatus": "ACTIVE", "lastHeartbeatAt": "…",
  "latest": [ { "magnitude": "TEMPERATURE", "value": 24.5, "unit": "°C", "capturedAt": "…" },
              { "magnitude": "HUMIDITY", "value": 61.0, "unit": "%", "capturedAt": "…" } ] }
// ReadingSeriesResource
{ "deviceCode": "esp32-acc-01", "magnitude": "TEMPERATURE", "unit": "°C", "bucket": "1m",
  "from": "…", "to": "…",
  "points": [ { "t": "2026-10-23T15:04:00Z", "value": 24.4, "min": 24.1, "max": 24.6, "count": 6 } ] }
// TelemetryAlertResource
{ "id": 5, "deviceCode": "esp32-acc-01", "kind": "sensor_fault_temperature", "state": "RAISED",
  "details": { "sensor": "temperature" }, "occurredAt": "…" }
```

| Endpoint | Request | Response |
|---|---|---|
| `GET /telemetry/devices` | `?buildingId=` | `200 [DeviceTelemetryResource]` |
| `GET /telemetry/devices/{deviceCode}/latest` | — | `200 DeviceTelemetryResource` · 404 |
| `GET /telemetry/readings` | `deviceCode` (obligatorio), `magnitude` (`TEMPERATURE`\|`HUMIDITY`, obligatorio), `from` y `to` (por defecto la última hora), `bucket` = `raw`\|`1m`\|`1h` (por defecto `raw`) | `200 ReadingSeriesResource`. En `raw`: `min = max = value`, `count = 1`. Rango máximo: `raw` 24 h, `1m` 7 días, `1h` 90 días; si se excede, 400. Máximo 5000 puntos (los más recientes) |
| `GET /telemetry/alerts` | `?deviceCode=&state=RAISED\|CLEARED&from=&to=` | `200 [TelemetryAlertResource]` (máximo 500, más recientes primero) |

## 6. Contratos que se consumen (servicios existentes, sin cambios)

| Llamador | Endpoint existente | Respuesta usada |
|---|---|---|
| App → IAM | `POST /api/v1/authentication/sign-in` `{"email","password"}` | `200 {"id":15,"email":"…","token":"<JWT>"}` |
| App → IAM | `GET /api/v1/users/{id}` | `{"id","fullName","email","phone","status","documentType","documentNumber","roles"}` |
| App → Residential | `GET /api/v1/residential/buildings/{idBuilding}/residents` | `[{"idUserUnit","idUnit","idUser","startDate","endDate","status":"ACTIVE"\|"INACTIVE"}]`; la app lo usa para elegir a quién autorizar |
| Access → Residential | el mismo endpoint, con token de servicio | Construye `ResidentStatus` (`userId → buildingId, unitIds`) usando las filas `status = "ACTIVE"` |
| Access → Payment | `GET /api/v1/payments/debts/unit/{unitId}`, con token de servicio | `[{"id","unitId","description","amount","currency","dueDate":"2026-10-01","status":"PENDING"\|"PAID"\|"OVERDUE"}]`. Moroso = alguna deuda `OVERDUE`, o `PENDING` con `dueDate < hoy (America/Lima)` |

**Token de servicio** (Access → Residential y Payment):
- JWT HS con `JWT_SECRET`.
- Claims: `sub: "iot-access-management"`, `user_id: 0`, `roles: ["ADMIN"]`, `exp` = ahora + 5 min.
- Cabecera `Authorization: Bearer …`.
- Se regenera al vencer.

**Frecuencia:** cada `DEBT_CHECK_INTERVAL_MINUTES` (5), una llamada a Residential por edificio con gateway y una a Payment por unidad.

## 7. Variables de entorno (contrato de despliegue)

| Pieza | Variables |
|---|---|
| Edge Gateway | `EDGE_GATEWAY_ID`, `EDGE_SERVICE_TOKEN`, `EDGE_MQTT_HOST/PORT/USERNAME/PASSWORD/TLS/CA_FILE/CLIENT_ID`, `EDGE_AMQP_URL`, `EDGE_AMQP_EVENTS_EXCHANGE`, `EDGE_AMQP_COMMANDS_EXCHANGE`, `EDGE_SYNC_BASE_URL`, `EDGE_SYNC_API_KEY`, `EDGE_TIMEZONE` |
| Access (8089) | `PORT`, `DATABASE_URL/USERNAME/PASSWORD`, `JWT_SECRET`, `CORS_ALLOWED_ORIGINS`, `RABBITMQ_HOST/PORT/USERNAME/PASSWORD/VHOST/SSL`, `RESIDENTIAL_SERVICE_URL`, `PAYMENT_SERVICE_URL`, `DEBT_CHECK_ENABLED` (true), `DEBT_CHECK_INTERVAL_MINUTES` (5), `DEVICE_COMMAND_TTL_SECONDS` (10), `RESERVATION_MAX_HOURS` (12), `ACCESS_TIMEZONE` (America/Lima) |
| Telemetry (8090) | `PORT`, `DATABASE_URL/USERNAME/PASSWORD`, `JWT_SECRET`, `CORS_ALLOWED_ORIGINS`, `RABBITMQ_*` |
| ApiGateway | + `ACCESS_SERVICE_URL` (http://localhost:8089), `TELEMETRY_SERVICE_URL` (http://localhost:8090) |
| Firmware | `config.h`/`secrets.h`: `WIFI_SSID`, `WIFI_PASS`, `MQTT_HOST`, `MQTT_PORT`, `MQTT_USER`, `MQTT_PASS`, `MQTT_TLS`, `DEVICE_ID` |
