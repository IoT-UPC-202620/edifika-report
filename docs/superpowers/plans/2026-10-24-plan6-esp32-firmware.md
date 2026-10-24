# Plan 6 — Firmware del nodo de puerta (`esp32`) integrado con el Edge Gateway (H6) Implementation Plan

> **For agentic workers:** REQUIRED SUB-SKILL: Use superpowers:subagent-driven-development (recommended) or superpowers:executing-plans to implement this plan task-by-task. Steps use checkbox (`- [ ]`) syntax for tracking.

**Goal:** Que el firmware de referencia (`EdifikaNode` sobre ModestIoT) cumpla el contrato MQTT v1 completo:
- La puerta abre solo cuando el gateway lo decide.
- El nodo entiende `access_result`, `mode`, `rgb`, `unlock`, `display`, `buzzer`, `alert`, `maintenance` y `time_sync`, y responde `ack OK/FAILED`.
- Publica heartbeat y lecturas cada 10 s.
- El LED RGB refleja el rol de la puerta.

**Architecture:** Se conserva la arquitectura actual del nodo:
- `Device` con planificador round-robin.
- Los actuadores solo se tocan desde el tick del nodo.
- Los comandos entran por una cola FreeRTOS desde `EdgeMqttGatewayClient`.

Dos cambios estructurales:
1. **El parseo de comandos** pasa a una unidad pura `gateway/CommandParser` (solo ArduinoJson, sin Arduino), testeable en el host con `g++`.
2. **La lógica de presentación** (qué color, qué texto, qué patrón de buzzer según modo y decisión) pasa a una unidad pura `devices/DoorPresentation`, también testeable en el host. `EdifikaNode` solo traduce esas decisiones a comandos de los actuadores.

**Tech Stack:** C++ (Arduino core esp32 3.x), ModestIoT, PubSubClient, ArduinoJson 7, FreeRTOS. Tests de host con g++ (WinLibs MinGW 64) y una copia de `ArduinoJson.h` (single header v7) en `test/vendor/`. Compilación de la placa con `arduino-cli`.

**Spec:** `docs/superpowers/specs/2026-10-23-iot-contracts.md` §1 (incluye §1.3, comportamiento obligatorio); `docs/superpowers/specs/2026-10-23-iot-integration-design.md` §2.

## Global Constraints

- Repo `C:\Users\nanak\Dev\edifika\esp32`, **solo local**, sin push.
  - Gitflow según el roadmap: `develop` se crea desde `main` (la rama actual). Cada tarea va en `feature/H6-<slug>` y se cierra con `merge --no-ff` a `develop`.
  - Al terminar: `release/0.3.0` con `chore(release): prepare 0.3.0`, que actualiza `FIRMWARE_VERSION = "v0.3.0"` y el README.
  - Commits en inglés, Conventional Commits, con sufijo `(H6)`.
- **Estilo del repo:**
  - Clases `PascalCase` con `@file`/`@brief`/`@ingroup` en Doxygen.
  - Constantes `UPPER_SNAKE` con unidad en el nombre (`..._IN_MILLISECONDS`).
  - `camelCase` largo y descriptivo, comentarios en inglés en el código y comentarios de configuración en español en `NodeConfig.h`.
  - Identificadores de `Command`/`Event` en `static constexpr`.
  - **No se modifica `src/ModestIoT/`**: se usa tal cual, igual que hoy.
- **No se toca** `edifika-report/wokwi/**`.
- `NodeConfig.h`:
  - `UNLOCK_ON_ANY_CARD = false`.
  - `HEARTBEAT_INTERVAL_IN_MILLISECONDS = 10000`.
  - Nuevos `READINGS_INTERVAL_IN_MILLISECONDS = 10000`, `ACCESS_RESULT_TIMEOUT_IN_MILLISECONDS = 5000`, `DECISION_FEEDBACK_IN_MILLISECONDS = 2000`.
  - Se mantienen `DEVICE_ID = "esp32-acc-01"`, los pines y las polaridades.
- Mensajes al gateway: se conserva el envelope actual (`"v":"1"`, `ts` ISO o `null`). Cambian el estado del ack a `FAILED` (en vez de `ERROR`) y la unidad a `"°C"`.
- Textos de OLED en español sin tildes (fuente de 5×7): `Validando...`, `Acceso concedido`, `Acceso denegado`, `Gateway no disponible`, `RESERVADO`, `Mantenimiento`.
- **Herramientas:**
  - `g++` está en el PATH (WinLibs).
  - `arduino-cli` **no está instalado**. La Task 6 pide permiso a Jonatan para instalarlo con `winget install ArduinoSA.CLI`. Sin ese permiso, la compilación de la placa queda como paso manual en Arduino IDE y se reporta así.

## Review Focus

1. **Tarjeta leída dos veces mientras se espera `access_result`**: no se publica un segundo `access` → test en Task 3 (`DoorPresentation`, estado `waitingDecision`).
2. **`access_result` que llega después del timeout de 5 s**: se ignora y no abre la puerta → test en Task 3 (el resultado se acepta solo en `waitingDecision`).
3. **Comando con JSON válido pero sin `commandId`**: se ejecuta, pero no se publica un ack sin id (el contrato exige ack solo si hay `commandId`) → test en Task 2.
4. **`rgb` con `"#00ff88"` en minúsculas o `"00FF88"` sin `#`**: se acepta en minúsculas y se rechaza sin `#` con `FAILED "invalid color"` → test en Task 2.
5. **Cola de comandos llena (4)** con una ráfaga del gateway: los comandos descartados no deben dejar al gateway esperando ack eternamente. Se loguean y el gateway los marca `TIMEOUT` por su lado; la cola sube a 8 → test de capacidad en Task 2.

---

### Task 1: Gitflow y arnés de tests en el host

**Rama:** `feature/H6-host-test-harness`

**Files:**
- Create: `test/vendor/ArduinoJson.h` (single header v7.2.x, descargado de la release oficial de bblanchon/ArduinoJson), `test/run_tests.sh`, `test/test_main.cpp`, `test/minitest.h` (macros `TEST(name)`, `ASSERT_EQ`, `ASSERT_TRUE`, `ASSERT_STREQ`, con un registro estático de los tests)
- Modify: `.gitignore` (`test/build/`), `README.md` (sección "Tests en el host")

**Interfaces:**
- Produces: `bash test/run_tests.sh` compila `test/*.cpp` + `src/gateway/CommandParser.cpp` + `src/devices/DoorPresentation.cpp` con `g++ -std=c++17 -Wall -Wextra -Itest/vendor -Isrc`, ejecuta el binario e imprime `N passed, 0 failed`. Exit ≠ 0 si algún test falla.

- [ ] **Step 0:** `git checkout -b develop main && git checkout -b feature/H6-host-test-harness`.
- [ ] **Step 1:** Escribir `minitest.h`, `test_main.cpp` y un test trivial `TEST(harness_runs) { ASSERT_EQ(1, 1); }`.
- [ ] **Step 2:** `bash test/run_tests.sh` → `1 passed, 0 failed`.
- [ ] **Step 3:** Commit `test: add host-side test harness with vendored ArduinoJson (H6)`, y merge `--no-ff` a `develop`.

### Task 2: `CommandParser`: todos los comandos del contrato

**Rama:** `feature/H6-command-parser`

**Files:**
- Create: `src/gateway/CommandParser.h/.cpp`, que dependen solo de `<ArduinoJson.h>`, `<stdint.h>` y `<string.h>`.
- Modify: `src/gateway/EdgeMqttGatewayClient.h/.cpp`:
  - `RemoteCommand` se reemplaza por `NodeCommand` de `CommandParser.h`.
  - `onIncomingMessage` llama a `CommandParser::parse`.
  - `REMOTE_COMMAND_QUEUE_LENGTH = 8`.
  - `PACKET_BUFFER_SIZE` sigue en 512.
- Test: `test/test_command_parser.cpp`

**Interfaces:**
- Produces:

```cpp
enum class NodeCommandType : uint8_t { AccessResult, Mode, Rgb, Unlock, Display, Buzzer, Alert, Maintenance, TimeSync, Unsupported, Invalid };
enum class BuzzerPattern : uint8_t { Granted, Denied, Alert, Off };
enum class DoorMode : uint8_t { FreeAccess, Reserved };
struct RgbColor { uint8_t red, green, blue; };
struct NodeCommand {
    char commandId[40];            // "" when absent
    NodeCommandType type;
    bool granted;                  // access_result
    char message[65];              // access_result / display / alert / maintenance
    char holderName[33];           // access_result.name
    uint32_t durationInMilliseconds; // access_result.lockMs, unlock.durationMs | duration_ms
    BuzzerPattern buzzerPattern;   // access_result.buzzer, buzzer.pattern, alert.buzzer
    DoorMode mode;                 // mode.mode
    bool hasColor; RgbColor color; // mode.color, rgb.color
    bool active;                   // alert.active, maintenance.active
    uint32_t epochSeconds;         // time_sync.epoch
    char error[32];                // why it is Invalid: "invalid json", "invalid color", "missing params"
};
namespace CommandParser {
    NodeCommand parse(const uint8_t* payload, size_t length);
    bool parseHexColor(const char* text, RgbColor& destination);   // "#RRGGBB", case-insensitive
}
```

- [ ] **Step 1: Write the failing tests**

```cpp
TEST(access_result_granted) {
  auto c = parse(R"({"v":1,"commandId":"c1","type":"access_result","params":{"result":"GRANTED","reason":"ok","message":"Access granted","buzzer":"granted","name":"Ana Perez","lockMs":5000},"ts":1})");
  ASSERT_TRUE(c.type == NodeCommandType::AccessResult && c.granted); ASSERT_EQ(5000u, c.durationInMilliseconds);
  ASSERT_STREQ("Ana Perez", c.holderName); ASSERT_STREQ("c1", c.commandId); }
TEST(access_result_denied_has_no_duration) { /* granted false, duration 0, buzzer Denied */ }
TEST(mode_reserved_with_color) { /* DoorMode::Reserved, hasColor, {0,255,136} for "#00FF88" */ }
TEST(mode_free_access_without_color) { }
TEST(rgb_lowercase_is_accepted) { /* "#00ff88" -> {0,255,136} */ }
TEST(rgb_without_hash_is_invalid_color) { /* type Invalid, error "invalid color" */ }
TEST(unlock_accepts_camel_and_snake_case) { /* durationMs 4000 and duration_ms 6000 */ }
TEST(unknown_type_is_unsupported) { }
TEST(invalid_json_is_invalid) { }
TEST(missing_command_id_is_empty_string) { }
TEST(time_sync_epoch) { }
TEST(long_message_is_truncated_to_64_chars) { }
```

- [ ] **Step 2:** `bash test/run_tests.sh` → FAIL (no compila).
- [ ] **Step 3:** Implementar. Revisar a mano `EdgeMqttGatewayClient.cpp` para que encole `NodeCommand`; la compilación de la placa se verifica en la Task 6.
- [ ] **Step 4:** `bash test/run_tests.sh` → PASS.
- [ ] **Step 5:** Commit `feat(gateway): parse every v1 command into a typed NodeCommand (H6)` y merge.

### Task 3: `DoorPresentation`: decisión, modo y LED como máquina de estados pura

**Rama:** `feature/H6-door-presentation`

**Files:**
- Create: `src/devices/DoorPresentation.h/.cpp` (sin Arduino; el tiempo entra como parámetro `nowInMilliseconds`)
- Test: `test/test_door_presentation.cpp`

**Interfaces:**
- Produces:

```cpp
enum class DoorPhase : uint8_t { Idle, WaitingDecision, ShowingDecision, Maintenance };
struct PresentationFrame {             // what the node must show right now
    RgbColor ledColor;                 // computed per contracts §1.3
    const char* headline;              // OLED text or nullptr for the dashboard
    bool lockShouldOpen; uint32_t lockDurationInMilliseconds;   // one-shot, cleared after read
    bool beep; BuzzerPattern beepPattern;                         // one-shot
};
class DoorPresentation {
public:
    DoorPresentation(uint32_t accessResultTimeoutInMilliseconds, uint32_t decisionFeedbackInMilliseconds);
    bool onCardRead(uint32_t now);                        // true -> publish `access`; false while WaitingDecision or Maintenance
    bool onAccessResult(const NodeCommand& c, uint32_t now); // false when not WaitingDecision (late result ignored)
    void onMode(DoorMode mode, bool hasColor, RgbColor color);
    bool onRgb(RgbColor color);                           // false when FreeAccess -> ack FAILED "not reserved"
    void onMaintenance(bool active, const char* message);
    void onBrokerSession(bool connected);
    PresentationFrame tick(uint32_t now);                 // advances timeouts; WaitingDecision > 5 s -> denied "Gateway no disponible"
    DoorMode mode() const; DoorPhase phase() const;
};
```

Colores: blanco `{255,255,255}` en reposo, verde `{0,255,0}`, rojo `{255,0,0}`, ámbar `{255,128,0}` y rojo fijo sin sesión con el broker. En `Reserved`, se usa el color fijado, que por defecto es blanco si nunca se fijó.

- [ ] **Step 1: Write the failing tests**

```cpp
TEST(card_then_granted_opens_and_shows_green_for_2s_in_free_access) { }
TEST(second_card_while_waiting_is_ignored) { }
TEST(no_result_in_5s_denies_with_gateway_unavailable) { /* headline "Gateway no disponible", red, no lock */ }
TEST(late_result_after_timeout_is_ignored) { }
TEST(reserved_mode_shows_fixed_color_and_RESERVADO) { }
TEST(rgb_in_free_access_is_rejected) { }
TEST(rgb_in_reserved_updates_color) { }
TEST(back_to_free_access_returns_to_white_status) { }
TEST(maintenance_ignores_cards_and_shows_amber) { }
TEST(no_broker_session_shows_solid_red) { }
TEST(denied_in_reserved_keeps_fixed_color_but_beeps_denied) { }
```

- [ ] **Step 2:** FAIL. **Step 3:** Implementar. **Step 4:** PASS.
- [ ] **Step 5:** Commit `feat(devices): pure door presentation state machine for decision, mode and LED (H6)` y merge.

### Task 4: `EdifikaNode` conectado al contrato

**Rama:** `feature/H6-node-contract`

**Files:**
- Modify: `src/config/NodeConfig.h`, con los valores de los Global Constraints.
- Modify: `src/devices/EdifikaNode.h/.cpp`:
  - Miembro `DoorPresentation doorPresentation`.
  - `onCardDetected` llama a `doorPresentation.onCardRead`. Si devuelve `true`, encola `AccessAttemptMessage`. Muestra `Validando...` y abre solo si `UNLOCK_ON_ANY_CARD`.
  - `processRemoteCommands` despacha por `NodeCommandType` y publica `CommandAckMessage` (`OK` o `FAILED` con `detail`) solo si `commandId` no está vacío:
    - `AccessResult`, `Mode`, `Rgb` y `Maintenance` van a `doorPresentation`.
    - `Unlock` usa `unlockDoor(duration)`.
    - `Display` y `Alert` muestran el mensaje 3 s en la OLED; `Alert` también suena con su `buzzerPattern` si está `active`.
    - `Buzzer` reproduce el patrón: `Granted` = 1 beep de 150 ms, `Denied` = 2 de 150 ms, `Alert` = 3 de 300 ms, `Off` = silencio.
    - `TimeSync` llama a `settimeofday` con `epochSeconds`.
    - `Unsupported` responde `FAILED "unsupported command"` e `Invalid` responde `FAILED <error>`.
  - `onDeviceTick` aplica el `PresentationFrame`: LED vía `statusRgbLed`, OLED (headline o dashboard), cerradura y beep.
  - **Se elimina `updateRgbGradient`.**
  - `updateMatrixRows` no cambia.
  - Se agrega `updateReadings()`, que cada `READINGS_INTERVAL_IN_MILLISECONDS` encola temperatura y humedad con el último valor válido, si `climateAvailable`. `onClimateRead` ya no publica; solo actualiza la OLED.
  - `doorPresentation.onBrokerSession(edgeGateway.isSessionActive())` se llama en cada tick.
- Modify: `src/telemetry/NodeMessages.cpp`: la unidad de temperatura pasa a `"°C"`. `CommandAckMessage` no cambia, pero su status pasa a ser `"OK"` o `"FAILED"` según quién lo llame.
- Modify: `src/actuators/OledDisplay.h/.cpp`, para agregar `setHeadline(const char*)` y `SHOW_HEADLINE_COMMAND` (identificador `324`), siguiendo el patrón de `SHOW_MESSAGE_COMMAND`. `OledDisplay` es una clase del nodo, no de ModestIoT, así que se puede modificar.

- [ ] **Step 1:** Implementar. La lógica ya está cubierta por las Tasks 2 y 3; esta tarea solo cablea.
- [ ] **Step 2:** `bash test/run_tests.sh` → PASS. Revisar contra la tabla de contratos §1.2 que cada `type` tiene una rama en el `switch` y que cada ack usa `OK` o `FAILED`.
- [ ] **Step 3:** Commit `feat(node): gateway-driven access, door roles, RGB status and periodic readings (H6)` y merge.

### Task 5: Broker del repo, prueba con Mosquitto y documentación

**Rama:** `feature/H6-broker-and-docs`

**Files:**
- Modify: `broker/README` o la sección del `README.md`. `broker/` queda como **broker de desarrollo del nodo**; la plataforma (`Edifika-IoT-Platform`) es el broker de integración. Se documentan los dos.
- Create: `broker/send-command.sh`, con ejemplos de `mosquitto_pub` para cada `type` de los contratos §1.2 sobre `esp32-acc-01`.
- Modify: `README.md`, en las secciones "Conexión a internet" (tabla actualizada: heartbeat 10 s, lecturas 10 s, ack `OK`/`FAILED`, todos los comandos), "Comportamiento de la puerta" (nueva, contratos §1.3), "Registro del nodo en la nube" (`POST /api/v1/iot/gateways`, `POST /api/v1/iot/devices` con `deviceCode: esp32-acc-01` y sus capabilities `RFID, LOCK, BUZZER, OLED, RGB_LED, TEMPERATURE, HUMIDITY`) y "Diferencias con `edifika_test.ino`".
- Modify: `docs/gen_circuit.py`/`circuito.*`, solo si la Task 4 cambió algún pin. **No debería cambiar ninguno.**

- [ ] **Step 1:** Escribir los documentos y el script.
- [ ] **Step 2:** Verificar. Run: `grep -oE '"type":"[a-z_]+"' broker/send-command.sh | sort -u`. Expected: los 9 tipos de los contratos §1.2.
- [ ] **Step 3:** Commit `docs: document the v1 contract behaviour, node registration and command examples (H6)` y merge.

### Task 6: Compilación de la placa y release

**Rama:** `release/0.3.0`

- [ ] **Step 1:** Pedir a Jonatan permiso para `winget install ArduinoSA.CLI`. Si acepta:
  - `arduino-cli core install esp32:esp32@3.x`.
  - Instalar las librerías del README.
  - `cp src/config/Secrets.example.h src/config/Secrets.h`.
  - `arduino-cli compile -b esp32:esp32:esp32 .` → exit 0. Anotar el uso de flash.
  - Borrar `Secrets.h`, que está en `.gitignore`.
  
  Si no acepta, dejar la compilación como paso manual en Arduino IDE y anotarlo en `MILESTONES.md` como **no verificado**.
- [ ] **Step 2:** `FIRMWARE_VERSION = "v0.3.0"`, entrada en el README o CHANGELOG, y commit `chore(release): prepare 0.3.0 (H6)`.
- [ ] **Step 3:** Merge `--no-ff` a `main` y a `develop`, y tag `v0.3.0`.
- [ ] **Step 4:** Registrar H6 en `Edifika-IoT-Platform/MILESTONES.md`: tests de host (N passed), resultado de la compilación (o "no verificado") y prueba manual con hardware pendiente de Jonatan.

### Task 7 (manual, con el hardware): checklist de aceptación

La ejecuta Jonatan con la placa física y el stack del Plan 5 levantado. Este plan no la puede automatizar. La lista va en el README, en la sección "Checklist de aceptación":
1. Encender: LED rojo y luego blanco cuando el gateway acepta el heartbeat.
2. Tarjeta registrada y sin deuda: `Acceso concedido`, verde 2 s, relé 5 s (`lockMs`) y fila 1 de la malla encendida.
3. Tarjeta de un residente con deuda: `Acceso denegado`, rojo 2 s, sin relé.
4. Reservar desde la API: `RESERVADO` y el LED con el color fijado.
5. `PUT /led` como titular: el LED cambia en menos de 3 s.
6. Gateway apagado y tarjeta: a los 5 s, `Gateway no disponible`.
7. Fin de la reserva: el LED vuelve a blanco de estado.
