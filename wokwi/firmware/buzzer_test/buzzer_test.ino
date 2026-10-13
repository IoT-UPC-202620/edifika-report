// Edifika - prueba aislada del buzzer en GPIO25.
// Repite 3 pasos de 2 s cada uno y avisa por el Monitor serie (115200) cual esta corriendo:
//   1) HIGH fijo   -> suena si el buzzer es ACTIVO (o queda callado si es modulo activo en LOW)
//   2) LOW fijo    -> suena si es un MODULO que se activa con LOW
//   3) tono 2 kHz  -> suena si el buzzer es PASIVO
// Con el multimetro en V= 20 entre GPIO25 y GND deberias ver ~3.3 V en el paso 1 y ~0 V en el 2.

#define BUZZER_PIN  25
#define FREC        2000
#define PASO_MS     2000

void tonoEncender() {
#if ESP_ARDUINO_VERSION_MAJOR >= 3
  ledcAttach(BUZZER_PIN, FREC, 8);
  ledcWriteTone(BUZZER_PIN, FREC);
#else
  ledcSetup(0, FREC, 8);
  ledcAttachPin(BUZZER_PIN, 0);
  ledcWriteTone(0, FREC);
#endif
}

void tonoApagar() {
#if ESP_ARDUINO_VERSION_MAJOR >= 3
  ledcWriteTone(BUZZER_PIN, 0);
  ledcDetach(BUZZER_PIN);
#else
  ledcWriteTone(0, 0);
  ledcDetachPin(BUZZER_PIN);
#endif
  pinMode(BUZZER_PIN, OUTPUT);
}

void setup() {
  Serial.begin(115200);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(BUZZER_PIN, LOW);
  delay(500);
  Serial.println("Prueba de buzzer en GPIO25");
}

void loop() {
  Serial.println("1) HIGH fijo (3.3 V)");
  digitalWrite(BUZZER_PIN, HIGH);
  delay(PASO_MS);

  Serial.println("2) LOW fijo (0 V)");
  digitalWrite(BUZZER_PIN, LOW);
  delay(PASO_MS);

  Serial.println("3) Tono 2 kHz");
  tonoEncender();
  delay(PASO_MS);
  tonoApagar();

  Serial.println("-- silencio --");
  digitalWrite(BUZZER_PIN, LOW);
  delay(PASO_MS);
}
