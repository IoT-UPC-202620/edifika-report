# Integración IoT de Edifika — Documento de diseño

Fecha: 2026-10-23 · Pedido por: Jonatan (JonatanFD) · Estado: aprobado (v2, alcance reducido + reservas de puerta)

> Los campos exactos de cada request, response y mensaje están en `2026-10-23-iot-contracts.md`. Si este documento y ese difieren, gana el de contratos.
> Ajustes posteriores a esta versión, ya incorporados en los contratos:
> - `ResidentDebtStatus` pasa a llamarse `ResidentStatus`.
> - `AccessCredential` agrega `buildingId`.
> - El sync siempre responde un snapshot completo, salvo que no haya cambios.
> - Los residentes se resuelven con `GET /api/v1/residential/buildings/{id}/residents`.

## 1. Intención y porqué

Edifika ya tiene el firmware de prueba del nodo ESP32 (puerta con RFID, relé, buzzer, OLED, LED RGB y DHT11), un Edge Gateway en Python/Flask (`Edifika-Microservice-IoT-Gateway` v0.1.0, 188 tests) y microservicios de gestión en Spring Boot. Falta la cadena que une el hardware con la nube: el gateway envía por HTTPS a un backend falso (`mock-cloud`), ningún servicio usa mensajería y no existe ningún microservicio IoT.

El objetivo es que los eventos físicos recorran **ESP32 → Mosquitto → Edge Gateway → RabbitMQ → microservicios IoT**, y que la nube pueda devolver órdenes al nodo por el camino inverso. Todo el enrutamiento se configura con variables de entorno para poder desplegarlo en la nube.

Solo hay una puerta física, así que los flujos de negocio se validan dándole a esa puerta dos **roles** intercambiables.

## 2. Flujos que se validan

1. **Abrir la puerta con tarjeta.** El nodo lee el UID, el gateway decide en local (también sin internet) y responde al nodo para que abra o deniegue. El intento llega a la nube y queda auditado.
2. **Rol de la puerta, determinado por las reservas.**
   - **Libre acceso** (`FREE_ACCESS`, el rol por defecto): entra cualquier residente con tarjeta activa que **no tenga deudas vencidas**.
   - **Reservado** (`RESERVED`): un residente **reservó** el espacio donde está la puerta. Mientras dura la reserva, solo entran el titular y las personas a las que **el titular** dio acceso.
   - **Un residente con deuda vencida no puede reservar** (409).
   - La reserva tiene inicio y fin. La puerta cambia de rol sola al empezar y al terminar la reserva, también sin internet, porque el gateway conoce la ventana.
   - Al cancelar la reserva, la puerta vuelve de inmediato a `FREE_ACCESS`.
   - El ADMIN puede reservar en nombre de un residente o cancelar cualquier reserva.
   - En cada cambio de rol, el gateway avisa al nodo (OLED y LED).
3. **Telemetría constante.** El nodo envía temperatura y humedad (DHT11) cada 10 s. El contrato admite más sensores sin cambios.
4. **LED RGB en modo reservado.** Durante la reserva, el titular (o el ADMIN) puede fijar el LED en cualquier color RGB de 24 bits (el firmware lo genera con PWM). En `FREE_ACCESS` el LED no se puede cambiar (409): muestra el estado (verde concedido, rojo denegado, blanco en reposo). Al terminar la reserva, el LED vuelve al modo de estado.

## 3. Objetivos, no-objetivos y anti-objetivos

**Objetivos**
1. Mosquitto independiente del gateway; gateway y nodos llegan al broker solo por variables de entorno (host, puerto, usuario, contraseña, TLS).
2. El Edge Gateway publica en RabbitMQ (AMQP) en lugar de HTTPS, conservando el outbox (at-least-once, sin pérdidas en cortes), y consume órdenes de la nube por RabbitMQ.
3. **IoT Access Management Service**, que gestiona el ESP32 y sus comunicaciones: identidad de gateways y nodos, rol de la puerta, tarjetas, autorizados, verificación de deudas, órdenes al nodo (LED) y auditoría de accesos.
4. **IoT Telemetry Service**, que recibe y expone temperatura y humedad.
5. Una API REST completa para la futura app móvil Flutter: autenticación (la de IAM, existente), las operaciones de residente y las de administrador, documentada en Swagger.
6. Un contrato RabbitMQ único (exchanges, routing keys, sobre, colas, DLQ, idempotencia).
7. Tests unitarios por servicio y tests de integración de punta a punta con broker real.
8. `wokwi/FIRMWARE_INTEGRATION.md` en el repo de documentación, con todos los cambios que necesita el firmware para integrarse.

**No-objetivos**
- Cambios en la web (FrontEnd), la app móvil, Payment, Reservation, Residential, IAM, Notification, Report, Forum o Communications. La única excepción son las **rutas** del ApiGateway (solo configuración).
- Smart Lighting y Smart Irrigation (ni servicio ni firmware de riego).
- Modificar `edifika-report/wokwi/firmware/**`.
- Autenticación dinámica por dispositivo en Mosquitto (queda una ACL estática de ejemplo).
- Desbloqueo remoto de la puerta (no está entre los flujos pedidos).

**Anti-objetivos (fracaso aunque funcione)**
- Que los servicios nuevos no sigan el estilo de los existentes.
- Que una caída de internet o de RabbitMQ pierda accesos o impida abrir la puerta en local.
- Que un mensaje duplicado produzca efectos dobles.
- Commitear secretos como valores por defecto (los repos actuales tienen credenciales de Supabase en `application.properties`; no se copia eso).

## 4. Estado actual (resumen del análisis)

| Pieza | Estado |
|---|---|
| Edge Gateway (`Dev/edge-gateway`, `develop` = `origin/main` en código) | Flask 3.1, Peewee, SQLite, paho-mqtt 2.1. Contrato `edifika/v1/nodes/{deviceId}/{heartbeat\|access\|readings\|ack\|commands}`. Outbox con lotes y backoff. Sync `GET /api/v1/edge/sync`. Sensores: `humidity`, `ultrasonic`. Dispositivos registrados solo en local. Sin TLS MQTT. Decide con credencial, permiso por área y horario. `develop` no está en el remoto. |
| Firmware de documentación | Prueba de hardware sin WiFi/MQTT; abre con cualquier tarjeta. No se modifica. |
| Servicios Java | Sin mensajería. Payment es la mejor plantilla. JWT HMAC con `JWT_SECRET` compartido; claims `user_id`, `roles` (`ADMIN, OWNER, TENANT`). |
| Datos de deudas | Payment: `GET /api/v1/payments/debts/unit/{unitId}`. Residential: unidades y residentes (`/api/v1/residential/...`). Ambos validan JWT localmente con el secreto compartido. |
| ApiGateway | Spring Cloud Gateway, `permitAll`, rutas en properties y en `RoutesConfig`. Puertos 8080–8088 ocupados. |

## 5. Arquitectura objetivo

```
ESP32 ──MQTT(S)──▶ Mosquitto ◀──MQTT(S)── Edge Gateway ──AMQP(S) eventos──▶ RabbitMQ ──▶ IoT Access Management
(puerta)        (independiente)            (Flask)     ◀──AMQP(S) órdenes──           └─▶ IoT Telemetry
                                              │
                                              └──HTTPS GET /api/v1/edge/sync──▶ IoT Access Management
App móvil / Postman ──HTTPS──▶ ApiGateway ──▶ IAM (sign-in, existente) · Access · Telemetry
IoT Access Management ──HTTPS (token de servicio)──▶ Residential, Payment (solo lectura, existentes)
```

- **Edge → nube (eventos):** cada fila del outbox se publica en `edifika.events` con publisher confirms; la fila queda enviada solo cuando RabbitMQ confirma.
- **Nube → edge (órdenes):** cada gateway consume su cola `edge.<gatewayCode>.commands` (exchange `edifika.edge.commands`, routing key `<gatewayCode>.#`). El gateway no expone ningún puerto, así que funciona detrás de NAT. Traduce la orden a un comando MQTT y el `ack` del nodo vuelve como evento `edge.command-result`.
- **Nube → edge (caché):** se mantiene el pull HTTP existente, servido ahora por Access Management, con `devices[]` en el cuerpo. Cuando algo cambia, Access publica la orden `sync-requested` para que el gateway haga pull de inmediato en vez de esperar al intervalo de 60 s.

## 6. Modelo de datos

Estilo de Payment: IDs `Long` IDENTITY, agregados que extienden `AuditableAbstractAggregateRoot`, enums `@Enumerated(STRING)`, referencias a otros contextos por id lógico, tablas en snake_case pluralizado.

### 6.1 IoT Access Management (`com.edifika.access`, puerto 8089)

**`EdgeGateway` (agregado)** — uno por edificio.

| Campo | Tipo | Notas |
|---|---|---|
| gatewayCode | String, único | es `EDGE_GATEWAY_ID`, p. ej. `edge-gateway-01` |
| buildingId | Long | ref. lógica a Residential |
| name | String | |
| apiKeyHash | String | SHA-256; la clave en claro se muestra una sola vez al crear o rotar |
| status | `GatewayStatus` | `PROVISIONED, ONLINE, OFFLINE, DECOMMISSIONED` |
| syncVersion | Long | versión monotónica del estado servido al edge |
| lastSyncAt | Instant | |

**`IotDevice` (agregado)** — identidad del ESP32.

| Campo | Tipo | Notas |
|---|---|---|
| deviceCode | String, único | es el `deviceId` de los tópicos MQTT, p. ej. `esp32-door-01` |
| gatewayId | Long | |
| buildingId | Long | heredado del gateway |
| name, location | String | p. ej. "Puerta piscina" |
| deviceType | `DeviceType` | `DOOR, SENSOR` (la puerta actual es `DOOR`) |
| capabilities | `Set<DeviceCapability>` | `RFID, LOCK, BUZZER, OLED, RGB_LED, RTC, TEMPERATURE, HUMIDITY` (ampliable) |
| accessMode | `AccessMode` | `FREE_ACCESS, RESERVED`; **derivado**: `RESERVED` si hay una `DoorReservation` activa ahora mismo, `FREE_ACCESS` si no. Se expone, pero no se escribe directamente |
| ledColor | `RgbColor` (VO `#RRGGBB`), nullable | último color confirmado por el nodo; solo significa algo en `RESERVED` |
| unlockSeconds | Integer | por defecto 5 |
| firmwareVersion | String | del heartbeat |
| status | `DeviceStatus` | `PROVISIONED, ACTIVE, OFFLINE, MAINTENANCE, DECOMMISSIONED` |
| lastSeenAt | Instant | |

Reglas:
- `deviceCode` no se repite (409).
- Crear, cancelar o terminar una reserva, o cambiar sus autorizados, incrementa `EdgeGateway.syncVersion` y publica `sync-requested`.
- Al volver a `FREE_ACCESS` se borra `ledColor` y el gateway envía al nodo `mode {mode: FREE_ACCESS}`, que devuelve el LED al modo de estado.
- Un dispositivo `DECOMMISSIONED` sale del sync y el gateway lo trata como no registrado.

**`AccessCredential` (agregado)**: `userId` (nullable para tarjetas creadas en el edge), `holderName`, `rfidUid` (VO `RfidUid`: mayúsculas, sin espacios, hexadecimal; único), `status` (`ACTIVE, SUSPENDED, REVOKED, LOST`), `suspensionReason` (`MANUAL, DELINQUENT`), `validFrom`, `validUntil`, `origin` (`CLOUD, EDGE`), `edgeResidentRef`.

**`DoorReservation` (agregado)**: `deviceId`, `holderUserId`, `startsAt`, `endsAt`, `status` (`SCHEDULED, ACTIVE, ENDED, CANCELLED`), `createdBy`, `cancelledBy`, y la colección de **`DoorAuthorization`** (entidad hija: `userId`, `grantedAt`, `status` `ACTIVE, REVOKED`).

Reglas:
- `endsAt > startsAt`; duración máxima configurable (`RESERVATION_MAX_HOURS`, 12 por defecto); no puede empezar en el pasado.
- Dos reservas de la misma puerta no se superponen (409).
- El titular no puede tener deuda vencida al crear la reserva (409 `"El residente tiene deudas vencidas"`). La verificación se hace en línea contra Residential/Payment (§7); si esos servicios no responden, se usa el último `ResidentDebtStatus` conocido y, si no hay ninguno, se rechaza con 503.
- Solo el titular (o el ADMIN) agrega o quita autorizados. El titular está autorizado implícitamente.
- Un `@Scheduled` cada 30 s pasa `SCHEDULED → ACTIVE` y `ACTIVE → ENDED` según el reloj, y en cada transición publica `iot.access-mode-changed` y `sync-requested`. El gateway no depende de ese aviso para cambiar de rol a tiempo, porque recibe las ventanas en el sync.

**`ResidentDebtStatus` (entidad)**: `userId` (único), `unitIds`, `delinquent` (bool), `overdueDebtCount`, `checkedAt`, `lastError`. Cache del resultado de la verificación de deudas.

**`AccessAttempt` (entidad inmutable)**: `deviceId`, `credentialId` nullable, `userId` nullable, `rfidUidMasked`, `accessMode` vigente, `result` (`GRANTED, DENIED`), `reason` (`GRANTED, NOT_REGISTERED, SUSPENDED, DELINQUENT, REVOKED, EXPIRED, NOT_AUTHORIZED, MAINTENANCE`), `occurredAt`, `receivedAt`, `sourceEventId` (único → idempotencia).

**`DeviceCommand` (entidad)**: `commandId` (String único), `deviceId`, `type` (`SET_LED`), `params` (JSON), `requestedBy`, `status` (`PENDING, OK, FAILED, EXPIRED`), `detail`, `requestedAt`, `expiresAt`, `resolvedAt`.

**`ProcessedEvent`**: `eventId` (PK), `processedAt`. Lo usa cada consumidor.

Mapeo de motivos del gateway: `unknown_credential→NOT_REGISTERED`, `credential_suspended→SUSPENDED` (o `DELINQUENT` si la credencial tiene `suspensionReason = DELINQUENT`), `credential_revoked→REVOKED`, `credential_expired→EXPIRED`, `not_authorized→NOT_AUTHORIZED`, `maintenance→MAINTENANCE`.

### 6.2 IoT Telemetry (`com.edifika.telemetry`, puerto 8090)

- `DeviceProjection`: proyección de `iot.device-*`, con `deviceId`, `deviceCode`, `buildingId`, `name`, `connectionStatus` (`ACTIVE, OFFLINE`) y `lastHeartbeatAt`.
- `SensorReading`, tabla `sensor_readings` con PK `(device_code, captured_at, magnitude)`.
  - Campos: `magnitude` (`TEMPERATURE, HUMIDITY`, ampliable), `value`, `unit`, `timeSuspect`, `sourceEventId`.
  - Si la base es TimescaleDB se convierte en hypertable con un SQL idempotente al arrancar; si no, queda como tabla normal.
- `DeviceAlert`: `deviceCode`, `kind`, `state` (`RAISED, CLEARED`), `details`, `occurredAt`.

## 7. Verificación de deudas sin tocar Payment ni Residential

- `DebtCheckService` en Access, detrás del puerto de salida `ExternalDebtService` (patrón ACL de Payment, `RestClient` con timeouts).
- Para cada `userId` con credencial `ACTIVE`, o suspendida por `DELINQUENT`:
  1. Pide las unidades del residente a Residential.
  2. Pide las deudas de cada unidad a Payment (`GET /api/v1/payments/debts/unit/{unitId}`).
  3. Es moroso si alguna deuda no está pagada y su `dueDate` ya pasó. El builder confirma los nombres reales de campos y estados en los recursos de Payment y Residential.
- **Autenticación:** un token de servicio firmado con el `JWT_SECRET` compartido (`user_id = 0`, `roles = ["ADMIN"]`, 5 min de vida, `sub = "iot-access-management"`). Los servicios existentes lo aceptan sin cambios porque validan cualquier JWT firmado con ese secreto.
- **Cuándo corre:**
  - Un `@Scheduled` cada `DEBT_CHECK_INTERVAL_MINUTES` (5 por defecto).
  - Al crear o reactivar una credencial.
  - Con `POST /api/v1/access/residents/{userId}/debt-check` (ADMIN).
- **Efecto:**
  - Moroso: la credencial pasa a `SUSPENDED` con `suspensionReason = DELINQUENT`.
  - Ya no moroso: se reactiva solo si estaba suspendida por `DELINQUENT`.
  - Cada cambio incrementa `syncVersion` y publica `sync-requested`.
- **Si Residential o Payment no responden:** se conserva el último estado conocido (`lastError`) y la puerta sigue decidiendo con él. No se bloquea a nadie por un error de red.
- `DEBT_CHECK_ENABLED=false` desactiva la verificación (para demos y tests sin esos servicios).

## 8. Cambios en el Edge Gateway

- **Config:**
  - `EDGE_MQTT_TLS`, `EDGE_MQTT_CA_FILE`, `EDGE_MQTT_CLIENT_ID`.
  - `EDGE_AMQP_URL`, `EDGE_AMQP_EVENTS_EXCHANGE`, `EDGE_AMQP_COMMANDS_EXCHANGE`.
  - `EDGE_SYNC_BASE_URL`, `EDGE_SYNC_API_KEY`.
  - `EDGE_CLOUD_*` queda como alias de `EDGE_SYNC_*` durante una versión, con aviso en el log.
- **compose:** Mosquitto pasa al perfil `broker`. Sin ese perfil, el gateway usa el broker que indiquen las variables. Se agrega RabbitMQ en el perfil `cloud-local`. `mock-cloud` se mantiene solo para los tests del sync antiguo.
- **Publicador AMQP** (`pika`, publisher confirms, una conexión en el hilo del forwarder) que reemplaza `CloudClient.post_events`. Mapea los errores a `CloudUnavailable` o `CloudRejected` para que `OutboxForwarder` no cambie.
- **Consumidor de órdenes** (hilo propio, cola `edge.<gatewayCode>.commands`):
  - `sync-requested`: hace pull inmediato.
  - `device-command`: valida el dispositivo y la vigencia (`expiresAt`), envía el comando MQTT usando el `commandId` de la nube y reporta el `ack` como `CommandResult`.
- **Sync con `devices[]` y `reservations[]`:**
  - Cada dispositivo trae `{deviceCode, name, location, capabilities, ledColor?, status, settings?}`, junto con `removedDeviceCodes[]`.
  - Cada reserva trae `{id, deviceCode, holderResidentId, startsAt, endsAt, authorizedResidentIds[]}`, junto con `removedReservationIds[]`. Las reservas `CANCELLED` o `ENDED` se envían como removidas.
  - El registro local por REST se mantiene para emergencias.
- **Rol calculado en el edge:** `RESERVED` si existe una reserva de ese dispositivo con `startsAt ≤ ahora < endsAt`, y `FREE_ACCESS` si no. La tarea de mantenimiento local (cada 1 s) detecta el cambio de rol y envía `mode` al nodo, así el cambio ocurre a tiempo aunque no haya internet.
- **Decisión de acceso por rol:**
  - `FREE_ACCESS`: credencial `ACTIVE` y vigente. La morosidad ya viene aplicada como `SUSPENDED`.
  - `RESERVED`: lo anterior, y además el residente es el titular o está en `authorizedResidentIds` de la reserva activa. Si no: `not_authorized` (motivo nuevo).
  - Internamente se reutiliza el modelo `AccessPermission` del gateway, con una fila por residente autorizado y la ventana de la reserva, ahora asociado a `device_id`.
- **Contrato MQTT:**
  - `readings.sensor` acepta `temperature` (−40..85 °C) además de `humidity` y `ultrasonic`.
  - Comandos nuevos: `rgb {color: "#RRGGBB"}` y `mode {mode: FREE_ACCESS|RESERVED, color?}`.
  - El gateway rechaza `rgb` hacia un nodo en `FREE_ACCESS` con un `CommandResult` `FAILED`.
- **Eventos:** `DeviceStatus` agrega las transiciones `online`/`offline` y `firmware`.
- **Simulador:** soporta `rgb`, `mode` y lecturas de temperatura y humedad, para validar de punta a punta sin hardware.

## 9. Contrato RabbitMQ

**Exchanges:**
- `edifika.events`: topic, durable.
- `edifika.edge.commands`: topic, durable.
- `edifika.dlx`: topic, durable.

**Routing keys `<origen>.<evento>`:**
- Edge: `edge.access-attempt`, `edge.reading`, `edge.alert`, `edge.device-status`, `edge.command-result`, `edge.credential-changed`.
- Access: `access.physical-access-granted`, `access.physical-access-denied`, `iot.device-registered`, `iot.device-updated`, `iot.device-decommissioned`, `iot.access-mode-changed`.
- Telemetry: `telemetry.device-went-offline`, `telemetry.sensor-faulty`.
- Órdenes (en `edifika.edge.commands`): `<gatewayCode>.device-command`, `<gatewayCode>.sync-requested`.

**Colas** (durables, con `x-dead-letter-exchange = edifika.dlx` y `<cola>.dlq`):

| Cola | Enlaces | Consumidor |
|---|---|---|
| `access.edge-events` | `edge.access-attempt`, `edge.credential-changed`, `edge.device-status`, `edge.command-result` | Access |
| `telemetry.edge-events` | `edge.reading`, `edge.alert`, `edge.device-status` | Telemetry |
| `telemetry.device-registry` | `iot.device-*` | Telemetry |
| `edge.<gatewayCode>.commands` | `<gatewayCode>.#` | Edge Gateway |

Cada servicio declara sus colas al arrancar (`Declarables`). Los eventos de dominio que hoy nadie consume (`physical-access-*`, `access-mode-changed`) igual se publican, para que otros servicios puedan suscribirse más adelante sin cambiar Access.

**Sobre (todos los mensajes).** Propiedades AMQP: `message_id = eventId`, `type = eventType`, `content_type = application/json`, `delivery_mode = 2`.
```json
{ "eventId": "6f1c…", "eventType": "PhysicalAccessGranted", "eventVersion": 1,
  "occurredAt": "2026-10-23T15:04:05Z", "producer": "iot-access-management",
  "buildingId": 12, "gatewayCode": "edge-gateway-01", "correlationId": null, "payload": { } }
```
En los eventos del edge, `buildingId` es nulo. Los consumidores lo resuelven con `gatewayCode`.

**Payloads del edge:** son los `kind` actuales del outbox, sin cambios, más lo indicado en §8. `eventType` es el `kind` en PascalCase: `AccessAttempt`, `Reading`, `Alert`, `DeviceStatus`, `CommandResult`, `CredentialChanged`. `AccessAttempt` agrega `accessMode`.

**Payloads de dominio:**

| eventType | payload |
|---|---|
| `PhysicalAccessGranted` | `{attemptId, deviceCode, userId, credentialId, accessMode, occurredAt}` |
| `PhysicalAccessDenied` | `{attemptId, deviceCode, userId?, rfidUidMasked, accessMode, reason, occurredAt}` |
| `DeviceRegistered` / `DeviceUpdated` | `{deviceId, deviceCode, gatewayCode, buildingId, name, deviceType, capabilities[], accessMode, status}` |
| `DeviceDecommissioned` | `{deviceId, deviceCode}` |
| `AccessModeChanged` | `{deviceId, deviceCode, from, to, changedBy}` |
| `DeviceWentOffline` | `{deviceCode, lastSeenAt}` |
| `SensorFaulty` | `{deviceCode, sensor, consecutiveInvalid}` |
| `DeviceCommandRequested` (orden) | `{commandId, deviceCode, type: "rgb", params: {color}, expiresAt}` |
| `SyncRequested` (orden) | `{syncVersion}` |

**Garantías:**
- At-least-once.
- Cada consumidor registra `eventId` en `processed_events`, en la misma transacción que su efecto; un duplicado se confirma sin efecto.
- El edge publica con confirms.
- Tres fallos seguidos en un consumidor envían el mensaje a la DLQ.
- El orden solo está garantizado por publicador.

## 10. API REST (completa para la app móvil)

**Autenticación:** la existente de IAM, `POST /api/v1/authentication/sign-in` a través del ApiGateway. Los servicios IoT validan el JWT como Payment (`JwtTokenService` + `JwtAuthenticationFilter`, `@AuthenticationPrincipal AuthenticatedUser`). El `userId` del residente sale del token, nunca del cuerpo.

**Access — residente** (cualquier rol autenticado):

| Método y ruta | Uso |
|---|---|
| `GET /api/v1/access/me/doors` | Puertas del edificio con `accessMode`, reserva actual (sin datos de otros residentes, salvo si soy el titular), `ledColor`, `status`, y `canEnter`/`canReserve`/`canChangeLed` para el usuario |
| `GET /api/v1/access/me/credentials` | Mis tarjetas y su estado (incluye si estoy suspendido por deuda) |
| `GET /api/v1/access/me/attempts?from&to` | Mis intentos de acceso |
| `GET /api/v1/iot/devices/{id}/reservations?from&to` | Disponibilidad: franjas reservadas (sin datos del titular) |
| `POST /api/v1/iot/devices/{id}/reservations` `{startsAt, endsAt}` | Reservar la puerta: 201; 409 si hay deuda vencida o superposición |
| `GET /api/v1/access/me/reservations` | Mis reservas |
| `DELETE /api/v1/access/reservations/{id}` | Cancelar (titular o ADMIN) |
| `POST /api/v1/access/reservations/{id}/authorizations` `{userId}` · `GET` · `DELETE …/{userId}` | El titular da o quita acceso. Para elegir a la persona, la app usa el directorio de residentes de Residential que ya existe |
| `PUT /api/v1/iot/devices/{id}/led` `{color}` | Cambia el LED: 202 `{commandId}`; 409 si la puerta está en `FREE_ACCESS` o el nodo está `OFFLINE`; 403 si no soy el titular de la reserva activa ni ADMIN |
| `GET /api/v1/iot/device-commands/{commandId}` | Estado de la orden: `PENDING`, `OK`, `FAILED`, `EXPIRED` (la orden vence a los 10 s) |

**Access — ADMIN:**

| Método y ruta | Uso |
|---|---|
| `POST/GET /api/v1/iot/gateways`, `POST /api/v1/iot/gateways/{id}/api-key` | Registrar gateways, rotar la clave |
| `POST/GET /api/v1/iot/devices`, `GET/PATCH/DELETE /api/v1/iot/devices/{id}` | Registro de nodos (`DELETE` = decommission) |
| `POST /api/v1/iot/devices/{id}/reservations` `{holderUserId, startsAt, endsAt}` · `GET /api/v1/access/reservations?deviceId&status` | Reservar en nombre de un residente (el rol cambia por la reserva) y listar todas |
| `PUT /api/v1/iot/devices/{id}/maintenance` `{enabled}` | Mantenimiento |
| `POST/GET /api/v1/access/credentials`, `PATCH /api/v1/access/credentials/{id}/status` | Tarjetas (asignar a `userId`, suspender, revocar, reportar pérdida) |
| `GET /api/v1/access/attempts?deviceId&result&from&to` | Auditoría |
| `POST /api/v1/access/residents/{userId}/debt-check` | Forzar la verificación de deudas |

**Edge (sin JWT):** `GET /api/v1/edge/sync?since=`, con `X-Gateway-Id` y `Authorization: Bearer <apiKey>`.

**Telemetry:**

| Método y ruta | Uso |
|---|---|
| `GET /api/v1/telemetry/devices` | Nodos con estado de conexión y última lectura de cada magnitud |
| `GET /api/v1/telemetry/devices/{deviceCode}/latest` | Última temperatura y humedad |
| `GET /api/v1/telemetry/readings?deviceCode&magnitude&from&to&bucket` | Serie; `bucket` = `raw`, `1m`, `1h` |
| `GET /api/v1/telemetry/alerts?deviceCode&state` | Alertas del edge |

Todas las respuestas usan el `ErrorResource` de Payment. Los listados se filtran por el `buildingId` de los gateways.

**ApiGateway (solo configuración):** rutas `/api/v1/iot/**`, `/api/v1/access/**` y `/api/v1/edge/**` hacia `ACCESS_SERVICE_URL` (8089), y `/api/v1/telemetry/**` hacia `TELEMETRY_SERVICE_URL` (8090), en `application.properties` y en `RoutesConfig`, siguiendo el formato existente.

## 11. Decisiones tomadas por mí (revisables)

1. **Plantilla:** Payment, con Spring Boot 4.0.6, Java 21, springdoc 3.0.3 y jjwt 0.12.3. Mensajería con `spring-boot-starter-amqp`:
   - `infrastructure/messaging/rabbitmq/configuration/RabbitMqConfiguration`
   - `interfaces/messaging/*EventConsumer` (`@RabbitListener`; traduce el sobre a un command)
   - `application/internal/outboundservices/messaging/IntegrationEventPublisher` con su adaptador Rabbit, que publica `@TransactionalEventListener(AFTER_COMMIT)` a partir de los eventos de dominio de los agregados
2. **Nombres:** repos `Edifika-Microservice-IoT-Access-Management`, `Edifika-Microservice-IoT-Telemetry` y `Edifika-IoT-Platform` (compose de integración, `contracts/` con JSON Schema y `integration-tests/` en pytest). Se crean **solo en local**, sin repos en GitHub ni push hasta que lo apruebes.
3. **Morosidad de los invitados:** la suspensión por deuda se aplica a la tarjeta en cualquier rol, así que un invitado con deuda vencida tampoco entra durante una reserva. Es una sola regla, la misma que en libre acceso.
4. **Reservas de puerta dentro de Access, no en Reservation:** con una sola puerta es lo más directo y no obliga a tocar Reservation. Si más adelante Reservation publica sus reservas, `DoorReservation` puede crearse desde ese evento sin cambiar el edge.
5. **Cambio de LED asíncrono** (202 + consulta del estado), con vencimiento a los 10 s.
6. **Tarjetas creadas en el edge:** Access hace upsert desde `edge.credential-changed` (`origin = EDGE`, `userId = null`), para que la siguiente sincronización completa no las borre. Si la nube cambió la credencial después del `occurredAt`, gana la nube.
7. **Gateway:** trabajo en `Dev/edge-gateway`, en la rama `feature/amqp-integration`. Las rutas del ApiGateway se hacen en su clon, en la rama `feature/iot-routes`.
8. **Firmware:** solo `FIRMWARE_INTEGRATION.md`. La validación de punta a punta usa el simulador del gateway.

## 12. Variables de entorno de los servicios Java

Las mismas claves que Payment (`PORT`, `DATABASE_URL`, `DATABASE_USERNAME`, `DATABASE_PASSWORD` sin defaults secretos, `JWT_SECRET`, `CORS_ALLOWED_ORIGINS`), más:
- `RABBITMQ_HOST`, `RABBITMQ_PORT`, `RABBITMQ_USERNAME`, `RABBITMQ_PASSWORD`, `RABBITMQ_VHOST`, `RABBITMQ_SSL` y, opcionalmente, `RABBITMQ_ADDRESSES`.
- Solo en Access: `RESIDENTIAL_SERVICE_URL`, `PAYMENT_SERVICE_URL`, `DEBT_CHECK_ENABLED`, `DEBT_CHECK_INTERVAL_MINUTES`, `DEVICE_COMMAND_TTL_SECONDS` (10).

## 13. Hitos y métricas

Cada hito cierra con sus métricas comprobadas por comando, registradas en `Edifika-IoT-Platform/MILESTONES.md` (fecha, comando, salida resumida, pendientes). No se empieza un hito con el anterior en rojo.

| # | Hito | Métricas de salida |
|---|---|---|
| H0 | **Plataforma**: compose de infraestructura (RabbitMQ con management, Mosquitto, PostgreSQL con DB por servicio, TimescaleDB), `contracts/` con JSON Schema de cada mensaje | `docker compose up -d` deja todo `healthy` en < 120 s; los ejemplos del contrato validan contra sus schemas (pytest) |
| H1 | **Edge Gateway**: broker independiente con TLS opcional, publicador AMQP, consumidor de órdenes, `devices[]` y roles en el sync, `temperature`, `rgb` y `mode`, simulador actualizado | Los 188 tests actuales y los nuevos en verde; suite < 30 s. Con RabbitMQ real: un tap aparece en `access.edge-events` en ≤ 6 s; RabbitMQ caído 60 s con 20 taps → al volver llegan los 20, sin duplicados en el consumidor; decisión local < 500 ms (US45) |
| H2 | **IoT Access Management** completo (modelo, API, consumidores, publicador, sync, verificación de deudas con stubs WireMock de Residential/Payment) | Tests unitarios (dominio, servicios, controladores) en verde. Integración con RabbitMQ real (Testcontainers): un `AccessAttempt` enviado 3 veces se guarda una vez y produce un solo `PhysicalAccess*`. Deuda vencida (WireMock) → credencial `SUSPENDED/DELINQUENT` → `syncVersion` + 1. `POST` de credencial 201 en < 300 ms |
| H3 | **IoT Telemetry** | Integración: 100 `Reading` → 100 filas, sin duplicados al reenviarlos; p95 de ingesta < 500 ms; `latest` devuelve la última temperatura y humedad; un `device_offline` del edge → `DeviceWentOffline` |
| H4 | **De punta a punta**: Access + Telemetry + gateway + simulador + ApiGateway en el compose de la plataforma | `pytest integration-tests` en verde con 6 escenarios: (1) `FREE_ACCESS`, residente al día → concedido; (2) `FREE_ACCESS`, residente con deuda (stub) → denegado `DELINQUENT`, y ese residente no puede reservar (409); (3) un residente reserva → el nodo simulado recibe `mode RESERVED` en < 5 s; (4) durante la reserva: titular → concedido, invitado agregado por el titular → concedido, otro residente al día → denegado `NOT_AUTHORIZED`; (5) LED en `RESERVED` por el titular → el nodo recibe `rgb` y el comando queda `OK` en < 3 s; otro residente → 403; en `FREE_ACCESS` → 409; (6) con RabbitMQ y la API detenidos, una reserva que termina devuelve la puerta a `FREE_ACCESS` a tiempo (± 2 s) solo con el gateway; (7) lecturas cada 10 s visibles en `/telemetry/.../latest`. Todo a través del ApiGateway, con el JWT de IAM (o uno firmado con el mismo secreto si IAM no está en el compose) |
| H5 | **Documentación**: `wokwi/FIRMWARE_INTEGRATION.md`, READMEs de cada repo, colección Postman de la API para la app móvil | El documento de firmware cubre WiFi/MQTT, identidad, heartbeat, acceso con espera de `access_result`, `mode`, `rgb`, lecturas, `ack`, pines y diferencias con `diagram.json`; la colección Postman cubre todos los endpoints de §10 |

Requisito de entorno: Docker Desktop encendido desde H0 (Testcontainers y compose).
