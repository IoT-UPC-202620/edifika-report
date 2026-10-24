# Plan 1 — Edge Gateway: RabbitMQ, roles de puerta y órdenes de la nube (H1) Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Que el Edge Gateway publique sus eventos en RabbitMQ con confirmaciones, reciba órdenes de la nube por su propia cola, sincronice nodos y reservas desde IoT Access Management y decida el acceso según el rol de la puerta, también sin internet.

**Architecture:** Se reemplaza el envío HTTPS por un publicador AMQP (pika, publisher confirms) detrás de la misma interfaz duck-typed que ya usa `OutboxForwarder` (`post_events`). El sync sigue siendo un pull HTTP, ahora con una API key. Un consumidor AMQP corre en su propio hilo y aplica las órdenes. El rol de la puerta se calcula en el edge a partir de las ventanas de reserva que llegan en el sync.

**Tech Stack:** Python 3.12, Flask 3.1, Peewee 4.5 (+ `playhouse.migrate`), paho-mqtt 2.1, pika 1.3.2, marshmallow 4, pytest.

**Spec:** `docs/superpowers/specs/2026-10-23-iot-contracts.md` §1, §2, §3 (fuente de verdad); `docs/superpowers/specs/2026-10-23-iot-integration-design.md` §8, §13 H1.

## Global Constraints

- Repo: `C:\Users\nanak\Dev\edge-gateway`. Gitflow según el roadmap: cada tarea en `feature/H1-<slug>` desde `develop`, cerrada con `merge --no-ff` a `develop`; al terminar, `release/0.2.0` con `chore(release): prepare 0.2.0`. **Sin push.**
- Tests: `.venv/Scripts/python -m pytest -q`. Los 188 tests existentes deben seguir en verde y la suite unitaria tarda < 30 s. Las pruebas que necesitan broker real llevan `@pytest.mark.integration` y quedan excluidas por defecto.
- Contrato MQTT en `v = 1`, prefijo `edifika/v1`. El gateway acepta los dos dialectos del envelope de los contratos §1: `v` como `1` o `"1"`, y `ts` como epoch, ISO-8601 `Z` o `null`. El nodo de referencia es el firmware de `C:\Users\nanak\Dev\edifika\esp32` (`esp32-acc-01`). Un firmware de v0.1.0 debe seguir funcionando sin cambios.
- Sobre AMQP, routing keys, colas y payloads: exactamente los de los contratos §3. `producer = "edge-gateway"`, `buildingId = null`. `correlationId = commandId` en `CommandResult` y `null` en el resto.
- `eventType` = `kind` en PascalCase. La routing key es `edge.` + `kind` con `_` reemplazado por `-`.
- Variables: las de los contratos §7 para el Edge Gateway. `EDGE_CLOUD_BASE_URL` y `EDGE_CLOUD_TOKEN` son alias deprecados de `EDGE_SYNC_BASE_URL` y `EDGE_SYNC_API_KEY`.
- Rol: `RESERVED` si existe una `DoorReservation` del dispositivo con `starts_at <= ahora < ends_at`; si no, `FREE_ACCESS`. Motivo nuevo `not_authorized`, mensaje OLED `"Not authorized"`.
- Capabilities locales en minúsculas: `rfid, lock, buzzer, oled, rgb_led, rtc, temperature, humidity, ultrasonic`. El sync las recibe en mayúsculas y las normaliza.
- El intérprete del sistema es `py -3`; dentro del repo se usa siempre `.venv/Scripts/python`.

## Review Focus

1. **Base SQLite de v0.1.0** con columnas faltantes: el gateway arranca y conserva los datos → test de migración en Task 4.
2. **RabbitMQ sin colas enlazadas** (los servicios aún no existen): el evento no se pierde → `mandatory=True` y `UnroutableError` tratado como reintento, en Task 2.
3. **Orden duplicada** (redelivery con el mismo `commandId`): llega una sola vez al nodo → test en Task 6.
4. **La reserva termina sin internet**: la puerta vuelve a `FREE_ACCESS` y el nodo recibe `mode` a tiempo → test en Task 5.
5. **`rgb` a una puerta en `FREE_ACCESS`, a un dispositivo desconocido o vencida**: no llega al nodo y vuelve `CommandResult` `FAILED` o `EXPIRED` con `detail` → tests en Task 6.
6. **Nodo real recién encendido, sin NTP** (`ts: null`): sus mensajes se aceptan con la hora del gateway y no disparan `time_sync` en bucle → test en Task 7A.

---

### Task 1: Configuración, TLS MQTT y broker independiente

**Files:**
- Modify: `edge_gateway/config.py`, `edge_gateway/mqtt/bridge.py`, `docker-compose.yml`, `.env.example`, `requirements.txt` (`pika==1.3.2`)
- Modify: todos los usos de `cloud_base_url` y `cloud_token` (`gateway.py`, `services/cloud.py`, `tests/*`)
- Test: `tests/test_config.py` (nuevo), `tests/test_mqtt_contract.py`

**Interfaces:**
- Produces:
  - Campos de `Config`: `mqtt_tls: bool = False`, `mqtt_ca_file: str = ""`, `mqtt_client_id: str = ""`, `amqp_url: str = ""`, `amqp_events_exchange: str = "edifika.events"`, `amqp_commands_exchange: str = "edifika.edge.commands"`, `amqp_prefetch: int = 10`, `sync_base_url: str = ""`, `sync_api_key: str = ""`.
  - Se eliminan `cloud_base_url` y `cloud_token`.

- [ ] **Step 0:** `git checkout develop && git checkout -b feature/H1-configurable-endpoints`; `.venv/Scripts/pip install pika==1.3.2`. Las tareas siguientes usan, en orden: `feature/H1-amqp-publisher`, `feature/H1-event-sink-wiring`, `feature/H1-cloud-devices-reservations`, `feature/H1-door-roles`, `feature/H1-cloud-orders`, `feature/H1-temperature-device-status`, `feature/H1-esp32-firmware-dialect`, `feature/H1-door-simulator`, `feature/H1-rabbitmq-integration-tests` y `feature/H1-docs`.
- [ ] **Step 1: Write the failing tests**

```python
from edge_gateway.config import Config
BASE = {"EDGE_SERVICE_TOKEN": "t"}

def test_amqp_and_sync_settings_come_from_env():
    c = Config.from_env({**BASE, "EDGE_AMQP_URL": "amqps://u:p@h:5671/v", "EDGE_SYNC_BASE_URL": "http://access:8089",
                         "EDGE_SYNC_API_KEY": "k", "EDGE_MQTT_TLS": "true"})
    assert (c.amqp_url, c.sync_base_url, c.sync_api_key, c.mqtt_tls) == ("amqps://u:p@h:5671/v", "http://access:8089", "k", True)
    assert (c.amqp_events_exchange, c.amqp_commands_exchange) == ("edifika.events", "edifika.edge.commands")

def test_legacy_cloud_variables_map_to_sync(caplog):
    c = Config.from_env({**BASE, "EDGE_CLOUD_BASE_URL": "http://old", "EDGE_CLOUD_TOKEN": "tok"})
    assert (c.sync_base_url, c.sync_api_key) == ("http://old", "tok") and "deprecated" in caplog.text

def test_new_sync_variables_win_over_legacy():
    assert Config.from_env({**BASE, "EDGE_CLOUD_BASE_URL": "http://old", "EDGE_SYNC_BASE_URL": "http://new"}).sync_base_url == "http://new"
```

En `tests/test_mqtt_contract.py`, `StubClient` agrega `tls_set(**kw)` (guarda `kw` en `self.tls_calls`) y `tls_insecure_set`, y se suman estos tests:

```python
def test_bridge_enables_tls_with_ca_file(config):
    stub = StubClient(); MqttBridge(replace(config, mqtt_enabled=True, mqtt_tls=True, mqtt_ca_file="ca.pem"), router(), client_factory=lambda: stub)
    assert stub.tls_calls == [{"ca_certs": "ca.pem"}]

def test_bridge_uses_system_cas_without_ca_file(config):
    stub = StubClient(); MqttBridge(replace(config, mqtt_enabled=True, mqtt_tls=True), router(), client_factory=lambda: stub)
    assert stub.tls_calls == [{"ca_certs": None}]
```

- [ ] **Step 2:** Run `.venv/Scripts/python -m pytest -q tests/test_config.py tests/test_mqtt_contract.py` → FAIL.
- [ ] **Step 3:** Implementar.
  - `from_env` aplica los alias antes del bucle y solo si la variable nueva no está presente, con `logger.warning("EDGE_CLOUD_* is deprecated; use EDGE_SYNC_*")`.
  - El bridge usa `client_id = config.mqtt_client_id or config.gateway_id` y llama a `tls_set(ca_certs=config.mqtt_ca_file or None)` si `mqtt_tls`.
- [ ] **Step 4:** Suite completa → PASS.
- [ ] **Step 5:** compose.
  - `mosquitto` lleva `profiles: ["broker"]` y `edge-gateway` ya no tiene `depends_on: mosquitto`.
  - `rabbitmq:4-management` va con `profiles: ["cloud-local"]`.
  - `EDGE_MQTT_HOST: ${MQTT_HOST:-mosquitto}`, `EDGE_AMQP_URL: ${AMQP_URL:-amqp://guest:guest@rabbitmq:5672/}`, `EDGE_SYNC_BASE_URL: ${SYNC_BASE_URL:-http://mock-cloud:9000}`, `EDGE_SYNC_API_KEY: ${SYNC_API_KEY:-dev-cloud-token}`.
  - Verificar con `docker compose --profile broker --profile cloud-local config -q` (exit 0).
- [ ] **Step 6:** Commit `feat(config): configurable MQTT TLS, AMQP and sync endpoints with legacy aliases`.

### Task 2: Publicador AMQP de eventos con confirmaciones

**Files:**
- Create: `edge_gateway/services/transport.py` (`CloudUnavailable`, `CloudRejected`; `services/cloud.py` los reexporta)
- Create: `edge_gateway/services/amqp.py`
- Modify: `edge_gateway/services/outbox.py`, `edge_gateway/services/sync.py`, `tests/helpers.py` (importar desde `transport`)
- Test: `tests/test_amqp_publisher.py`

**Interfaces:**
- Produces:
  - `to_envelope(event: dict, gateway_code: str) -> tuple[str, bytes, dict]` devuelve routing key, cuerpo UTF-8 y propiedades. Las propiedades son `{"message_id", "type", "content_type": "application/json", "content_encoding": "utf-8", "delivery_mode": 2, "headers": {"x-producer": "edge-gateway"}}`, más `correlation_id` cuando `kind == "command_result"`.
  - `class AmqpEventPublisher(config, connection_factory=None)` con:
    - `post_events(events: list[dict]) -> list[str]`, donde `events` tiene la forma de `Outbox.to_wire`: `{eventId, kind, occurredAt, payload}`.
    - `close() -> None`.

Regla de errores:
- Si el **primer** evento falla con `UnroutableError`, `NackError` o un error de conexión de pika, lanza `CloudUnavailable`.
- Si falla un evento posterior, devuelve los `eventId` confirmados hasta ese punto.
- Un error de serialización lanza `CloudRejected`.
- En cualquier excepción de pika se cierra la conexión, y la siguiente llamada reconecta.

- [ ] **Step 1: Write the failing tests** (`FakeConnection`/`FakeChannel` que registran `basic_publish(exchange, routing_key, body, properties, mandatory)`, con `fail_on: dict[eventId, Exception]`; `FlakyFactory(fail_times, conn)`)

```python
def test_envelope_follows_contract():
    rk, body, props = to_envelope({"eventId": "a"*32, "kind": "command_result", "occurredAt": "2026-10-23T15:00:00Z",
                                   "payload": {"deviceId": "esp32-acc-01", "commandId": "c1", "type": "rgb", "status": "OK", "detail": None}}, "edge-gateway-01")
    assert rk == "edge.command-result"
    assert json.loads(body) == {"eventId": "a"*32, "eventType": "CommandResult", "eventVersion": 1, "occurredAt": "2026-10-23T15:00:00Z",
        "producer": "edge-gateway", "buildingId": None, "gatewayCode": "edge-gateway-01", "correlationId": "c1",
        "payload": {"deviceId": "esp32-acc-01", "commandId": "c1", "type": "rgb", "status": "OK", "detail": None}}
    assert props["message_id"] == "a"*32 and props["type"] == "CommandResult" and props["delivery_mode"] == 2 and props["correlation_id"] == "c1"

@pytest.mark.skipif(not PLATFORM_CONTRACTS.exists(), reason="Edifika-IoT-Platform contracts not present")
@pytest.mark.parametrize("kind", ["access_attempt", "reading", "alert", "device_status", "command_result", "credential_changed"])
def test_envelope_validates_against_platform_schema(kind): ...  # PLATFORM_CONTRACTS = ../edifika/Edifika-IoT-Platform/contracts/schemas

def test_publishes_with_confirms_and_mandatory(fake_conn):
    assert AmqpEventPublisher(cfg(), connection_factory=lambda: fake_conn).post_events([ev("1"), ev("2")]) == ["1", "2"]
    ch = fake_conn.channel_obj
    assert ch.confirm_enabled and all(p["mandatory"] and p["exchange"] == "edifika.events" for p in ch.published)

def test_first_event_unroutable_is_retryable(fake_conn):
    fake_conn.channel_obj.fail_on = {"1": UnroutableError([])}
    with pytest.raises(CloudUnavailable):
        AmqpEventPublisher(cfg(), connection_factory=lambda: fake_conn).post_events([ev("1"), ev("2")])

def test_later_failure_returns_confirmed_prefix(fake_conn):
    fake_conn.channel_obj.fail_on = {"2": NackError([])}
    assert AmqpEventPublisher(cfg(), connection_factory=lambda: fake_conn).post_events([ev("1"), ev("2"), ev("3")]) == ["1"]

def test_connection_error_is_unavailable_then_reconnects(fake_conn):
    factory = FlakyFactory(fail_times=1, conn=fake_conn); pub = AmqpEventPublisher(cfg(), connection_factory=factory)
    with pytest.raises(CloudUnavailable): pub.post_events([ev("1")])
    assert pub.post_events([ev("1")]) == ["1"] and factory.calls == 2

def test_forwarder_marks_only_confirmed_prefix_as_sent(app_with_events_fake):
    # 3 outbox rows; fake fails on the 2nd -> after forwarder.flush(): 1 row with sent_at, 2 pending
    ...
```

- [ ] **Step 2:** Run → FAIL. **Step 3:** Implementar; la conexión y el canal se crean al primer uso, con `confirm_delivery()`. **Step 4:** Suite completa → PASS.
- [ ] **Step 5:** Commit `feat(amqp): publish outbox events to RabbitMQ with publisher confirms`.

### Task 3: Cableado: eventos por AMQP, sync por HTTP con API key

**Files:**
- Modify: `edge_gateway/gateway.py`, `edge_gateway/__init__.py`
- Modify: `edge_gateway/services/cloud.py`: la clase pasa a llamarse `SyncClient`; se elimina `post_events`.
- Test: `tests/test_gateway_wiring.py` (nuevo); `tests/test_cloud_integration.py` sigue igual con `cloud=FakeCloud()`

**Interfaces:**
- Consumes: `AmqpEventPublisher` (Task 2).
- Produces:
  - `Gateway(config, clock=None, publisher=None, cloud=None, events=None, sync_client=None)`.
    - `cloud` es un atajo que asigna `events` y `sync_client` a la vez.
    - Por defecto, `events = AmqpEventPublisher(config)` si hay `amqp_url`, y `sync_client = SyncClient(config)` si hay `sync_base_url`.
  - `create_app(config=None, *, clock=None, cloud=None, events=None, sync_client=None)`.
  - `SyncClient(config, session=None).fetch_sync(since: int | None) -> dict` hace `GET {sync_base_url}/api/v1/edge/sync`, con `params={"since": since}` solo si no es `None`, y cabeceras `X-Gateway-Id` y `Authorization: Bearer <sync_api_key>`. Los códigos HTTP se manejan igual que antes.

- [ ] **Step 1: Write the failing tests**

```python
def test_amqp_url_builds_amqp_event_sink(config):
    assert isinstance(Gateway(replace(config, amqp_url="amqp://x"), clock=FakeClock()).forwarder.cloud, AmqpEventPublisher)
def test_sync_base_url_builds_sync_client(config):
    assert isinstance(Gateway(replace(config, sync_base_url="http://a", sync_api_key="k"), clock=FakeClock()).sync.cloud, SyncClient)
def test_sync_client_sends_gateway_headers():
    s = FakeSession(FakeResponse(200, {"version": 1}))
    SyncClient(Config(service_token="t", gateway_id="gw-1", sync_base_url="http://a", sync_api_key="k"), s).fetch_sync(3)
    assert s.last == ("GET", "http://a/api/v1/edge/sync", {"X-Gateway-Id": "gw-1", "Authorization": "Bearer k"}, {"since": 3})
def test_without_amqp_url_events_stay_queued(config):
    assert Gateway(config, clock=FakeClock()).forwarder.cloud is None
```

- [ ] **Step 2:** Run → FAIL. **Step 3:** Implementar. **Step 4:** Suite completa → PASS.
- [ ] **Step 5:** Commit `refactor(gateway): split event sink (AMQP) from cache sync client (HTTP)`.

### Task 4: Nodos y reservas desde la nube, con migración de la base

**Files:**
- Modify: `edge_gateway/models.py`:
  - `Device`: se agregan `name` (CharField, default `""`), `led_color` (CharField, null), `managed` (CharField, default `"local"`) y `current_mode` (CharField, default `"FREE_ACCESS"`).
  - `AccessPermission`: se agrega `device_id` (CharField, null, index).
  - Modelo nuevo `DoorReservation(source_id=CharField(unique), device_id=CharField(index), holder_resident_id=CharField(), starts_at=DateTimeField(), ends_at=DateTimeField())`, incluido en `ALL_MODELS`.
- Modify: `edge_gateway/db.py`: `migrate_schema()` agrega las columnas faltantes con `SqliteMigrator`, comparando `database.get_columns(table)` con los campos del modelo. `init_database` lo llama después de `create_tables`.
- Modify: `edge_gateway/services/devices.py`: el conjunto de capabilities válidas incluye `rgb_led` y `temperature`.
- Modify: `edge_gateway/services/sync.py`: nuevos `DeviceItem` y `ReservationItem`; `SyncSchema` agrega `devices`, `removedDeviceCodes`, `reservations` y `removedReservationIds`.
- Test: `tests/test_sync_devices.py` (nuevo), `tests/test_persistence.py`

**Interfaces:**
- Produces, en `apply()` y dentro de la misma transacción:
  - **Dispositivos:** upsert de `Device` con `managed="cloud"`, `name`, `location`, `capabilities` (en minúsculas) y `led_color`. No pisa `status`, `last_seen` ni el mantenimiento.
  - **Reservas:** cada una reemplaza su `DoorReservation(source_id=id)` y sus permisos (`AccessPermission` con `source_id=f"res:{id}:{residentId}"`, `device_id`, `resident_id`, `starts_at`, `ends_at`), uno para el titular y uno por cada autorizado. Si el dispositivo es desconocido, se omite con `logger.warning`.
  - **Removidos:** `removedDeviceCodes` borra solo los `Device` con `managed="cloud"`. `removedReservationIds` borra la reserva y sus permisos `res:{id}:*`.
  - **Snapshot completo:** `full=true` borra además los dispositivos `cloud` ausentes y las reservas ausentes, con sus permisos.

- [ ] **Step 1: Write the failing tests**

```python
def test_sync_registers_cloud_devices(gw):
    gw.sync.apply(load(snapshot(devices=[door()])))
    d = Device.get_by_id("esp32-acc-01")
    assert (d.managed, d.name, d.capability_list[:3]) == ("cloud", "Puerta piscina", ["rfid", "lock", "buzzer"])
def test_full_snapshot_keeps_local_devices(gw):
    gw.devices.register("esp32-local"); gw.sync.apply(load(snapshot(version=2, devices=[door()])))
    assert Device.get_or_none(Device.device_id == "esp32-local")
def test_reservation_permissions_for_holder_and_guests(gw):
    gw.sync.apply(load(snapshot(devices=[door()], reservations=[resv("7", holder="15", guests=["16", "21"])])))
    assert {p.resident_id for p in AccessPermission.select().where(AccessPermission.device_id == "esp32-acc-01")} == {"15", "16", "21"}
def test_removed_reservation_drops_its_permissions(gw): ...
def test_reservation_for_unknown_device_is_skipped(gw, caplog): ...
def test_v010_database_is_migrated_in_place(tmp_path):
    # create the v0.1.0 tables with raw SQL (Device without name/led_color/managed/current_mode), insert esp32-old,
    # then init_database(path): row survives and Device.get_by_id("esp32-old").current_mode == "FREE_ACCESS"
    ...
```

- [ ] **Step 2:** Run → FAIL. **Step 3:** Implementar. **Step 4:** Suite completa → PASS.
- [ ] **Step 5:** Commit `feat(sync): cloud-managed devices and door reservations with schema migration`.

### Task 5: Decisión por rol y cambio de rol en el nodo

**Files:**
- Modify: `edge_gateway/services/access.py`, `edge_gateway/gateway.py` (`housekeeping` llama a `self.access.check_mode_changes()`)
- Test: `tests/test_access_modes.py`

**Interfaces:**
- Consumes: `DoorReservation`, `AccessPermission.device_id`, `Device.current_mode/led_color/managed` (Task 4).
- Produces:
  - `AccessService.current_mode(device, now) -> str`.
  - `AccessService.check_mode_changes(now=None) -> list[str]`. Para cada `Device` con `lock` cuyo modo calculado sea distinto de `current_mode`:
    1. Guarda el modo nuevo.
    2. Al pasar a `FREE_ACCESS`, pone `led_color = None`.
    3. Envía `mode`: `{"mode": "RESERVED", "color": led_color}` (sin `color` si es `None`) o `{"mode": "FREE_ACCESS"}`.
    4. Encola `DEVICE_STATUS {deviceId, event: "mode_changed", from, to}`.
  - El payload de `ACCESS_ATTEMPT` agrega `"accessMode"`.
  - Regla de `decide`:
    - Las verificaciones de credencial existentes no cambian.
    - Si `device.managed == "cloud"` y el modo es `RESERVED`, exige un `AccessPermission` con ese `device_id` y `resident_id`, y `starts_at <= now <= ends_at`; si no existe, devuelve `(DENIED, "not_authorized", credential)`.
    - La lógica por `area_id` solo se aplica a los dispositivos con `managed == "local"`.

- [ ] **Step 1: Write the failing tests**

```python
def test_free_access_grants_active_card(gw, publisher): ...         # GRANTED; outbox payload accessMode == "FREE_ACCESS"
def test_free_access_denies_suspended_card(gw, publisher): ...      # reason credential_suspended
def test_reserved_denies_resident_outside_reservation(gw, publisher):
    ...  # reason "not_authorized"; access_result params message == "Not authorized"
def test_reserved_grants_holder_and_guest(gw, publisher): ...
def test_mode_switches_at_start_and_end_without_sync(gw, publisher, clock):
    seed(reservation starts=now+1min, ends=now+2min)
    assert gw.access.check_mode_changes() == []
    clock.advance(minutes=1); assert gw.access.check_mode_changes() == ["esp32-acc-01"]
    assert publisher.commands("esp32-acc-01", "mode")[-1]["params"] == {"mode": "RESERVED"}
    Device.update(led_color="#FF00AA").execute()
    clock.advance(minutes=1); gw.access.check_mode_changes()
    assert publisher.commands("esp32-acc-01", "mode")[-1]["params"] == {"mode": "FREE_ACCESS"}
    assert Device.get_by_id("esp32-acc-01").led_color is None
    assert [e["event"] for e in outbox_payloads("device_status")][-2:] == ["mode_changed", "mode_changed"]
```

Los tests existentes de `tests/test_access.py` se mantienen sin modificar.

- [ ] **Step 2:** Run → FAIL. **Step 3:** Implementar. **Step 4:** Suite completa → PASS.
- [ ] **Step 5:** Commit `feat(access): door role from reservations with offline mode switching`.

### Task 6: Órdenes de la nube (`sync-requested`, `rgb`)

**Files:**
- Create: `edge_gateway/services/cloud_commands.py`
- Modify: `edge_gateway/services/amqp.py`: agrega `AmqpCommandConsumer`.
- Modify: `edge_gateway/services/commands.py`:
  - `send(device_id, type_, params=None, *, waiting=False, command_id=None, report=False)`; se agrega `Pending.report`.
  - En `handle_ack`, si `report` y el estado es `OK`, encola `COMMAND_RESULT {deviceId, commandId, type, status: "OK", detail: None}`.
- Modify: `edge_gateway/mqtt/contract.py`: el docstring documenta `rgb` y `mode`.
- Modify: `edge_gateway/gateway.py`: arranca y detiene el consumidor si hay `amqp_url`.
- Test: `tests/test_cloud_commands.py`

**Interfaces:**
- Consumes: `AccessService.current_mode` (Task 5), `SyncService.pull`, `CommandService.send`.
- Produces:
  - `CloudCommandHandler(config, clock, devices, access, commands, sync, outbox)` con `handle(envelope: dict) -> None`.
    - `SyncRequested`: llama a `sync.pull()`.
    - `DeviceCommandRequested`: se evalúa en este orden y cada fallo se reporta como `CommandResult`:
      1. `commandId` ya procesado (LRU de 1000): se ignora.
      2. `expiresAt <= now`: `EXPIRED`.
      3. Dispositivo desconocido: `FAILED "unknown device"`.
      4. `type != "rgb"`: `FAILED "unsupported command"`.
      5. Color inválido: `FAILED "invalid color"`.
      6. Modo distinto de `RESERVED`: `FAILED "door is not reserved"`.
      7. `status in (OFFLINE, MAINTENANCE, INACTIVE)`: `FAILED "device unavailable"`.
      8. Si pasa todo: guarda `led_color` (color en mayúsculas) y llama a `commands.send(code, "rgb", {"color": color}, command_id=commandId, report=True)`.
  - `AmqpCommandConsumer(config, handler, connection_factory=None)` con `start()` y `stop()`:
    - Hilo daemon.
    - Declara la cola durable `edge.<gateway_id>.commands`, con `x-dead-letter-exchange: edifika.dlx` y `x-dead-letter-routing-key` igual al nombre de la cola, enlazada a `amqp_commands_exchange` con `<gateway_id>.#`.
    - `basic_qos(prefetch_count=amqp_prefetch)`.
    - Llama a `handle` dentro de `database.connection_context()`; si termina bien, `basic_ack`; si hay excepción, `basic_nack(requeue=False)`.
    - Reconecta con backoff de 1 a 30 s.

- [ ] **Step 1: Write the failing tests**

```python
def test_rgb_on_reserved_door_uses_cloud_command_id(gw, publisher, reserved_door, handler):
    handler.handle(order("cmd-1", color="#00ff88"))
    c = publisher.commands("esp32-acc-01", "rgb")[-1]
    assert (c["commandId"], c["params"]) == ("cmd-1", {"color": "#00FF88"})
def test_ack_ok_reports_result_ok(gw, publisher, reserved_door, handler): ...     # COMMAND_RESULT status OK, commandId cmd-1
def test_duplicate_order_is_sent_once(gw, publisher, reserved_door, handler): ...
def test_rgb_on_free_access_door_fails(gw, publisher, handler): ...               # no rgb sent; FAILED "door is not reserved"
def test_expired_order_reports_expired(gw, publisher, clock, reserved_door, handler): ...
def test_unknown_device_fails(gw, handler): ...
def test_invalid_color_fails(gw, reserved_door, handler): ...
def test_offline_device_fails(gw, reserved_door, handler): ...
def test_sync_requested_triggers_pull(cgw, handler): ...                          # FakeCloud.sync_requests grows by 1
def test_consumer_declares_queue_binding_and_dlx(fake_conn): ...
def test_consumer_nacks_without_requeue_on_error(fake_conn): ...
```

- [ ] **Step 2:** Run → FAIL. **Step 3:** Implementar. **Step 4:** Suite completa → PASS.
- [ ] **Step 5:** Commit `feat(amqp): consume cloud orders (sync-requested, rgb) from the gateway queue`.

### Task 7: Temperatura y eventos de estado del nodo

**Files:**
- Modify: `edge_gateway/mqtt/contract.py`: `ReadingSchema.sensor` acepta `temperature`.
- Modify: `edge_gateway/services/telemetry.py`: `VALID_RANGES["temperature"] = (-40.0, 85.0)`. La lógica de nivel de agua se aplica solo a `ultrasonic` y la de humedad baja solo a `humidity`; cualquier otro sensor válido se guarda y se encola.
- Modify: `edge_gateway/services/devices.py`:
  - `touch`: al pasar de `OFFLINE` o `INACTIVE` a `ACTIVE`, encola `DEVICE_STATUS {deviceId, event: "online"}`.
  - `check_offline`: encola `{deviceId, event: "offline", lastSeen}`.
  - `on_heartbeat`: cuando cambia `fw`, encola `{deviceId, event: "firmware", firmware}`.
- Test: `tests/test_telemetry.py`, `tests/test_devices.py`

- [ ] **Step 1: Write the failing tests**

```python
def test_temperature_reading_is_forwarded(gw):
    gw.router.handle(*msg(P, "esp32-acc-01", "readings", sensor="temperature", value=24.5, unit="°C"))
    p = last_payload("reading"); assert (p["sensor"], p["value"], p["unit"]) == ("temperature", 24.5, "°C")
def test_temperature_out_of_range_is_invalid_and_three_raise_fault(gw): ...   # 120 °C x3 -> alert sensor_fault_temperature raised
def test_device_back_online_emits_online(gw, clock): ...
def test_silent_device_emits_offline(gw, clock): ...
def test_firmware_change_emits_once(gw): ...
```

- [ ] **Step 2:** Run → FAIL. **Step 3:** Implementar. **Step 4:** Suite completa → PASS.
- [ ] **Step 5:** Commit `feat(telemetry): temperature readings and online/offline/firmware status events`.

### Task 7A: Dialecto del firmware de referencia (`esp32`) y recuperación del rol

**Rama:** `feature/H1-esp32-firmware-dialect`

**Files:**
- Modify: `edge_gateway/mqtt/contract.py`:
  - `v` acepta `1` o `"1"`.
  - `ts` acepta número, string ISO-8601 con `Z` o `null`; `parse_message` lo convierte a epoch float o `None`.
  - `deviceId` pasa a ser opcional en `access`, `readings` y `ack`; si falta, se completa con el del tópico; si viene, debe coincidir.
  - `AckSchema.status` acepta `OK`, `FAILED` y `ERROR`, y normaliza `ERROR` a `FAILED`. Un `detail` vacío (`""`) se convierte en `None`.
  - `ReadingSchema.unit`: `"C"` se normaliza a `"°C"`.
- Modify: `edge_gateway/services/telemetry.py`, `services/devices.py` y `services/commands.py`. Cuando `ts` es `None`:
  - Se usa la hora del gateway con `timeSuspect=True` en las lecturas.
  - **No** se manda `time_sync` (el nodo sincroniza por NTP), así se evita un bucle.
- Modify: `edge_gateway/services/devices.py`: al pasar a `ACTIVE`, si el dispositivo tiene `lock`, llama a `access.resend_mode(device)`, que envía el `mode` actual (y `color` si corresponde). Así un nodo reiniciado recupera su rol (contratos §1.3).
- Test: `tests/test_firmware_dialect.py`

**Interfaces:**
- Produces:
  - `contract.parse_ts(value) -> float | None`.
  - `AccessService.resend_mode(device) -> None`.
  - Helper de tests `firmware_msg(prefix, device_id, channel, **fields) -> tuple[str, str]`, en `tests/helpers.py`. Genera el payload tal como lo arma `NodeMessages.cpp`: `"v":"1"`, `ts` ISO y sin `deviceId` en `access`, `readings` y `ack`.

- [ ] **Step 1: Write the failing tests**

```python
def test_firmware_heartbeat_with_string_version_and_iso_ts_is_accepted(gw):
    gw.router.handle(*firmware_msg(P, "esp32-acc-01", "heartbeat", deviceId="esp32-acc-01", fw="v0.3.0"))
    assert Device.get_by_id("esp32-acc-01").firmware == "v0.3.0" and not gw.router.rejected
def test_access_without_device_id_uses_topic(gw, publisher):
    gw.router.handle(*firmware_msg(P, "esp32-acc-01", "access", credentialType="RFID", credential="04A1B2C3"))
    assert publisher.commands("esp32-acc-01", "access_result")
def test_null_ts_reading_is_kept_as_time_suspect_and_no_time_sync(gw, publisher):
    gw.router.handle(*firmware_msg(P, "esp32-acc-01", "readings", ts=None, sensor="temperature", value=24.0, unit="C"))
    p = last_payload("reading"); assert (p["unit"], p["timeSuspect"]) == ("°C", True)
    assert not publisher.commands("esp32-acc-01", "time_sync")
def test_ack_error_is_failed_and_empty_detail_is_none(gw, publisher): ...
def test_mismatched_device_id_is_still_rejected(gw): ...
def test_node_back_online_receives_current_mode(gw, publisher, clock):  # reserved door goes OFFLINE then heartbeat
    ...; assert publisher.commands("esp32-acc-01", "mode")[-1]["params"]["mode"] == "RESERVED"
def test_v010_integer_envelope_still_accepted(gw): ...
```

- [ ] **Step 2:** FAIL. **Step 3:** Implementar. **Step 4:** Suite completa → PASS.
- [ ] **Step 5:** Commit `feat(mqtt): accept the esp32 firmware envelope and resend the door mode on reconnect (H1)`.

### Task 8: Simulador del nodo de puerta

**Files:**
- Create: `simulator/node_state.py` (`NodeState`, con `mode="FREE_ACCESS"` y `led="status"`; `apply(command: dict) -> str` devuelve la línea de log)
- Modify: `simulator/__main__.py`:
  - El dispositivo por defecto es `esp32-acc-01`, y publica **con el mismo dialecto que el firmware de referencia** (usar `firmware_msg` o su equivalente): `"v":"1"`, `ts` ISO y sin `deviceId` en `access`, `readings` y `ack`.
  - Variables `SIM_MQTT_USERNAME`, `SIM_MQTT_PASSWORD` y `SIM_MQTT_TLS`.
  - `run` publica heartbeat cada 10 s y `temperature` (22–27 °C) y `humidity` (50–70 %) cada 10 s.
  - Responde `ack OK` a todo comando, salvo `rgb` en `FREE_ACCESS`, que responde `FAILED "not reserved"`.
  - Imprime `[esp32-acc-01] mode=RESERVED`, `[esp32-acc-01] led=#00FF88`.
- Test: `tests/test_simulator_state.py`

- [ ] **Step 1:** Escribir los tests de `NodeState`:
  - `mode RESERVED` + `rgb #00FF88` → `(state.mode, state.led) == ("RESERVED", "#00FF88")`.
  - `mode FREE_ACCESS` → `led == "status"`.
  - `rgb` en `FREE_ACCESS` → `apply` devuelve un ack `FAILED`.
- [ ] **Step 2:** FAIL. **Step 3:** Implementar. **Step 4:** PASS.
- [ ] **Step 5:** Commit `feat(simulator): door node with role, RGB LED and temperature/humidity`.

### Task 9: Integración real con RabbitMQ y Mosquitto (métricas H1)

**Files:**
- Create: `tests/integration/conftest.py`, `tests/integration/test_rabbitmq_roundtrip.py`
- Modify: `pytest.ini`: `markers = integration` y `addopts = -m "not integration"`.

Requiere la plataforma del Plan 0 levantada. Variables: `EDGE_IT_AMQP_URL=amqp://edifika:edifika-dev@localhost:5672/`, `EDGE_IT_MQTT_HOST=localhost`. Sin esas variables, las pruebas se saltan.

- [ ] **Step 1: Write the tests**

```python
def test_tap_reaches_rabbitmq_within_6_seconds(it_gateway, spy):        # spy bound to "edge.access-attempt"
    t0 = time.monotonic(); it_gateway.tap("esp32-acc-01", "04A1B2C3")
    env = spy.get(timeout=6); assert env["eventType"] == "AccessAttempt" and time.monotonic() - t0 <= 6
def test_twenty_taps_during_outage_arrive_once(it_gateway_unreachable_then_real, spy):
    ...  # 20 taps with AMQP URL on port 1 -> outbox pending 20; switch events sink to real URL; flush -> 20 distinct eventIds
def test_cloud_order_reaches_node_and_result_returns(it_gateway, mqtt_spy, spy_results):
    ...  # publish DeviceCommandRequested to "<gw>.device-command" with the door reserved; mqtt_spy sees rgb in < 3 s;
         # publish ack OK as the node; spy_results receives CommandResult status OK with correlationId == commandId
def test_local_decision_under_500ms(it_gateway, mqtt_spy):
    ...  # publish access over MQTT; access_result on commands topic in < 0.5 s
```

- [ ] **Step 2:** Con la plataforma arriba: `.venv/Scripts/python -m pytest -m integration -q` → PASS. Después, `.venv/Scripts/python -m pytest -q` → PASS en < 30 s, con las de integración deseleccionadas.
- [ ] **Step 3:** Commit `test(integration): RabbitMQ round trip, outage recovery and local latency (H1)`.

### Task 10: Documentación y cierre de H1

**Files:**
- Modify: `README.md`: diagrama, variables, perfiles de compose, contrato MQTT con `temperature`/`rgb`/`mode`, referencia a `Edifika-IoT-Platform/contracts` y cómo correr las pruebas de integración.
- Modify: `CHANGELOG.md`: `## [0.2.0] - unreleased`.
- Modify: `Edifika-IoT-Platform/MILESTONES.md`: H1 con cada métrica (comando y resultado).

- [ ] **Step 1:** Actualizar los documentos.
- [ ] **Step 2:** Run `.venv/Scripts/python -m pytest -q --durations=5` y `.venv/Scripts/python -m pytest -m integration -q` → todo en verde; anotar el tiempo de la suite.
- [ ] **Step 3:** Commit `docs: AMQP integration, broker profiles and door roles (0.2.0)`. En la plataforma, si ese carril ya terminó: `docs(milestones): close H1`.
