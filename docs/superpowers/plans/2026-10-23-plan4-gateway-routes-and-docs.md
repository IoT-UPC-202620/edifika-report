# Plan 4 — Rutas en ApiGateway, aviso de firmware obsoleto y colección Postman (H5) Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Exponer los servicios IoT detrás del ApiGateway solo con configuración, marcar como obsoleto el sketch de firmware del informe (el firmware de referencia es el repo `esp32`, Plan 6) y entregar una colección Postman con la API completa para la futura app móvil.

**Architecture:** Tres entregables independientes:
- Rutas nuevas en `Edifika-ApiGateway`, en sus dos lugares de definición.
- Una nota de obsolescencia en `edifika-report/wokwi/README.md`.
- Una colección Postman v2.1 en `Edifika-IoT-Platform/postman/` que usa variables de entorno y el login de IAM.

**Tech Stack:** Spring Cloud Gateway (proyecto existente, Boot 3.2.6, Java 17), Markdown, Postman Collection v2.1, Newman (solo para validar el JSON de la colección).

**Spec:** `docs/superpowers/specs/2026-10-23-iot-contracts.md` §1 (firmware), §4–§7; `docs/superpowers/specs/2026-10-23-iot-integration-design.md` §10 (rutas) y §13 H5.

## Global Constraints

- ApiGateway: repo `C:\Users\nanak\Dev\edifika\Edifika-ApiGateway`, **solo configuración** (properties y `RoutesConfig`). Sin otros cambios de lógica. Sin push. Este repo no usa gitflow: se crea `develop` desde `main` y se trabaja en `feature/H5-iot-routes`, cerrada con `merge --no-ff` a `develop`. Sin release.
- `edifika-report`: los commits van en la rama actual `feature/migrar-a-modest-iot`.
- Postman: en `Edifika-IoT-Platform`, rama `feature/H5-postman-collection`, desde `develop`.
- Rutas:
  - `/api/v1/iot/**`, `/api/v1/access/**` y `/api/v1/edge/**` → `${ACCESS_SERVICE_URL:http://localhost:8089}`.
  - `/api/v1/telemetry/**` → `${TELEMETRY_SERVICE_URL:http://localhost:8090}`.
  - Ids de ruta: `iot-access-iot`, `iot-access-access`, `iot-access-edge` e `iot-telemetry`. Índices de properties `routes[12]` a `routes[15]`. Todas con `StripPrefix=0`.
- **No** se modifica `C:\Users\nanak\Dev\edifika-report\wokwi\firmware\**` ni `wokwi/diagram.json`. Solo cambia `wokwi/README.md` (nota de obsolescencia).
- La colección Postman no lleva secretos; usa las variables `{{baseUrl}}` (`http://localhost:8080/api/v1`), `{{adminEmail}}`, `{{adminPassword}}`, `{{residentEmail}}`, `{{residentPassword}}`, `{{token}}`, `{{deviceId}}`, `{{reservationId}}` y `{{commandId}}`.

## Review Focus

1. **Ruta `/api/v1/iot/**` que tapa una existente**: verificar que ningún prefijo actual empiece con `/api/v1/iot`, `/access`, `/edge` o `/telemetry` → test en Task 1.
2. **Llamada CORS preflight** desde la app hacia las rutas IoT: el `CorsConfig` global del gateway ya cubre `/**` → test `OPTIONS` en Task 1.
3. **Colección ejecutada sin login previo**: cada carpeta debe obtener el token en un pre-request → Task 3.
4. **Edge sync desde Postman sin `apiKey`** (no se creó el gateway en la misma corrida): el request debe fallar con 401 y un mensaje claro, no con un 500 → test de estado esperado en Task 3.
5. **Alguien sigue usando el sketch viejo de `wokwi`**: la nota debe estar al inicio del README, con el enlace al repo nuevo → Task 2.

---

### Task 1: Rutas IoT en ApiGateway

**Files:**
- Modify: `src/main/resources/application.properties`: se agregan `services.access.url` y `services.telemetry.url`, y `spring.cloud.gateway.routes[12..15]` con el formato de `routes[11]`.
- Modify: `src/main/java/com/edifika/apigateway/infrastructure/config/RoutesConfig.java`: dos `@Value` y cuatro `.route(...)` con el estilo de los existentes.
- Create: `src/test/java/com/edifika/apigateway/IotRoutesTest.java`

- [ ] **Step 0:** `git checkout -b develop main && git checkout -b feature/H5-iot-routes`.
- [ ] **Step 1: Write the failing test**

```java
@SpringBootTest(webEnvironment = RANDOM_PORT, properties = {
  "services.access.url=http://localhost:${wiremock.server.port}", "services.telemetry.url=http://localhost:${wiremock.server.port}",
  "ACCESS_SERVICE_URL=http://localhost:${wiremock.server.port}", "TELEMETRY_SERVICE_URL=http://localhost:${wiremock.server.port}" })
@AutoConfigureWireMock(port = 0)   // or a WireMockServer field if spring-cloud-contract is not on the classpath
class IotRoutesTest {
  @Autowired WebTestClient http;
  @ParameterizedTest @ValueSource(strings = {"/api/v1/iot/devices", "/api/v1/access/me/doors", "/api/v1/edge/sync", "/api/v1/telemetry/devices"})
  void forwardsIotPrefixes(String path) { stubFor(get(urlPathEqualTo(path)).willReturn(ok("[]")));
    http.get().uri(path).exchange().expectStatus().isOk(); verify(getRequestedFor(urlPathEqualTo(path))); }
  @Test void preflightIsAllowed() { http.options().uri("/api/v1/iot/devices").header("Origin", "http://localhost:4200")
    .header("Access-Control-Request-Method", "PUT").exchange().expectHeader().exists("Access-Control-Allow-Origin"); }
  @Test void existingRoutesDoNotOverlap() { /* RouteLocator routes: no existing path predicate starts with the 4 new prefixes */ }
}
```

Para el test se agrega la dependencia `org.wiremock:wiremock-standalone:3.13.1` con scope test. Es el único cambio al `pom.xml`, y es solo de test.

- [ ] **Step 2:** `./mvnw -B test -Dtest=IotRoutesTest` → FAIL.
- [ ] **Step 3:** Agregar las rutas.
- [ ] **Step 4:** `./mvnw -B test` → PASS (incluidos los tests existentes).
- [ ] **Step 5:** Commit `feat(routes): route IoT Access Management and IoT Telemetry through the gateway`.

### Task 2: Marcar como obsoleto el firmware del informe

El firmware de referencia ahora es el repo `esp32`. El Plan 6 lo integra y documenta su comportamiento en su propio README. En el informe solo se deja una nota para que nadie use el sketch viejo.

**Files:**
- Modify: `C:\Users\nanak\Dev\edifika-report\wokwi\README.md`: se agrega al inicio una nota "Obsoleto" que apunta a `IoT-UPC-202620/esp32` (`EdifikaNode` sobre ModestIoT, `esp32-acc-01`) y a `docs/superpowers/plans/2026-10-24-plan6-esp32-firmware.md`. El resto del archivo no cambia.

- [ ] **Step 1:** Agregar la nota.
- [ ] **Step 2:** Run `git status --short wokwi` → solo `M wokwi/README.md`.
- [ ] **Step 3:** Commit en `edifika-report`, rama `feature/migrar-a-modest-iot`: `docs(wokwi): mark the test sketch as superseded by the esp32 firmware repo (H5)`.

### Task 3: Colección Postman de la API para la app móvil

**Files:**
- Create: `Edifika-IoT-Platform/postman/Edifika-IoT.postman_collection.json` y `postman/Edifika-IoT.local.postman_environment.json`
- Create: `Edifika-IoT-Platform/postman/README.md`
- Create: `Edifika-IoT-Platform/tests/test_postman_collection.py`

**Interfaces:**
- Consumes: los contratos §4, §5 y §6 (sign-in de IAM).
- Produces: carpetas `00 Auth` (sign-in admin y sign-in residente, con un test que guarda `token`/`residentToken`), `01 Gateways`, `02 Devices`, `03 Credentials`, `04 Reservations & Guests`, `05 LED`, `06 Me (residente)`, `07 Audit & Debts`, `08 Telemetry` y `09 Edge sync` (cabeceras `X-Gateway-Id` y la `apiKey` guardada al crear el gateway).
  - Un request por endpoint de los contratos §4.2 y §5, con el cuerpo de ejemplo tomado de los contratos.
  - Un test `pm.response.to.have.status(<código esperado>)` por request.

- [ ] **Step 1: Write the failing test**

```python
import json, pathlib, re
COL = pathlib.Path(__file__).resolve().parents[1] / "postman/Edifika-IoT.postman_collection.json"
CONTRACT_ENDPOINTS = {  # method + path template from contracts §4.2 and §5 (with {id} placeholders normalized to :id)
  ("POST","/iot/gateways"), ("GET","/iot/gateways"), ("GET","/iot/gateways/:id"), ("POST","/iot/gateways/:id/api-key"),
  ("POST","/iot/devices"), ("GET","/iot/devices"), ("GET","/iot/devices/:id"), ("PATCH","/iot/devices/:id"),
  ("PUT","/iot/devices/:id/maintenance"), ("DELETE","/iot/devices/:id"), ("GET","/iot/devices/:id/reservations"),
  ("POST","/iot/devices/:id/reservations"), ("GET","/access/me/reservations"), ("GET","/access/reservations"),
  ("GET","/access/reservations/:id"), ("DELETE","/access/reservations/:id"), ("POST","/access/reservations/:id/authorizations"),
  ("GET","/access/reservations/:id/authorizations"), ("DELETE","/access/reservations/:id/authorizations/:id"),
  ("PUT","/iot/devices/:id/led"), ("GET","/iot/device-commands/:id"), ("POST","/access/credentials"), ("GET","/access/credentials"),
  ("PATCH","/access/credentials/:id/status"), ("GET","/access/me/credentials"), ("GET","/access/attempts"), ("GET","/access/me/attempts"),
  ("GET","/access/me/doors"), ("GET","/access/residents/:id/status"), ("POST","/access/residents/:id/debt-check"),
  ("GET","/telemetry/devices"), ("GET","/telemetry/devices/:id/latest"), ("GET","/telemetry/readings"), ("GET","/telemetry/alerts"),
  ("GET","/edge/sync"), ("POST","/authentication/sign-in") }

def requests(items):
    for it in items:
        yield from requests(it["item"]) if "item" in it else [it["request"]]

def normalize(raw):  # "{{baseUrl}}/iot/devices/{{deviceId}}?x=1" -> "/iot/devices/:id"
    path = raw.split("{{baseUrl}}", 1)[1].split("?")[0]
    return re.sub(r"\{\{[^}]+\}\}", ":id", path)

def test_collection_covers_every_contract_endpoint():
    col = json.loads(COL.read_text(encoding="utf-8"))
    found = {(r["method"], normalize(r["url"]["raw"] if isinstance(r["url"], dict) else r["url"])) for r in requests(col["item"])}
    assert CONTRACT_ENDPOINTS <= found

def test_no_secrets_in_collection():
    text = COL.read_text(encoding="utf-8")
    assert "eyJ" not in text and "egk_" not in text
```

- [ ] **Step 2:** `.venv/Scripts/python -m pytest -q tests/test_postman_collection.py` → FAIL.
- [ ] **Step 3:** Escribir la colección y el environment.
- [ ] **Step 4:** Run → PASS. Validar el formato con `npx --yes newman@6 run postman/Edifika-IoT.postman_collection.json --folder "00 Auth" -e postman/Edifika-IoT.local.postman_environment.json --bail`. Sin servicios arriba se espera un error de conexión, no un error de parseo.
- [ ] **Step 5:** Commit `docs(postman): full IoT API collection for the mobile app`.
