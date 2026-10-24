# Plan 2 — IoT Access Management Service (H2) Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Microservicio Spring Boot que gestiona los ESP32 y sus comunicaciones: gateways, nodos, tarjetas, reservas de puerta con autorizados, verificación de deudas, órdenes al nodo (LED), auditoría de accesos, sync del edge y eventos AMQP.

**Architecture:** Clon estructural de `Edifika-Microservice-Payment` (DDD/CQRS por capas). Un bounded context `access`. Además:
- RabbitMQ con Spring AMQP: un publicador de eventos de integración después del commit y un consumidor idempotente de los eventos del edge.
- Endpoint de sync autenticado por la API key del gateway.
- Clientes REST (ACL) hacia Residential y Payment con un token de servicio.

**Tech Stack:** Java 21, Spring Boot 4.0.6, Spring Data JPA, Spring Security, Spring AMQP, PostgreSQL, springdoc 3.0.3, jjwt 0.12.3, Lombok (`@Getter`, `@Slf4j`), JUnit 5, Mockito, WireMock 3.13.1, Testcontainers (PostgreSQL y RabbitMQ), `com.networknt:json-schema-validator`.

**Spec:** `docs/superpowers/specs/2026-10-23-iot-contracts.md` §2, §3, §4, §6, §7 (fuente de verdad de cada request y response); `docs/superpowers/specs/2026-10-23-iot-integration-design.md` §6.1, §7, §13 H2.

## Global Constraints

- Repo nuevo `C:\Users\nanak\Dev\edifika\Edifika-Microservice-IoT-Access-Management`, **solo local**. Gitflow según el roadmap: `main` con `chore: initial commit`, luego `develop`; cada tarea en `feature/H2-<slug>` (`scaffold`, `messaging`, `devices`, `credentials`, `edge-sync`, `debt-check`, `door-reservations`, `edge-events`, `device-control`, `resident-views`, `docs`), cerrada con `merge --no-ff`; al terminar, `release/0.1.0`.
- Plantilla: copiar estructura, `pom.xml`, `Dockerfile`, `shared/`, `infrastructure/authorization/sfs/`, `GlobalExceptionHandler` y `ErrorResource` de `C:\Users\nanak\Dev\edifika\Edifika-Microservice-Payment`, renombrando `payment` por `access`. No copiar las credenciales de Supabase: los defaults de `DATABASE_*` quedan vacíos o en `localhost`.
- **Coordenadas Maven:** groupId `com.edifika`, artifactId `iot-access-management`, `spring.application.name=Edifika-Microservice-IoT-Access-Management`.
- **Paquetes:** raíz `com.edifika.access`; bounded context `com.edifika.access.access` (igual que `com.edifika.payment.payment`); `com.edifika.access.shared`.
- **Puerto:** `${PORT:8089}`. Las demás variables, exactamente las de los contratos §7 para Access.
- **Estilo:**
  - Aggregates extienden `AuditableAbstractAggregateRoot<T>`, con `@Getter`, sin setters, constructor `protected` vacío y constructor desde command.
  - Commands y queries son records validados en el constructor compacto, con `IllegalArgumentException` y mensajes en español.
  - Las interfaces `XxxCommandService`/`XxxQueryService` en `domain/services` usan métodos descriptivos que devuelven `Optional<T>`/`List<T>`, igual que Payment.
  - Assemblers estáticos `XxxResourceFromEntityAssembler.toResourceFromEntity(...)` y `XxxCommandFromResourceAssembler.toCommandFromResource(...)`.
  - Controllers con `@RequestMapping(value=…, produces="application/json")`, `@Tag`, `@Operation`, `@PreAuthorize`, y la identidad del llamador con `@AuthenticationPrincipal AuthenticatedUser`.
- **Errores:** `ErrorResource(int status, String error, String message, Instant timestamp)`. Mapeo:
  - 404 para `*NotFoundException`.
  - 400 para `IllegalArgumentException` y errores de JSON o de tipos.
  - 409 para `IllegalStateException`, `*ConflictException` y `DataIntegrityViolationException`.
  - 403 para `AccessDeniedException`.
  - 401 para fallos de autenticación.
  - 503 para `ExternalServiceUnavailableException`.
- **Fechas:** `Instant` en el dominio y en los resources (se serializa en ISO UTC). La zona de negocio es `ACCESS_TIMEZONE` (`America/Lima`).
- **Tablas:** `SnakeCaseWithPluralizedTablePhysicalNamingStrategy`; `ddl-auto=update`.
- **Mensajería** (las rutas son relativas a `com/edifika/access/access/`):
  - `infrastructure/messaging/rabbitmq/configuration/RabbitMqConfiguration`
  - `infrastructure/messaging/rabbitmq/RabbitIntegrationEventPublisher`
  - `infrastructure/messaging/rabbitmq/RabbitEdgeCommandPublisher`
  - `interfaces/messaging/EdgeEventConsumer`
  - `application/internal/outboundservices/messaging/{IntegrationEventPublisher, EdgeCommandPublisher}` (puertos)
  - `shared/infrastructure/messaging/IntegrationEnvelope` (record del sobre de los contratos §3.2)
- **Converter:** `JacksonJsonMessageConverter` de Spring AMQP 4 (Jackson 3, que es el que trae Boot 4). Si no existe en la versión resuelta, usar `Jackson2JsonMessageConverter` y dejarlo anotado en el README.
- **Tests:**
  - `./mvnw -B test` (Windows: `mvnw.cmd -B test`).
  - Unitarios con Mockito y sin Spring.
  - Los de integración terminan en `*IT`, usan `@SpringBootTest` + Testcontainers (`postgres:17`, `rabbitmq:4-management`) y corren con `./mvnw -B verify` (failsafe).
  - Si Docker no está disponible, los `*IT` se saltan con `@Testcontainers(disabledWithoutDocker = true)`.
- **Contract tests:** copiar `Edifika-IoT-Platform/contracts/schemas/` a `src/test/resources/contracts/` y validar con `ContractAssertions.assertMatches(String schemaPath, Object resource)` (helper de test que serializa con el `ObjectMapper` de la app).
- Sin push ni repo remoto.

## Review Focus

1. **Dos reservas que se pisan, creadas en paralelo** para la misma puerta: solo una debe quedar → `@Lock(PESSIMISTIC_WRITE)` sobre el `IotDevice` al crear, con test de concurrencia en Task 7.
2. **Residential o Payment caídos** al verificar deudas: no se suspende a nadie por error de red, y la reserva usa el último estado (503 solo si no hay ninguno) → tests en Task 6.
3. **Evento del edge duplicado o reordenado** (llega `online` después de `offline` más reciente): no debe revertir el estado → comparar `occurredAt` con `lastSeenAt` en Task 8.
4. **Gateway con la API key rotada** sigue llamando con la vieja: debe recibir 401 → test en Task 5.
5. **Credencial con UID en otro formato** (`04 a1:b2 c3`): se normaliza y choca como duplicado → test en Task 4.

---

### Task 1: Esqueleto del servicio desde la plantilla Payment

**Files:**
- Create: `pom.xml`. Se basa en el de Payment y agrega `spring-boot-starter-amqp`, `spring-boot-testcontainers` (test), `org.testcontainers:testcontainers-junit-jupiter`, `testcontainers-postgresql`, `testcontainers-rabbitmq` (test, versión del BOM de Boot), `org.wiremock:wiremock-standalone:3.13.1` (test), `com.networknt:json-schema-validator:1.5.6` (test) y `maven-failsafe-plugin`.
- Create: `mvnw`, `mvnw.cmd`, `.mvn/` (copiados de Payment), `Dockerfile` (multi-stage de Payment con `EXPOSE 8089`), `.gitignore`, `.env.example`, `README.md`.
- Create: `src/main/java/com/edifika/access/EdifikaMicroserviceIoTAccessManagementApplication.java` (`@SpringBootApplication @EnableJpaAuditing @EnableScheduling @ConfigurationPropertiesScan`).
- Create: `shared/**` (copia de Payment), `access/infrastructure/authorization/sfs/**` (copia de Payment) y `access/interfaces/rest/exceptions/GlobalExceptionHandler.java` + `resources/ErrorResource.java`.
- Create: `src/main/resources/application.properties` (claves de los contratos §7 más las de Payment; `spring.rabbitmq.*` mapeadas a `RABBITMQ_*`).
- Test: `src/test/java/com/edifika/access/support/{TestcontainersConfiguration, JwtTestTokens, ContractAssertions}.java`, `ApplicationContextIT.java`

**Interfaces:**
- Produces:
  - `JwtTestTokens.admin()`, `JwtTestTokens.resident(long userId)`: JWT firmados con el `jwt.secret` de test, con claims `user_id` y `roles`.
  - `TestcontainersConfiguration`: `@TestConfiguration` con `@ServiceConnection` para PostgreSQL y RabbitMQ.
  - `ContractAssertions.assertMatches(String schemaPath, Object resource)`.
  - `SecurityConfig`: `permitAll` para `/api/v1/edge/**`, `/v3/api-docs/**`, `/swagger-ui/**` y `/swagger-ui.html`. Todo lo demás requiere autenticación.

- [ ] **Step 1: Write the failing test**

```java
@SpringBootTest(webEnvironment = RANDOM_PORT) @Import(TestcontainersConfiguration.class)
class ApplicationContextIT {
  @Autowired TestRestTemplate http;
  @Test void protectedEndpointsRequireToken() { assertEquals(401, http.getForEntity("/api/v1/iot/devices", String.class).getStatusCode().value()); }
  @Test void swaggerIsPublic() { assertEquals(200, http.getForEntity("/v3/api-docs", String.class).getStatusCode().value()); }
}
```

- [ ] **Step 2:** Run `./mvnw -B verify -Dit.test=ApplicationContextIT` → FAIL (falta compilar o no hay endpoint).
- [ ] **Step 3:** Escribir el esqueleto. Para que `/api/v1/iot/devices` exista ya en este punto, se crea un `IotDeviceController` vacío, con un `GET` que devuelve `List.of()`, y en la Task 3 se reemplaza.
- [ ] **Step 4:** Run → PASS. Run `./mvnw -B test` → PASS.
- [ ] **Step 5:** Commit `chore: scaffold IoT Access Management from Payment template`.

### Task 2: Infraestructura de mensajería (topología, sobre, publicadores e idempotencia)

**Files:**
- Create: `shared/infrastructure/messaging/IntegrationEnvelope.java`, un record con `eventId` (String), `eventType`, `eventVersion` (int), `occurredAt` (Instant), `producer`, `buildingId` (Long), `gatewayCode`, `correlationId` y `payload` (`Map<String,Object>`). Incluye `static IntegrationEnvelope of(String eventType, Long buildingId, String gatewayCode, String correlationId, Object payload)`, que genera un UUID y usa `producer="iot-access-management"`.
- Create: `access/infrastructure/messaging/rabbitmq/configuration/RabbitMqConfiguration.java`
- Create: `access/application/internal/outboundservices/messaging/IntegrationEventPublisher.java` (`void publish(String routingKey, IntegrationEnvelope envelope)`)
- Create: `access/application/internal/outboundservices/messaging/EdgeCommandPublisher.java` (`void publish(String gatewayCode, String command, IntegrationEnvelope envelope)`, con `command` igual a `device-command` o `sync-requested`)
- Create: `access/infrastructure/messaging/rabbitmq/{RabbitIntegrationEventPublisher, RabbitEdgeCommandPublisher}.java`
- Create: `access/domain/model/entities/ProcessedEvent.java` (`@Entity`, PK `eventId` String y `processedAt` Instant) y `infrastructure/persistence/jpa/repositories/ProcessedEventRepository.java`
- Create: `access/application/internal/messaging/ProcessedEventGuard.java` (`boolean firstTime(String eventId)`, que inserta y devuelve `false` si ya existía; se usa dentro de la transacción del consumidor)
- Test: `RabbitMqConfigurationIT.java`, `ProcessedEventGuardIT.java`

**Interfaces:**
- Produces:
  - **Beans de topología:**
    - `TopicExchange` `edifika.events`, `edifika.edge.commands` y `edifika.dlx`, todos durables.
    - Cola `access.edge-events` (durable, con `x-dead-letter-exchange=edifika.dlx` y `x-dead-letter-routing-key=access.edge-events`), enlazada a `edifika.events` con las 4 routing keys de los contratos §3.1.
    - `access.edge-events.dlq`, enlazada a `edifika.dlx` con `access.edge-events`.
  - **Listener:** `SimpleRabbitListenerContainerFactory` con un retry de 3 intentos (1 s, 2 s, 4 s) y `RejectAndDontRequeueRecoverer`.
  - **Publicación:** el `RabbitTemplate` usa el converter JSON. Los mensajes llevan `messageId`, `type` y `contentType` de los contratos §3.2, y `deliveryMode` PERSISTENT.

- [ ] **Step 1: Write the failing tests**

```java
@Test void declaresQueueWithDeadLetter() { // RabbitAdmin.getQueueProperties("access.edge-events") != null and DLQ exists
}
@Test void publishedEnvelopeMatchesContract() {
  publisher.publish("access.physical-access-granted", IntegrationEnvelope.of("PhysicalAccessGranted", 12L, "edge-gateway-01", null, Map.of(...)));
  var msg = spyQueue.receive(5s);  // queue bound to edifika.events "access.#"
  ContractAssertions.assertMatches("contracts/envelope.schema.json", parse(msg));
  assertEquals("PhysicalAccessGranted", msg.getMessageProperties().getType());
}
@Test void guardReturnsFalseForSecondDelivery() { assertTrue(guard.firstTime("e1")); assertFalse(guard.firstTime("e1")); }
```

- [ ] **Step 2:** FAIL. **Step 3:** Implementar. **Step 4:** `./mvnw -B verify` → PASS.
- [ ] **Step 5:** Commit `feat(messaging): RabbitMQ topology, integration envelope publishers and idempotency guard`.

### Task 3: Gateways y dispositivos

**Files:**
- **Dominio:**
  - `domain/model/aggregates/{EdgeGateway, IotDevice}.java`
  - `domain/model/valueobjects/{DeviceCode, RgbColor, GatewayStatus, DeviceStatus, DeviceType, DeviceCapability, AccessMode}.java`
  - `domain/model/commands/{CreateGatewayCommand, RotateGatewayApiKeyCommand, CreateDeviceCommand, UpdateDeviceCommand, SetDeviceMaintenanceCommand, DecommissionDeviceCommand}.java`
  - `domain/model/queries/{GetAllGatewaysQuery, GetGatewayByIdQuery, GetDevicesQuery, GetDeviceByIdQuery}.java`
  - `domain/model/events/{DeviceRegisteredEvent, DeviceUpdatedEvent, DeviceDecommissionedEvent}.java`
  - `domain/exceptions/{GatewayNotFoundException, DeviceNotFoundException, DuplicateDeviceCodeException, DuplicateGatewayCodeException}.java`
- **Servicios:**
  - `domain/services/{GatewayCommandService, GatewayQueryService, DeviceCommandService, DeviceQueryService}.java` + implementaciones en `application/internal/{commandservices,queryservices}`.
  - `application/internal/eventhandlers/DeviceRegistryIntegrationEventHandler.java`: `@TransactionalEventListener(AFTER_COMMIT)`, que publica `iot.device-*` con el payload de los contratos §3.4.
- **Interfaz REST:**
  - `interfaces/rest/{EdgeGatewayController, IotDeviceController}.java`
  - `interfaces/rest/resources/{CreateGatewayResource, GatewayResource, GatewayCredentialsResource, CreateDeviceResource, UpdateDeviceResource, DeviceMaintenanceResource, DeviceResource}.java` + assemblers.
- Test: `EdgeGatewayTest`, `IotDeviceTest`, `DeviceCodeTest`, `RgbColorTest`, `GatewayCommandServiceImplTest`, `DeviceCommandServiceImplTest`, `IotDeviceControllerIT`

**Interfaces:**
- Produces:
  - **`EdgeGateway`:**
    - `static ApiKeyIssue issue(CreateGatewayCommand)`. `ApiKeyIssue` es un record `(EdgeGateway gateway, String plainApiKey)`. La clave es `"egk_" + 44` caracteres base64url de `SecureRandom` (32 bytes) y se guarda como SHA-256 hex.
    - `String rotateApiKey()`, `boolean apiKeyMatches(String plain)` (comparación en tiempo constante), `long bumpSyncVersion()`, `void markSynced(Instant)`.
  - **`IotDevice`:**
    - `accessMode(Instant now, boolean hasActiveReservation)` devuelve `AccessMode`; en la práctica el modo lo calcula `ReservationQueryService` (Task 7).
    - `setLedColor(RgbColor)`, `clearLedColor()`, `markOnline(Instant)`, `markOffline(Instant)`, `startMaintenance()`, `endMaintenance(Instant now, Duration heartbeatTimeout)`, `decommission()`, `updateFirmware(String)`.
    - `boolean isDoor()`, `boolean hasCapability(DeviceCapability)`.
  - Toda escritura llama a `EdgeSyncNotifier.changed(gatewayId)`. Hasta la Task 5, una implementación no-op satisface `EdgeSyncNotifier` (interfaz en `application/internal/outboundservices/edge/EdgeSyncNotifier.java`, `void changed(Long gatewayId)`).
  - Endpoints, cuerpos, respuestas y códigos: los de la tabla **Gateways y dispositivos** de los contratos §4.2.

- [ ] **Step 1: Write the failing tests** (selección; un test por regla)

```java
// IotDeviceTest
@Test void doorRequiresRfidAndLock() { assertThrows(IllegalArgumentException.class, () -> new IotDevice(cmd(DOOR, Set.of(RFID)), gw)); }
@Test void newDeviceIsProvisioned() { assertEquals(DeviceStatus.PROVISIONED, new IotDevice(validDoorCmd(), gw).getStatus()); }
// DeviceCodeTest
@Test void rejectsUppercaseAndSpaces() { assertThrows(IllegalArgumentException.class, () -> new DeviceCode("ESP32 Door")); }
// RgbColorTest
@Test void normalizesToUppercase() { assertEquals("#00FF88", new RgbColor("#00ff88").value()); }
@Test void rejectsShortHex() { assertThrows(IllegalArgumentException.class, () -> new RgbColor("#0F8")); }
// EdgeGatewayTest
@Test void apiKeyIsHashedAndRotates() { var issue = EdgeGateway.issue(cmd()); assertTrue(issue.gateway().apiKeyMatches(issue.plainApiKey()));
  var old = issue.plainApiKey(); var neu = issue.gateway().rotateApiKey(); assertFalse(issue.gateway().apiKeyMatches(old)); assertTrue(issue.gateway().apiKeyMatches(neu)); }
// IotDeviceControllerIT (Testcontainers)
@Test void adminCreatesDeviceAndResponseMatchesContract() { /* POST as admin -> 201; assertMatches("contracts/rest/access/DeviceResource.schema.json", body) */ }
@Test void duplicateDeviceCodeIs409() { }
@Test void residentCannotListDevices() { /* 403 */ }
@Test void createDevicePublishesDeviceRegistered() { /* spy queue "iot.#" receives DeviceRegistered matching payloads/DeviceRegistered.schema.json */ }
@Test void decommissionReturns204AndPublishesEvent() { }
```

- [ ] **Step 2:** FAIL. **Step 3:** Implementar. **Step 4:** `./mvnw -B verify` → PASS.
- [ ] **Step 5:** Commit `feat(devices): gateway and ESP32 device registry with API keys and registry events`.

### Task 4: Credenciales RFID

**Files:**
- Create:
  - Agregado `AccessCredential`.
  - Value objects `RfidUid`, `CredentialStatus` (`ACTIVE, SUSPENDED, REVOKED, LOST`), `SuspensionReason` (`MANUAL, DELINQUENT`) y `CredentialOrigin` (`CLOUD, EDGE`).
  - Commands `CreateCredentialCommand`, `ChangeCredentialStatusCommand` y `UpsertEdgeCredentialCommand`.
  - Queries `GetCredentialsQuery(buildingId, userId, status)` y `GetCredentialsByUserQuery(userId)`.
  - `DuplicateRfidUidException`.
  - `CredentialCommandService`, `CredentialQueryService` y sus implementaciones.
  - `AccessCredentialController`, con `POST`, `GET` y `PATCH status` en `/api/v1/access/credentials`.
  - Resources `CreateCredentialResource`, `ChangeCredentialStatusResource` y `CredentialResource`, con sus assemblers.
- Test: `RfidUidTest`, `AccessCredentialTest`, `CredentialCommandServiceImplTest`, `AccessCredentialControllerIT`

**Interfaces:**
- Produces, en `AccessCredential`:
  - `suspendForDebt()`: solo si está `ACTIVE`; queda `SUSPENDED/DELINQUENT`.
  - `clearDebtSuspension()`: solo si `suspensionReason == DELINQUENT`; vuelve a `ACTIVE`.
  - `changeStatus(CredentialStatus, Instant)`: lo usa el ADMIN y limpia `suspensionReason`.
  - `boolean isUsableAt(Instant)`.
  - `String edgeStatus()`, que traduce `LOST` a `REVOKED`.
  - `String residentRef()`, que devuelve `userId.toString()` o `edgeResidentRef`.
- Produces, en `CredentialCommandService`:
  - `Optional<AccessCredential> createCredential(CreateCredentialCommand)`, que publica en el bus interno `CredentialCreatedEvent(userId)` (en la Task 6 dispara la verificación de deuda).
  - `Optional<AccessCredential> changeStatus(ChangeCredentialStatusCommand)`.
  - `void upsertFromEdge(UpsertEdgeCredentialCommand(String uid, String residentRef, String status, Instant occurredAt, Long buildingId))`.
  - Toda escritura llama a `EdgeSyncNotifier.changedForBuilding(Long buildingId)`, un método nuevo de la interfaz.
- `RfidUid`: quita espacios, `:` y `-`, pasa a mayúsculas y valida `^[0-9A-F]{8,20}$`. `masked()` devuelve `"****" + últimos 4`.

- [ ] **Step 1: Write the failing tests**

```java
@Test void uidIsNormalized() { assertEquals("04A1B2C3", new RfidUid("04 a1:b2-c3").value()); }
@Test void uidMasked() { assertEquals("****B2C3", new RfidUid("04A1B2C3").masked()); }
@Test void debtSuspensionOnlyClearsItself() { var c = active(); c.changeStatus(SUSPENDED, now); c.clearDebtSuspension(); assertEquals(SUSPENDED, c.getStatus()); }
@Test void lostMapsToRevokedForEdge() { assertEquals("REVOKED", lost().edgeStatus()); }
@Test void upsertFromEdgeCreatesEdgeOriginCredentialWithoutUser() { /* origin EDGE, userId null, edgeResidentRef "guardia-1" */ }
@Test void upsertFromEdgeLosesAgainstNewerCloudChange() { /* updatedAt after occurredAt -> status unchanged */ }
// IT
@Test void duplicateUidInOtherFormatIs409() { /* POST "04A1B2C3" then "04 a1 b2 c3" -> 409 */ }
@Test void responseMatchesContract() { /* CredentialResource schema */ }
```

- [ ] **Step 2:** FAIL. **Step 3:** Implementar. **Step 4:** PASS.
- [ ] **Step 5:** Commit `feat(credentials): RFID credentials with debt suspension and edge upsert`.

### Task 5: Sync del edge y notificación de cambios

**Files:**
- Create: `application/internal/outboundservices/edge/EdgeSyncNotifier.java`, ahora con `changed(Long gatewayId)` y `changedForBuilding(Long buildingId)`.
- Create: `application/internal/edge/{EdgeSyncNotifierImpl, EdgeSnapshotService}.java`
- Create: `infrastructure/authorization/sfs/EdgeGatewayAuthenticationFilter.java`, que solo actúa en `/api/v1/edge/**`.
- Create: `interfaces/rest/EdgeSyncController.java` y `interfaces/rest/resources/edge/{EdgeSyncResource, EdgeCredentialItem, EdgeDeviceItem, EdgeReservationItem}.java`
- Test: `EdgeSnapshotServiceTest`, `EdgeSyncControllerIT`

**Interfaces:**
- Consumes: `EdgeGateway`, `IotDevice`, `AccessCredential` y, desde la Task 7, `DoorReservation`. Hasta entonces, `reservations` se envía vacío.
- Produces:
  - `EdgeSyncNotifierImpl.changed(gatewayId)`:
    1. Hace `bumpSyncVersion()` en la misma transacción.
    2. Después del commit (`TransactionSynchronization`) publica `SyncRequested {syncVersion}` en `<gatewayCode>.sync-requested`.
    3. `changedForBuilding` hace lo mismo para cada gateway del edificio.
  - `EdgeSnapshotService.snapshot(EdgeGateway, Long since) -> EdgeSyncResource`, con la semántica y el contenido de los contratos §2.
  - El filtro valida `X-Gateway-Id` y `Bearer`. Si son válidos, deja el `EdgeGateway` como atributo de request `edgeGateway`; si no, responde 401 o 404 con `ErrorResource`.

- [ ] **Step 1: Write the failing tests**

```java
@Test void sinceEqualToVersionReturnsEmptyIncrement() { /* {version: N, full: false, all lists empty} */ }
@Test void otherwiseReturnsFullSnapshotOfGatewayBuilding() { /* credentials of building 12 only; LOST -> REVOKED; residentId = "15" */ }
@Test void decommissionedDevicesAreExcluded() { }
@Test void syncResponseMatchesContract() { ContractAssertions.assertMatches("contracts/sync.schema.json", body); }
@Test void rotatedKeyIsRejected() { /* old key -> 401 */ }
@Test void unknownGatewayIs404() { }
@Test void syncMarksGatewayOnline() { }
@Test void deviceChangePublishesSyncRequestedAfterCommit() { /* spy on edifika.edge.commands "edge-gateway-01.#" gets SyncRequested with syncVersion+1 */ }
```

- [ ] **Step 2:** FAIL. **Step 3:** Implementar y reemplazar el no-op de la Task 3. **Step 4:** PASS.
- [ ] **Step 5:** Commit `feat(edge-sync): gateway-authenticated cache snapshot and sync-requested orders`.

### Task 6: Estado del residente y verificación de deudas (ACL hacia Residential y Payment)

**Files:**
- Create: entidad `domain/model/entities/ResidentStatus.java`, con `userId` (único), `buildingId`, `unitIds` (`@ElementCollection`), `delinquent`, `overdueDebtCount`, `checkedAt` y `lastError`.
- Create: puertos `application/internal/outboundservices/acl/{ExternalResidentDirectory, ExternalDebtService}.java`:
  - `List<ResidentUnit> residentsOfBuilding(Long buildingId)`, donde `ResidentUnit` es `record(Long userId, Long unitId, boolean active)`.
  - `List<UnitDebt> debtsOfUnit(Long unitId)`, donde `UnitDebt` es `record(Long id, LocalDate dueDate, String status)`.
- Create: `infrastructure/external/{residential/RestResidentialDirectory, payment/RestPaymentDebtService, ServiceTokenProvider, IntegrationProperties}.java`. `IntegrationProperties` es un `@ConfigurationProperties(prefix="integration")` con `residentialUrl`, `paymentUrl`, `debtCheckEnabled`, `debtCheckIntervalMinutes`, `timezone` y `timeoutSeconds` (5).
- Create: `application/internal/debts/{DebtCheckService, DebtCheckScheduler}.java`
- Create: `interfaces/rest/ResidentStatusController.java` y `resources/ResidentStatusResource.java`
- Test: `DebtCheckServiceTest`, `RestPaymentDebtServiceTest` (WireMock), `RestResidentialDirectoryTest` (WireMock), `ResidentStatusControllerIT`

**Interfaces:**
- Produces:
  - `ServiceTokenProvider.token() -> String`: JWT de los contratos §6, que se renueva 30 s antes de vencer.
  - `DebtCheckService.refreshBuilding(Long buildingId)`:
    1. Consulta a Residential.
    2. Para cada usuario con filas `active`, consulta a Payment por cada unidad y calcula si es moroso: alguna deuda `OVERDUE`, o `PENDING` con `dueDate` anterior a hoy en `timezone`.
    3. Guarda `ResidentStatus`.
    4. Aplica `suspendForDebt` o `clearDebtSuspension` a las credenciales del usuario.
    5. Si algo cambió, llama a `changedForBuilding`.
  - `DebtCheckService.refreshUser(Long userId) -> ResidentStatus`: refresca el edificio del usuario (por el `ResidentStatus` conocido o por los edificios con gateway) y devuelve su estado.
  - `DebtCheckService.isDelinquentForReservation(Long userId) -> boolean`:
    - Intenta `refreshUser`.
    - Si `ExternalServiceUnavailableException`, usa el `ResidentStatus` guardado.
    - Si no hay ninguno guardado, propaga la excepción (503).
  - Si `debtCheckEnabled=false`, todo usuario cuenta como no moroso y no se hacen llamadas.
  - Ante un error de red durante el refresco programado: se guarda `lastError` y **no** cambia `delinquent` ni las credenciales.
  - El `@Scheduled(fixedDelayString="${integration.debt-check-interval-minutes:5}", timeUnit=MINUTES)` refresca los edificios que tienen gateways.
  - Un `@EventListener` sobre `CredentialCreatedEvent` llama a `refreshUser`.

- [ ] **Step 1: Write the failing tests**

```java
@Test void overdueDebtMarksDelinquentAndSuspendsCards() { }
@Test void pendingPastDueCountsAsOverdue() { /* dueDate yesterday in America/Lima */ }
@Test void paidAllClearsDebtSuspensionOnly() { /* manual suspension stays */ }
@Test void networkErrorKeepsPreviousStateAndRecordsLastError() { }
@Test void reservationCheckFallsBackToStoredStatus() { }
@Test void reservationCheckWithoutStoredStatusPropagates503() { }
@Test void disabledCheckTreatsEveryoneAsClear() { }
// WireMock
@Test void residentialClientSendsServiceTokenAndParsesRows() { /* Authorization: Bearer <jwt with roles [ADMIN], sub iot-access-management> */ }
@Test void paymentClientMaps5xxToExternalServiceUnavailable() { }
@Test void paymentClient404MeansNoDebts() { /* unit without debts in Payment -> empty list, not an error */ }
```

- [ ] **Step 2:** FAIL. **Step 3:** Implementar. **Step 4:** PASS.
- [ ] **Step 5:** Commit `feat(debts): resident delinquency from Residential and Payment via service token`.

### Task 7: Reservas de puerta, autorizados y rol

**Files:**
- Create: agregado `DoorReservation`, que contiene la entidad hija `DoorAuthorization` (`@OneToMany(cascade=ALL, orphanRemoval=true)`).
- Create: value objects `ReservationStatus` (`SCHEDULED, ACTIVE, ENDED, CANCELLED`) y `AuthorizationStatus` (`ACTIVE, REVOKED`).
- Create: commands `CreateReservationCommand(deviceId, holderUserId, startsAt, endsAt, createdBy)`, `CancelReservationCommand(reservationId, actorUserId, actorIsAdmin)`, `AddAuthorizationCommand(reservationId, userId, actorUserId, actorIsAdmin)` y `RemoveAuthorizationCommand(...)`.
- Create: queries `GetDeviceSlotsQuery(deviceId, from, to)`, `GetReservationsByHolderQuery(userId, status)`, `GetReservationsQuery(deviceId, status, from, to)` y `GetReservationByIdQuery`.
- Create: eventos `AccessModeChangedEvent(deviceId, from, to, reservationId)` y las excepciones `ReservationConflictException` y `ReservationNotFoundException`.
- Create: `ReservationCommandService`, `ReservationQueryService` y sus implementaciones.
- Create: `application/internal/schedulers/ReservationLifecycleScheduler.java`, con `@Scheduled(fixedDelay=30_000)`.
- Create: `application/internal/eventhandlers/AccessModeIntegrationEventHandler.java`, que publica `iot.access-mode-changed`.
- Create: `interfaces/rest/{DoorReservationController, ReservationAuthorizationController}.java` y los resources `CreateReservationResource`, `DoorReservationResource`, `ReservationSlotResource`, `AddAuthorizationResource` y `AuthorizationResource`.
- Modify: `IotDeviceRepository`, para agregar `@Lock(PESSIMISTIC_WRITE) Optional<IotDevice> findWithLockById(Long id)`.
- Modify: `DeviceResourceFromEntityAssembler`, para que `accessMode` y `activeReservationId` salgan de `ReservationQueryService.activeReservation(deviceId, now)`.
- Modify: `EdgeSnapshotService`, para incluir `reservations`.
- Test: `DoorReservationTest`, `ReservationCommandServiceImplTest`, `ReservationLifecycleSchedulerTest`, `DoorReservationControllerIT`

**Interfaces:**
- Produces:
  - `ReservationQueryService.activeReservation(Long deviceId, Instant now) -> Optional<DoorReservation>`.
  - `ReservationQueryService.isAuthorized(Long deviceId, Long userId, Instant now) -> boolean`, verdadero si es el titular o un autorizado `ACTIVE`.
  - Reglas de creación (contratos §4.2):
    1. Bloquea el dispositivo.
    2. Valida que sea `DOOR` y que no esté `DECOMMISSIONED`.
    3. Valida la ventana: no en el pasado (tolerancia de 60 s) y como máximo `reservation.max-hours`.
    4. Valida que no se superponga con reservas `SCHEDULED` o `ACTIVE` (409).
    5. Llama a `DebtCheckService.isDelinquentForReservation(holder)`; si es moroso, 409 `"El residente tiene deudas vencidas"`.
    6. Guarda y llama a `changed(gatewayId)`.
  - El scheduler pasa `SCHEDULED → ACTIVE` cuando `startsAt <= now` y `ACTIVE → ENDED` cuando `endsAt <= now`. En cada transición registra `AccessModeChangedEvent` y llama a `changed(gatewayId)`; al terminar, además llama a `IotDevice.clearLedColor()`.
  - Cancelar una reserva `ACTIVE` publica `AccessModeChanged` (`RESERVED → FREE_ACCESS`) y limpia el LED.

- [ ] **Step 1: Write the failing tests**

```java
@Test void rejectsOverlap() { }
@Test void rejectsDelinquentHolderWith409Message() { /* message "El residente tiene deudas vencidas" */ }
@Test void rejectsPastStartBeyondTolerance() { }
@Test void rejectsLongerThanMaxHours() { }
@Test void holderCannotBeAddedAsGuest() { }
@Test void onlyHolderOrAdminManagesGuests() { /* other resident -> AccessDeniedException -> 403 */ }
@Test void schedulerActivatesAndEndsAndPublishesModeChanges() { }
@Test void cancellingActiveReservationClearsLed() { }
@Test void slotsHideHolderAndMarkMine() { }
// IT
@Test void concurrentOverlappingReservationsOnlyOneWins() { /* two threads POST same window -> one 201, one 409 */ }
@Test void responsesMatchContract() { /* DoorReservationResource, ReservationSlotResource, AuthorizationResource */ }
@Test void snapshotIncludesReservationWithGuests() { }
```

- [ ] **Step 2:** FAIL. **Step 3:** Implementar. **Step 4:** PASS.
- [ ] **Step 5:** Commit `feat(reservations): door reservations with guest authorizations and derived access mode`.

### Task 8: Consumidor de eventos del edge

**Files:**
- Create: `interfaces/messaging/EdgeEventConsumer.java`. Es un `@RabbitListener(queues="access.edge-events")` que recibe un `IntegrationEnvelope` y despacha según `eventType`.
- Create: el agregado `AccessAttempt` (o entidad independiente, inmutable), con `AccessReason` (enum de la nube de los contratos §3.4) y `AccessResult`.
- Create: commands `RecordAccessAttemptCommand`, `ApplyDeviceStatusCommand` y `ApplyCommandResultCommand`.
- Create: `application/internal/commandservices/EdgeEventCommandServiceImpl.java` (interfaz `domain/services/EdgeEventCommandService.java`).
- Create: `application/internal/eventhandlers/PhysicalAccessIntegrationEventHandler.java`.
- Create: `infrastructure/persistence/jpa/repositories/AccessAttemptRepository.java`.
- Test: `EdgeEventCommandServiceImplTest`, `EdgeEventConsumerIT`

**Interfaces:**
- Consumes: `ProcessedEventGuard` (Task 2), `CredentialCommandService.upsertFromEdge` (Task 4), `DeviceCommand` (Task 9, que actualiza el estado). Mientras la Task 9 no exista, `CommandResult` solo se registra en el log.
- Produces:
  - **`AccessAttempt`:** el `gatewayCode` del sobre y el `deviceId` del payload resuelven el `IotDevice`; el `credential` resuelve la credencial (`userId`). Se mapea `reason` según el diseño §6.1, y `credential_suspended` con `suspensionReason=DELINQUENT` se guarda como `DELINQUENT`. Se guarda con `sourceEventId` y luego se publica `PhysicalAccessGranted` o `PhysicalAccessDenied` (contratos §3.4).
  - **`DeviceStatus`:**
    - `online` → `markOnline`; `offline` → `markOffline`.
    - `firmware` → `updateFirmware`.
    - `maintenance_started` / `maintenance_ended` → estado `MAINTENANCE` o `ACTIVE`.
    - `mode_changed` → solo log.
    - Se ignora un evento con `occurredAt` anterior a `lastSeenAt`.
  - **`CredentialChanged`:** se traduce a `upsertFromEdge`.
  - Todo efecto ocurre dentro de `@Transactional` junto con `guard.firstTime(eventId)`. Si el evento ya se procesó, se hace ack sin efecto.
  - Un dispositivo o gateway desconocido produce un log `WARN` y ack, sin reintentos.

- [ ] **Step 1: Write the failing tests**

```java
@Test void grantedAttemptPersistsAndPublishesGranted() { }
@Test void suspendedForDebtMapsToDelinquent() { }
@Test void staleOnlineAfterNewerOfflineIsIgnored() { }
// IT (Testcontainers RabbitMQ + Postgres)
@Test void sameAccessAttemptThreeTimesIsStoredOnceAndPublishedOnce() { /* publish same eventId x3 to edifika.events edge.access-attempt; await 5 s; count==1; spy got 1 PhysicalAccess* */ }
@Test void malformedMessageGoesToDlq() { /* body "not json" -> access.edge-events.dlq has 1 */ }
@Test void publishedPhysicalAccessMatchesContract() { }
```

- [ ] **Step 2:** FAIL. **Step 3:** Implementar. **Step 4:** PASS.
- [ ] **Step 5:** Commit `feat(edge-events): idempotent consumer for access attempts, device status and edge credentials`.

### Task 9: Comandos al nodo (LED RGB)

**Files:**
- Create: la entidad `DeviceCommand` (`commandId` String único, `deviceId`, `type` `DeviceCommandType.SET_LED`, `params` como JSON en `@Column(columnDefinition="text")` convertido con `AttributeConverter`, `status` `DeviceCommandStatus` (`PENDING, OK, FAILED, EXPIRED`), `detail`, `requestedBy`, `requestedAt`, `expiresAt`, `resolvedAt`).
- Create: `SetLedColorCommand(deviceId, color, actorUserId, actorIsAdmin)`.
- Create: `DeviceControlCommandService` y su implementación.
- Create: `application/internal/schedulers/DeviceCommandExpiryScheduler.java` (cada 5 s).
- Create: `interfaces/rest/DeviceControlController.java`, con `PUT /api/v1/iot/devices/{id}/led` y `GET /api/v1/iot/device-commands/{commandId}`.
- Create: los resources `SetLedResource` y `DeviceCommandResource`.
- Modify: `EdgeEventCommandServiceImpl`, para que `CommandResult` actualice `DeviceCommand`. `OK` también hace `IotDevice.setLedColor`, y `TIMEOUT` se guarda como `FAILED` con `"timeout"`.
- Test: `DeviceControlCommandServiceImplTest`, `DeviceControlControllerIT`

**Interfaces:**
- Produces:
  - `setLedColor`:
    1. Valida la capability `RGB_LED` (400), que el dispositivo esté `ACTIVE` (409) y que la puerta esté reservada (409 `"La puerta no está reservada"`).
    2. Valida que el actor sea el titular de la reserva activa o ADMIN (403).
    3. Crea `DeviceCommand` como `PENDING` con `expiresAt = now + device-command-ttl-seconds`.
    4. Después del commit, publica `DeviceCommandRequested` en `<gatewayCode>.device-command`. El `commandId` es un UUID sin guiones (32 caracteres hexadecimales); el payload es el de los contratos §3.5.
    5. Devuelve 202.
  - El scheduler marca como `EXPIRED` los `PENDING` con `expiresAt + 5 s < now`.

- [ ] **Step 1: Write the failing tests**

```java
@Test void ledOnFreeAccessDoorIs409() { }
@Test void nonHolderResidentIs403() { }
@Test void holderGets202AndOrderIsPublished() { /* spy "edge-gateway-01.device-command" receives DeviceCommandRequested matching schema; params.color "#00FF88" */ }
@Test void commandResultOkMarksOkAndStoresColor() { }
@Test void timeoutBecomesFailedWithDetail() { }
@Test void pendingCommandExpires() { }
@Test void getCommandOnlyForRequesterOrAdmin() { }
```

- [ ] **Step 2:** FAIL. **Step 3:** Implementar. **Step 4:** PASS.
- [ ] **Step 5:** Commit `feat(device-control): RGB LED orders to the edge with result tracking and expiry`.

### Task 10: Vistas del residente y auditoría

**Files:**
- Create: `interfaces/rest/{MyAccessController, AccessAuditController}.java`
- Create: los resources `DoorSummaryResource` y `AccessAttemptResource`, con sus assemblers.
- Create: `application/internal/queryservices/DoorSummaryQueryServiceImpl.java` (interfaz `domain/services/DoorSummaryQueryService.java`, método `List<DoorSummary> doorsFor(AuthenticatedUser user, Instant now)`).
- Create: las queries `GetAccessAttemptsQuery(deviceId, userId, result, from, to, limit)` y `GetMyAttemptsQuery(userId, from, to, limit)`.
- Test: `DoorSummaryQueryServiceImplTest`, `MyAccessControllerIT`

**Interfaces:**
- Produces: los endpoints `/access/me/doors`, `/access/me/credentials`, `/access/me/attempts` y `/access/attempts`, con las reglas de `canEnter`, `canReserve`, `canChangeLed` y la visibilidad de `ledColor` de los contratos §4.1. Los edificios del residente salen de `ResidentStatus`; si no hay ninguno, se llama a `DebtCheckService.refreshUser` una vez. `limit` va acotado a 500 (admin) y a 50 por defecto.

- [ ] **Step 1: Write the failing tests**

```java
@Test void freeAccessClearResidentCanEnterAndReserve() { }
@Test void delinquentResidentCannotEnterNorReserve() { }
@Test void reservedDoorGuestCanEnterButNotChangeLed() { }
@Test void reservedDoorOtherResidentCannotEnterAndSeesNoColor() { }
@Test void holderSeesColorAndCanChangeLed() { }
@Test void myCredentialsAreMasked() { }
@Test void attemptsLimitIsCapped() { /* limit=10000 -> 500 */ }
@Test void responsesMatchContract() { }
```

- [ ] **Step 2:** FAIL. **Step 3:** Implementar. **Step 4:** PASS.
- [ ] **Step 5:** Commit `feat(me): resident door summary, my credentials and attempts, admin audit`.

### Task 11: Cierre de H2

**Files:**
- Modify: `README.md`: cómo correrlo, variables, endpoints (enlace a Swagger), topología AMQP y cómo correr los tests `*IT`.
- Modify: `Edifika-IoT-Platform/MILESTONES.md`: métricas de H2.
- Create: `src/test/java/.../performance/CreateCredentialLatencyIT.java`: 20 `POST /access/credentials` seguidos; el p95 debe ser < 300 ms.

- [ ] **Step 1:** Escribir el test de latencia. **Step 2:** `./mvnw -B verify` → todo en verde. **Step 3:** Registrar en `MILESTONES.md`:
  - Las métricas de H2: idempotencia ×3, deuda → `SUSPENDED/DELINQUENT` → `syncVersion+1`, y el p95 de la creación de credenciales.
  - Los comandos usados.
- [ ] **Step 4:** Commit `docs: README and H2 milestone metrics`.
