// Edifika - prueba aislada de la malla 3x3 de LEDs rojos.
// Cada fila: 3 LEDs con 220 ohm a 5V, conmutados por un NPN (GPIO -> 1k -> base).
// Recorre varios patrones cada 1 s y avisa por el Monitor serie (115200) cual esta activo.

const uint8_t FILA_PIN[3] = {16, 17, 2};
#define PASO_MS 1000

// bit 0 = fila 1, bit 1 = fila 2, bit 2 = fila 3
const uint8_t PATRONES[] = {
  0b001, 0b010, 0b100,   // cada fila sola
  0b011, 0b110, 0b101,   // de a dos
  0b111,                 // todas
  0b000                  // ninguna
};

void filasEscribir(uint8_t mascara) {
  for (uint8_t i = 0; i < 3; i++) digitalWrite(FILA_PIN[i], (mascara >> i) & 1);
}

void setup() {
  Serial.begin(115200);
  for (uint8_t i = 0; i < 3; i++) {
    digitalWrite(FILA_PIN[i], LOW);
    pinMode(FILA_PIN[i], OUTPUT);
  }
  delay(500);
  Serial.println("Prueba de malla 3x3");
}

void loop() {
  for (uint8_t p : PATRONES) {
    Serial.printf("Filas encendidas: %s %s %s\n",
                  (p & 1) ? "1" : "-", (p & 2) ? "2" : "-", (p & 4) ? "3" : "-");
    filasEscribir(p);
    delay(PASO_MS);
  }
}
