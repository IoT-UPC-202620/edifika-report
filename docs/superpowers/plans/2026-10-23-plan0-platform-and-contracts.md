# Plan 0 — Plataforma IoT y contratos versionados (H0) Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Infraestructura local reproducible (RabbitMQ, Mosquitto, TimescaleDB) y el contrato v1 materializado como JSON Schema con tests, para que los demás carriles validen contra él.

**Architecture:** Repo nuevo `Edifika-IoT-Platform` con `docker-compose.yml`, `infra/`, `contracts/` (Markdown + JSON Schema + ejemplos) y `tests/` en pytest. No contiene código de servicios.

**Tech Stack:** Docker Compose, RabbitMQ 4 (management), Eclipse Mosquitto 2, TimescaleDB (PostgreSQL 17), Python 3.12, pytest, jsonschema ≥ 4.23.

**Spec:** `docs/superpowers/specs/2026-10-23-iot-contracts.md` (fuente de verdad), `docs/superpowers/specs/2026-10-23-iot-integration-design.md` §13 H0.

## Global Constraints

- Repo: `C:\Users\nanak\Dev\edifika\Edifika-IoT-Platform`, **solo local**. Gitflow y commits según la sección "Gitflow y commits" del roadmap. Cada tarea va en su `feature/H0-<slug>` y se mergea con `--no-ff` a `develop`; al cerrar, `release/0.1.0`.
- Exchanges: `edifika.events`, `edifika.edge.commands`, `edifika.dlx`, todos topic y durable. Las colas **no** se declaran aquí; las declara cada consumidor (contratos §3.1).
- Usuario RabbitMQ `${RABBITMQ_USER:-edifika}` / `${RABBITMQ_PASSWORD:-edifika-dev}`, vhost `/`. Bases `access_db` y `telemetry_db` (con `CREATE EXTENSION IF NOT EXISTS timescaledb`), usuario `${POSTGRES_USER:-edifika}` / `${POSTGRES_PASSWORD:-edifika-dev}`.
- Puertos del host: RabbitMQ 5672 y 15672, Mosquitto 1883, PostgreSQL 5432.
- Los esquemas reproducen **exactamente** los campos y enums de los contratos §1–§5; JSON Schema draft 2020-12.
- Python del sistema: usar `py -3` (en esta máquina no existen `python` ni `python3`); el venv se crea con `py -3 -m venv .venv`.

## Review Focus

1. **Arranque en frío sin volúmenes**: las definiciones de RabbitMQ y el init SQL deben aplicarse en el primer `up` → Task 1, Step 3 corre `docker compose down -v` antes.
2. **Ejemplo que no cumple su esquema por un enum mal escrito** (p. ej. `FREE_ACESS`): el test debe fallar → test de enum negativo en Task 2.
3. **Payload con campo extra** (evolución): debe aceptarse → test en Task 2.
4. **`occurredAt` sin zona** (`2026-10-23T15:04:05`): debe rechazarse → test en Task 2, con `format_checker`.
5. **Esquema de sync con `reservations[].authorizedResidentIds` ausente**: debe rechazarse → test en Task 2.

---

### Task 1: Infraestructura local

**Files:**
- Create: `docker-compose.yml`, `infra/rabbitmq/definitions.json`, `infra/rabbitmq/rabbitmq.conf`, `infra/mosquitto/mosquitto.conf`, `infra/mosquitto/acl.example`, `infra/postgres/init/01-databases.sql`, `.env.example`, `.gitignore`, `README.md`, `MILESTONES.md`

**Interfaces:**
- Produces: servicios `rabbitmq`, `mosquitto`, `postgres` en la red `edifika-iot`; healthchecks `rabbitmq-diagnostics -q ping`, `mosquitto_sub -t '$$SYS/broker/uptime' -C 1 -W 3`, `pg_isready -U edifika`.

- [ ] **Step 1:** `git init -b main`; commit `chore: initial commit` (`.gitignore`, `README.md`); `git checkout -b develop`; `git checkout -b feature/H0-local-infrastructure`.
- [ ] **Step 2:** Escribir los archivos.
  - `rabbitmq.conf`: `management.load_definitions = /etc/rabbitmq/definitions.json`.
  - `definitions.json`: los 3 exchanges, el usuario `edifika` con tag `administrator`, y permisos `.*` en `/`. Tiene la contraseña de desarrollo `edifika-dev` en texto plano, porque así lo admite RabbitMQ con `password` en lugar de `password_hash`. Se documenta como **solo dev**.
  - `mosquitto.conf`: `listener 1883`, `allow_anonymous true`, persistencia en `/mosquitto/data/` y log a stdout.
  - `acl.example`: comentado, con un ejemplo por dispositivo (`user esp32-acc-01` / `topic readwrite edifika/v1/nodes/esp32-acc-01/#`).
- [ ] **Step 3:** Verificar.
  Run: `docker compose down -v; docker compose up -d --wait --wait-timeout 120; docker compose ps --format "{{.Service}} {{.Health}}"`
  Expected: exit 0; `rabbitmq healthy`, `mosquitto healthy`, `postgres healthy`.
- [ ] **Step 4:** Verificar.
  Run: `docker compose exec rabbitmq rabbitmqctl list_exchanges name type durable | grep edifika` y `docker compose exec postgres psql -U edifika -d telemetry_db -tc "select extname from pg_extension where extname='timescaledb'"`
  Expected: los 3 exchanges topic y durables; `timescaledb`.
- [ ] **Step 5:** `MILESTONES.md`, tabla `Hito | Fecha | Métrica | Comando | Resultado | Pendientes`. Registrar el tiempo de `up --wait`.
- [ ] **Step 6:** Commit `chore(infra): local RabbitMQ, Mosquitto and TimescaleDB stack (H0)`.

### Task 2: Contratos como JSON Schema

**Files:**
- Create: `contracts/README.md`, una copia de `docs/superpowers/specs/2026-10-23-iot-contracts.md` con encabezado "copia versionada; editar aquí y en el spec".
- Create: `contracts/schemas/envelope.schema.json`
- Create: `contracts/schemas/payloads/{AccessAttempt,Reading,Alert,DeviceStatus,CommandResult,CredentialChanged,PhysicalAccessGranted,PhysicalAccessDenied,DeviceRegistered,DeviceUpdated,DeviceDecommissioned,AccessModeChanged,DeviceWentOffline,SensorFaulty,DeviceCommandRequested,SyncRequested}.schema.json`
- Create: `contracts/schemas/sync.schema.json`, `contracts/schemas/mqtt/{heartbeat,access,readings,ack,command}.schema.json`. Los esquemas MQTT del nodo aceptan los dos dialectos de los contratos §1: `v` como `1` o `"1"`, y `ts` como número, string `date-time` o `null`. Los ejemplos en `examples/mqtt/` usan la forma del firmware de referencia (`esp32-acc-01`).
- Create: `contracts/schemas/rest/access/*.schema.json`, uno por resource de los contratos §4.1 y por cuerpo de request de §4.2.
- Create: `contracts/schemas/rest/telemetry/*.schema.json`, uno por resource de §5.
- Create: `contracts/schemas/rest/error.schema.json`
- Create: `contracts/examples/**`, con la misma estructura que `schemas/`: un ejemplo válido por esquema, tomado literalmente de los contratos.
- Create: `tests/test_contracts.py`, `requirements-dev.txt` (`pytest`, `jsonschema[format]>=4.23`)

**Interfaces:**
- Produces: `contracts/schemas/**`. Los carriles Java los copian a `src/test/resources/contracts/` y los validan con `com.networknt:json-schema-validator`; el carril Python los referencia por ruta relativa.

- [ ] **Step 1: Write the failing test**

```python
import json, pathlib, pytest
from jsonschema import Draft202012Validator, FormatChecker
ROOT = pathlib.Path(__file__).resolve().parents[1] / "contracts"
SCHEMAS, EXAMPLES = ROOT / "schemas", ROOT / "examples"
def load(p): return json.loads(p.read_text(encoding="utf-8"))
def validator(rel): return Draft202012Validator(load(SCHEMAS / rel), format_checker=FormatChecker())
PAIRS = [(e, e.relative_to(EXAMPLES).with_suffix(".schema.json"))
         for e in sorted(EXAMPLES.rglob("*.json")) if e.parent.name != "envelope"]

@pytest.mark.parametrize("example,schema", PAIRS, ids=lambda x: str(x))
def test_example_is_valid(example, schema):
    validator(schema).validate(load(example))

def test_every_schema_has_an_example():
    schemas = {p.relative_to(SCHEMAS) for p in SCHEMAS.rglob("*.schema.json")}
    assert schemas == {s for _, s in PAIRS}

def test_envelope_examples_match_envelope_and_payload():
    envelopes = sorted((EXAMPLES / "envelope").glob("*.json"))
    assert {e.stem for e in envelopes} == {p.stem.removesuffix(".schema") for p in (SCHEMAS / "payloads").glob("*.json")}
    for env in envelopes:
        body = load(env)
        validator("envelope.schema.json").validate(body)
        validator(f"payloads/{body['eventType']}.schema.json").validate(body["payload"])

def test_enum_typo_is_rejected():
    body = load(EXAMPLES / "payloads/AccessAttempt.json"); body["accessMode"] = "FREE_ACESS"
    assert list(validator("payloads/AccessAttempt.schema.json").iter_errors(body))

def test_extra_payload_field_is_accepted():
    body = load(EXAMPLES / "payloads/Reading.json"); body["newField"] = 1
    validator("payloads/Reading.schema.json").validate(body)

def test_occurred_at_without_zone_is_rejected():
    body = load(EXAMPLES / "envelope/AccessAttempt.json"); body["occurredAt"] = "2026-10-23T15:04:05"
    assert list(validator("envelope.schema.json").iter_errors(body))

def test_sync_reservation_requires_authorized_ids():
    body = load(EXAMPLES / "sync.json"); del body["reservations"][0]["authorizedResidentIds"]
    assert list(validator("sync.schema.json").iter_errors(body))
```

Para que el test de enum quede cubierto, `examples/payloads/AccessAttempt.json` incluye `accessMode`. `examples/envelope/` tiene un sobre completo por cada `eventType`, y `envelope.schema.json` define `occurredAt` con `format: date-time` y `pattern: "Z$"`.

- [ ] **Step 2:** `py -3 -m venv .venv; .venv/Scripts/pip install -r requirements-dev.txt; .venv/Scripts/python -m pytest -q` → FAIL.
- [ ] **Step 3:** Escribir esquemas y ejemplos.
  - Payloads con `additionalProperties: true`; resources REST con `additionalProperties: false`, porque es la respuesta exacta.
  - `required` lista todos los campos de los contratos, aunque admitan `null` (los resources REST envían los nulos).
- [ ] **Step 4:** Run → PASS.
- [ ] **Step 5:** Commit `docs(contracts): v1 JSON schemas for MQTT, AMQP, sync and REST (H0)`. Registrar H0 como cerrado en `MILESTONES.md`.
