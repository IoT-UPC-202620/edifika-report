# Plan 5 — Integración de punta a punta (H4) Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Levantar toda la cadena (simulador → Mosquitto → Edge Gateway → RabbitMQ → Access y Telemetry ← ApiGateway) y comprobar con pytest los 7 escenarios de H4 contra los servicios reales.

**Architecture:**
- Un `docker-compose.e2e.yml` en `Edifika-IoT-Platform` extiende la infraestructura del Plan 0 y construye las imágenes desde los repos hermanos (rutas relativas).
- Residential y Payment se reemplazan por un WireMock con mappings controlables desde el test (`/__admin`).
- Los JWT de usuario se firman en el test con el mismo `JWT_SECRET`; IAM no forma parte del compose.
- El simulador del gateway actúa como el ESP32, y el test lo maneja por MQTT con paho.

**Tech Stack:** Docker Compose, pytest, requests, paho-mqtt 2.1, pika 1.3.2, PyJWT 2.9, jsonschema.

**Spec:** `docs/superpowers/specs/2026-10-23-iot-integration-design.md` §13 H4; `docs/superpowers/specs/2026-10-23-iot-contracts.md`.

**Depende de:** Planes 0, 1, 2, 3 y 4 (Task 1) terminados y en verde.

## Global Constraints

- Archivos en `C:\Users\nanak\Dev\edifika\Edifika-IoT-Platform` (`docker-compose.e2e.yml`, `e2e/`, `integration-tests/`). Gitflow según el roadmap: `feature/H4-e2e-compose`, `feature/H4-e2e-fixtures` y `feature/H4-scenarios`, desde `develop`. La plataforma se publica como `release/0.2.0` al cerrar H4.
- **Contextos de build:**
  - `../Edifika-Microservice-IoT-Access-Management`, `../Edifika-Microservice-IoT-Telemetry` y `../Edifika-ApiGateway`.
  - El gateway, desde `C:\Users\nanak\Dev\edge-gateway` (variable `EDGE_GATEWAY_DIR`, por defecto `../../edge-gateway`).
- `JWT_SECRET` común: `e2e-secret-key-must-be-at-least-32-characters-long`.
- Datos semilla del test:
  - Edificio `12`, gateway `edge-gateway-01`, puerta `esp32-door-01`.
  - Residentes `15` (titular, al día), `16` (invitado, al día), `17` (al día, no invitado) y `18` (moroso).
  - Unidades `40`, `41`, `42` y `43`.
  - Tarjetas `04A1B2C3` (15), `04A1B2C4` (16), `04A1B2C5` (17) y `04A1B2C6` (18).
- Todo a través del ApiGateway (`http://localhost:8080/api/v1`), salvo la verificación directa de colas.
- Sin push.

## Review Focus

1. **Arranque desordenado** (el gateway arranca antes que Access): el sync falla y se reintenta sin caerse → el compose no exige ese orden; `wait_until` en `conftest` espera `cache.version != null` en `/api/v1/status` del gateway.
2. **Reloj del contenedor del gateway frente al del test**: las reservas se crean relativas a `now` del servidor (`GET /actuator/health` no da la hora). Se usan ventanas ≥ 70 s y tolerancias de ± 2 s.
3. **Re-ejecución del suite sin `down -v`**: los datos previos no rompen los tests → cada corrida usa un `gatewayCode` y `deviceCode` con sufijo aleatorio, o el fixture de sesión hace `down -v` al empezar.
4. **WireMock sin stub para una unidad**: Access recibe 404 de Payment. Debe tratarse como "sin deudas", no como error de red → stub por defecto `[]` para `/api/v1/payments/debts/unit/*`.
5. **Escenario offline**: detener RabbitMQ y Access no debe impedir que el gateway cambie de rol ni que la puerta funcione → escenario 6.

---

### Task 1: Compose de punta a punta

**Files:**
- Create: `docker-compose.e2e.yml`. Incluye `docker-compose.yml` vía `include:` y agrega:
  - `wiremock` (`wiremock/wiremock:3.13.1`, puerto 8099, mappings en `e2e/wiremock/mappings`).
  - `access` (build, puerto 8089; `DATABASE_URL=jdbc:postgresql://postgres:5432/access_db`, `RABBITMQ_HOST=rabbitmq`, `RESIDENTIAL_SERVICE_URL=http://wiremock:8080`, `PAYMENT_SERVICE_URL=http://wiremock:8080`, `DEBT_CHECK_INTERVAL_MINUTES=1`, `JWT_SECRET`).
  - `telemetry` (build, puerto 8090, `telemetry_db`).
  - `api-gateway` (build, 8080; `ACCESS_SERVICE_URL=http://access:8089`, `TELEMETRY_SERVICE_URL=http://telemetry:8090`).
  - `edge-gateway` (build desde `EDGE_GATEWAY_DIR`; `EDGE_MQTT_HOST=mosquitto`, `EDGE_AMQP_URL=amqp://edifika:edifika-dev@rabbitmq:5672/`, `EDGE_SYNC_BASE_URL=http://access:8089`, `EDGE_SYNC_API_KEY=${E2E_GATEWAY_API_KEY}`, `EDGE_SYNC_INTERVAL_S=5`, `EDGE_OUTBOX_INTERVAL_S=1`).
  - `sim-door` (misma imagen del gateway; `python -m simulator run --device esp32-door-01`).
- Create: `e2e/wiremock/mappings/{residents-building-12.json, debts-default.json}`. Residentes 15–18 activos en las unidades 40–43, y deudas `[]` por defecto.
- Create: `e2e/README.md`

- [ ] **Step 1:** Escribir el compose.
- [ ] **Step 2:** Verificar.
  Run: `docker compose -f docker-compose.e2e.yml build` y `docker compose -f docker-compose.e2e.yml up -d --wait --wait-timeout 300 rabbitmq mosquitto postgres wiremock access telemetry api-gateway`
  Expected: todo `healthy`. Access y Telemetry exponen un healthcheck con `curl -fs http://localhost:<port>/v3/api-docs`.
- [ ] **Step 3:** Commit `chore(e2e): end-to-end compose with services, gateway, simulator and WireMock stubs`.

### Task 2: Fixtures del suite

**Files:**
- Create: `integration-tests/conftest.py`, `integration-tests/support/{api.py, mqtt_node.py, amqp_spy.py, tokens.py, wiremock.py}`, `integration-tests/requirements.txt`

**Interfaces:**
- Produces:
  - `tokens.user(user_id: int, admin=False) -> str`: JWT HS256 con claims `sub`, `user_id` y `roles`.
  - `api.Client(base_url, token)`, con `.get/.post/.put/.patch/.delete(path, json=None) -> requests.Response`.
  - `mqtt_node.Node(device_code)`:
    - `.tap(uid) -> dict`: publica `access` y devuelve el `access_result` recibido en ≤ 2 s.
    - `.wait_command(type_, timeout) -> dict`.
    - `.ack(command_id, status="OK")`.
    - `.publish_reading(sensor, value, unit)`.
    - Reemplaza al `sim-door`, que se detiene en este suite para que el test controle los acks.
  - `amqp_spy.Spy(routing_key)` con `.get(timeout) -> dict`: cola exclusiva enlazada a `edifika.events`.
  - `wiremock.set_debts(unit_id, debts: list)` y `wiremock.reset()`.
  - Fixture de sesión `world`:
    1. `down -v` y `up --wait`.
    2. Crea el gateway por REST, toma la `apiKey`, la exporta y levanta `edge-gateway` con ella.
    3. Crea la puerta y las 4 tarjetas.
    4. Espera el primer sync (`GET http://localhost:8000/api/v1/status` → `cache.version` no nulo).
    5. Arranca un `Node` y publica un heartbeat para que la puerta quede `ACTIVE`.

- [ ] **Step 1:** Escribir los fixtures, con un test humo `test_world_is_ready` (la puerta está `ACTIVE` en `GET /iot/devices/{id}`).
- [ ] **Step 2:** `py -3 -m venv .venv-e2e; .venv-e2e/Scripts/pip install -r integration-tests/requirements.txt; .venv-e2e/Scripts/python -m pytest integration-tests -q -k world` → PASS.
- [ ] **Step 3:** Commit `test(e2e): fixtures for API, MQTT node, AMQP spy, tokens and WireMock`.

### Task 3: Los 7 escenarios de H4

**Files:**
- Create: `integration-tests/test_h4_scenarios.py`

- [ ] **Step 1: Write the tests**

```python
def test_1_free_access_resident_up_to_date_enters(world):
    r = world.node.tap("04A1B2C5"); assert r["params"]["result"] == "GRANTED"
    assert world.spy("access.physical-access-granted").get(10)["payload"]["userId"] == 17

def test_2_delinquent_is_denied_and_cannot_reserve(world):
    world.wiremock.set_debts(43, [{"id": 1, "unitId": 43, "description": "Mantenimiento", "amount": 100, "currency": "PEN", "dueDate": "2026-09-01", "status": "OVERDUE"}])
    world.admin.post(f"/access/residents/18/debt-check"); world.wait_sync()
    r = world.node.tap("04A1B2C6"); assert (r["params"]["result"], r["params"]["reason"]) == ("DENIED", "credential_suspended")
    assert world.spy("access.physical-access-denied").get(10)["payload"]["reason"] == "DELINQUENT"
    resp = world.as_user(18).post(f"/iot/devices/{world.door_id}/reservations", json=window(start_in=90, minutes=5))
    assert resp.status_code == 409 and resp.json()["message"] == "El residente tiene deudas vencidas"

def test_3_reservation_switches_node_to_reserved(world):
    resv = world.as_user(15).post(f"/iot/devices/{world.door_id}/reservations", json=window(start_in=70, minutes=3)).json()
    world.as_user(15).post(f"/access/reservations/{resv['id']}/authorizations", json={"userId": 16})
    cmd = world.node.wait_command("mode", timeout=80); assert cmd["params"]["mode"] == "RESERVED"
    world.reservation = resv

def test_4_during_reservation_only_holder_and_guest_enter(world):
    assert world.node.tap("04A1B2C3")["params"]["result"] == "GRANTED"   # holder 15
    assert world.node.tap("04A1B2C4")["params"]["result"] == "GRANTED"   # guest 16
    r = world.node.tap("04A1B2C5"); assert (r["params"]["result"], r["params"]["reason"]) == ("DENIED", "not_authorized")

def test_5_led_by_holder_reaches_node_and_others_are_rejected(world):
    t0 = time.monotonic()
    cmd = world.as_user(15).put(f"/iot/devices/{world.door_id}/led", json={"color": "#00ff88"}).json()
    node_cmd = world.node.wait_command("rgb", timeout=3); world.node.ack(node_cmd["commandId"])
    assert node_cmd["params"] == {"color": "#00FF88"} and node_cmd["commandId"] == cmd["commandId"]
    wait_until(lambda: world.as_user(15).get(f"/iot/device-commands/{cmd['commandId']}").json()["status"] == "OK", 3)
    assert time.monotonic() - t0 < 3
    assert world.as_user(17).put(f"/iot/devices/{world.door_id}/led", json={"color": "#FF0000"}).status_code == 403

def test_6_reservation_ends_offline_and_door_returns_to_free_access(world):
    world.compose("stop", "rabbitmq", "access")
    cmd = world.node.wait_command("mode", timeout=seconds_until(world.reservation["endsAt"]) + 2)
    assert cmd["params"] == {"mode": "FREE_ACCESS"}
    assert world.node.tap("04A1B2C5")["params"]["result"] == "GRANTED"
    world.compose("start", "rabbitmq", "access")
    assert world.as_user(15).put(f"/iot/devices/{world.door_id}/led", json={"color": "#FF0000"}).status_code == 409

def test_7_telemetry_every_10s_visible(world):
    world.node.publish_reading("temperature", 24.5, "°C"); world.node.publish_reading("humidity", 61.0, "%")
    wait_until(lambda: {l["magnitude"] for l in world.admin.get("/telemetry/devices/esp32-door-01/latest").json()["latest"]} == {"TEMPERATURE", "HUMIDITY"}, 15)
```

Los escenarios comparten estado y se ejecutan en orden, con nombres numerados y `-p no:randomly`.

- [ ] **Step 2:** Run `.venv-e2e/Scripts/python -m pytest integration-tests -q` con el compose arriba → los 7 escenarios PASS.
- [ ] **Step 3:** Registrar H4 en `MILESTONES.md`: comando, duración y resultado por escenario.
- [ ] **Step 4:** Commit `test(e2e): H4 scenarios for door roles, reservations, LED, offline and telemetry`.
