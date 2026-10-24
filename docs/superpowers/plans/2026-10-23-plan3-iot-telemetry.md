# Plan 3 — IoT Telemetry Service (H3) Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Microservicio que ingiere de forma idempotente la temperatura, la humedad y el estado de los nodos que llegan del edge, los guarda en TimescaleDB y los expone por REST con series agregadas.

**Architecture:** Mismo esqueleto que el Plan 2 (plantilla Payment), con un bounded context `telemetry`.
- Dos consumidores RabbitMQ: los eventos del edge y el registro de dispositivos que publica Access.
- `sensor_readings` usa una clave compuesta y se convierte en hypertable al arrancar si existe la extensión.
- Las series se agregan en SQL con `date_trunc`, así funcionan con o sin TimescaleDB.

**Tech Stack:** Java 21, Spring Boot 4.0.6, Spring Data JPA, Spring AMQP, PostgreSQL/TimescaleDB, springdoc 3.0.3, jjwt 0.12.3, JUnit 5, Mockito, Testcontainers (`timescale/timescaledb:latest-pg17`, `rabbitmq:4-management`), `com.networknt:json-schema-validator`.

**Spec:** `docs/superpowers/specs/2026-10-23-iot-contracts.md` §3 (colas `telemetry.*`, `Reading`, `Alert`, `DeviceStatus`, `iot.device-*`, `DeviceWentOffline`, `SensorFaulty`), §5 y §7; `docs/superpowers/specs/2026-10-23-iot-integration-design.md` §6.2 y §13 H3.

## Global Constraints

- Repo nuevo `C:\Users\nanak\Dev\edifika\Edifika-Microservice-IoT-Telemetry`, solo local. Gitflow según el roadmap: `main` con `chore: initial commit`, luego `develop`; tareas en `feature/H3-<slug>` (`scaffold`, `readings-model`, `ingestion`, `telemetry-api`, `docs`), cerradas con `merge --no-ff`; al terminar, `release/0.1.0`.
- Coordenadas: `com.edifika:iot-telemetry`. Paquetes `com.edifika.telemetry.telemetry` y `com.edifika.telemetry.shared`. Puerto `${PORT:8090}`.
- **Estilo, errores, seguridad, mensajería, tests y contract tests:** idénticos a los Global Constraints del Plan 2, cambiando `access` por `telemetry`. Si el Plan 2 ya existe, copiar desde él `shared/`, `infrastructure/authorization/sfs/`, `GlobalExceptionHandler`, `IntegrationEnvelope`, `ProcessedEventGuard`, los helpers de test y `RabbitMqConfiguration` como base. Si no existe, copiar desde Payment y escribir esas piezas con las mismas firmas que define el Plan 2.
- `producer = "iot-telemetry"`.
- `Magnitude`: `TEMPERATURE, HUMIDITY`, ampliable. El `sensor` del edge se traduce en mayúsculas (`temperature → TEMPERATURE`, `humidity → HUMIDITY`); un sensor desconocido se guarda **solo** si existe en el enum y si no, se ignora con un log `DEBUG`.
- Unidades: `°C` y `%`.
- Todos los usuarios autenticados pueden leer (contratos §5); no hay endpoints de escritura.

## Review Focus

1. **Lecturas con `timeSuspect: true`**: se guardan, pero no deben romper el orden de `latest` → `latest` usa la mayor `capturedAt` con `timeSuspect = false` si existe → test en Task 3.
2. **Dos lecturas con el mismo `(deviceCode, capturedAt, magnitude)`** pero distinto `eventId` (el nodo reenvía): se guarda una → `ON CONFLICT DO NOTHING` → test en Task 3.
3. **Lectura de un dispositivo que aún no está en la proyección** (llega antes que `DeviceRegistered`): se guarda igual y la proyección se crea mínima a partir del `gatewayCode` → test en Task 3.
4. **Rango de consulta invertido** (`from > to`): 400 → test en Task 4.
5. **Sin extensión TimescaleDB** (PostgreSQL plano): el servicio arranca y consulta igual → test en Task 2 con `postgres:17`.

---

### Task 1: Esqueleto

**Files:**
- Igual que la Task 1 del Plan 2, con `EdifikaMicroserviceIoTTelemetryApplication`, `EXPOSE 8090`, artifact `iot-telemetry` y un `TelemetryDeviceController` provisional que hace `GET /api/v1/telemetry/devices → []`.
- Test: `ApplicationContextIT`: 401 sin token y 200 en `/v3/api-docs`.

- [ ] **Step 1:** Escribir el test. **Step 2:** FAIL. **Step 3:** Implementar. **Step 4:** `./mvnw -B verify` → PASS. **Step 5:** Commit `chore: scaffold IoT Telemetry from Payment template`.

### Task 2: Modelo de datos e hypertable

**Files:**
- Create: `domain/model/entities/SensorReading.java`, con `@IdClass(SensorReadingId)` sobre `deviceCode`, `capturedAt` y `magnitude`, más `value` (double), `unit`, `timeSuspect`, `sourceEventId` y `buildingId`.
- Create: `domain/model/valueobjects/{Magnitude, ConnectionStatus}.java`
- Create: `domain/model/aggregates/DeviceProjection.java`, con `deviceCode` único, `deviceId`, `gatewayCode`, `buildingId`, `name`, `connectionStatus`, `lastHeartbeatAt` y `decommissioned`.
- Create: `domain/model/entities/{TelemetryAlert, ProcessedEvent}.java`. `TelemetryAlert` tiene `deviceCode`, `kind`, `state` (`RAISED, CLEARED`), `details` (texto JSON) y `occurredAt`.
- Create: los repositorios en `infrastructure/persistence/jpa/repositories/`.
- Create: `infrastructure/persistence/timescale/HypertableInitializer.java`. Es un `ApplicationRunner` que ejecuta `SELECT count(*) FROM pg_extension WHERE extname='timescaledb'` y, si da 1, `SELECT create_hypertable('sensor_readings','captured_at', if_not_exists => TRUE, migrate_data => TRUE)`. Cualquier error se registra como `WARN` sin detener el arranque.
- Test: `HypertableInitializerIT`, con dos contextos: TimescaleDB, donde `timescaledb_information.hypertables` incluye `sensor_readings`, y `postgres:17`, donde el contexto arranca igual.

**Interfaces:**
- Produces: `SensorReadingRepository.insertIgnoringDuplicates(SensorReading r) -> int`, con `@Modifying @Query(nativeQuery=true)` y `INSERT … ON CONFLICT (device_code, captured_at, magnitude) DO NOTHING`. Devuelve 1 si insertó y 0 si era un duplicado.

- [ ] **Step 1:** Escribir los tests. **Step 2:** FAIL. **Step 3:** Implementar. **Step 4:** PASS. **Step 5:** Commit `feat(model): sensor readings with Timescale hypertable, device projection and alerts`.

### Task 3: Consumidores (edge y registro de dispositivos)

**Files:**
- Create: `infrastructure/messaging/rabbitmq/configuration/RabbitMqConfiguration.java`. Declara los exchanges y dos colas con sus DLQ (contratos §3.1): `telemetry.edge-events` (con `edge.reading`, `edge.alert` y `edge.device-status`) y `telemetry.device-registry` (con `iot.device-registered`, `iot.device-updated` e `iot.device-decommissioned`). Usa el mismo retry que el Plan 2.
- Create: `interfaces/messaging/{EdgeTelemetryConsumer, DeviceRegistryConsumer}.java`
- Create: `domain/services/TelemetryIngestionService.java` + `application/internal/commandservices/TelemetryIngestionServiceImpl.java`
- Create: `application/internal/eventhandlers/TelemetryIntegrationEventHandler.java`. Publica `telemetry.device-went-offline` y `telemetry.sensor-faulty` (contratos §3.4).
- Test: `TelemetryIngestionServiceImplTest`, `EdgeTelemetryConsumerIT`

**Interfaces:**
- Produces, en `TelemetryIngestionService`:
  - `void ingestReading(IntegrationEnvelope env)`: guarda con `insertIgnoringDuplicates`, toma `buildingId` de la proyección y, si el dispositivo no existe, crea una proyección mínima con `deviceCode` y `gatewayCode`.
  - `void applyAlert(IntegrationEnvelope env)`:
    - Guarda `TelemetryAlert` con `RAISED` o `CLEARED`.
    - `sensor_fault_<s>` con `raised` publica `SensorFaulty {deviceCode, sensor: s}`.
    - `device_offline` con `raised` marca la proyección `OFFLINE` y publica `DeviceWentOffline`.
  - `void applyDeviceStatus(IntegrationEnvelope env)`:
    - `online` marca `ACTIVE` y `lastHeartbeatAt = occurredAt`.
    - `offline` marca `OFFLINE` y publica `DeviceWentOffline {deviceCode, lastSeenAt}`, solo si no estaba ya `OFFLINE`.
    - Se ignora un `occurredAt` anterior a `lastHeartbeatAt`.
  - `void applyRegistry(IntegrationEnvelope env)`: upsert de la proyección; `DeviceDecommissioned` marca `decommissioned=true`.
  - Todo método corre en `@Transactional` junto con `guard.firstTime(eventId)`.

- [ ] **Step 1: Write the failing tests**

```java
@Test void readingIsStoredOnceEvenWithDifferentEventIds() { }
@Test void readingBeforeRegistryCreatesMinimalProjection() { }
@Test void offlineStatusPublishesDeviceWentOfflineOnce() { }
@Test void sensorFaultRaisedPublishesSensorFaulty() { }
@Test void staleOnlineIsIgnored() { }
// IT
@Test void hundredReadingsStoredWithP95Under500ms() {
  // publish 100 Reading envelopes (distinct capturedAt); measure publish->row visible per message; p95 < 500 ms; republish all -> still 100 rows
}
@Test void publishedEventsMatchContract() { /* DeviceWentOffline, SensorFaulty schemas */ }
@Test void malformedGoesToDlq() { }
```

- [ ] **Step 2:** FAIL. **Step 3:** Implementar. **Step 4:** PASS. **Step 5:** Commit `feat(ingestion): idempotent readings, alerts, device status and registry projection`.

### Task 4: API REST de telemetría

**Files:**
- Create: `interfaces/rest/{TelemetryDeviceController, TelemetryReadingController, TelemetryAlertController}.java`
- Create: `interfaces/rest/resources/{DeviceTelemetryResource, LatestReadingResource, ReadingSeriesResource, ReadingPointResource, TelemetryAlertResource}.java` + assemblers
- Create: `domain/model/queries/{GetTelemetryDevicesQuery, GetLatestReadingsQuery, GetReadingSeriesQuery, GetAlertsQuery}.java`, validados en el constructor compacto: rango máximo por bucket, `from < to` y `magnitude` obligatorio.
- Create: `domain/services/TelemetryQueryService.java` + `application/internal/queryservices/TelemetryQueryServiceImpl.java`
- Create: en `SensorReadingRepository`, una consulta nativa de agregación con proyección de interfaz `BucketRow { Instant getT(); Double getValue(); Double getMin(); Double getMax(); Long getCount(); }`:
  ```sql
  SELECT date_trunc(:unit, captured_at) AS t, avg(value) AS value, min(value) AS min, max(value) AS max, count(*) AS count
  FROM sensor_readings WHERE device_code = :code AND magnitude = :mag AND captured_at >= :from AND captured_at < :to
  GROUP BY 1 ORDER BY 1 DESC LIMIT 5000
  ```
  `:unit` vale `minute` u `hour`. Las filas se reordenan en orden ascendente antes de responder.
- Test: `GetReadingSeriesQueryTest`, `TelemetryQueryServiceImplTest`, `TelemetryReadingControllerIT`

**Interfaces:**
- Produces: los endpoints, parámetros, valores por defecto, límites y forma de las respuestas de los contratos §5.
  - `latest` toma por magnitud la lectura más reciente con `timeSuspect=false`; si no hay ninguna, la más reciente.
  - En `raw`, cada punto tiene `min = max = value` y `count = 1`.

- [ ] **Step 1: Write the failing tests**

```java
@Test void rawRangeOver24hIs400() { }
@Test void fromAfterToIs400() { }
@Test void oneMinuteBucketsAggregate() { /* 6 readings in same minute -> 1 point count 6, min/max/avg */ }
@Test void latestPrefersNonSuspectReadings() { }
@Test void responsesMatchContract() { /* DeviceTelemetryResource, ReadingSeriesResource, TelemetryAlertResource */ }
@Test void anyAuthenticatedUserCanRead() { /* resident token -> 200 */ }
```

- [ ] **Step 2:** FAIL. **Step 3:** Implementar. **Step 4:** PASS. **Step 5:** Commit `feat(api): telemetry devices, latest, bucketed series and alerts`.

### Task 5: Cierre de H3

- [ ] **Step 1:** Escribir el README: variables, colas, endpoints y tests.
- [ ] **Step 2:** `./mvnw -B verify` → todo en verde.
- [ ] **Step 3:** Registrar las métricas de H3 en `Edifika-IoT-Platform/MILESTONES.md`: 100 lecturas → 100 filas sin duplicados, p95 de ingesta y `DeviceWentOffline`.
- [ ] **Step 4:** Commit `docs: README and H3 milestone metrics`.
