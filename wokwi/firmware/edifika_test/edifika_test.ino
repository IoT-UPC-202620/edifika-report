// Edifika - prueba: DHT11 + OLED SSD1306 + RFID RC522 + rele de cerradura + LED RGB + malla 3x3
// Basado en el sketch que ya funcionaba; se quito el ultrasonico por ahora.
// Placa: ESP32 Dev Module. Monitor serie a 115200.
//
// Librerias: Adafruit SSD1306 (+ Adafruit GFX), DHT sensor library (+ Adafruit Unified Sensor), MFRC522

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include "DHT.h"
#include <SPI.h>
#include <MFRC522.h>

// ---------------- pines ----------------
#define DHTPIN    4        // datos del DHT11
#define DHTTYPE   DHT11
#define DIR_OLED  0x3C
#define ANCHO     128
#define ALTO      64

// RC522 por SPI (pines por defecto de VSPI). Si tu MISO esta en otro pin, cambialo aqui.
#define RFID_SCK   18
#define RFID_MISO  19
#define RFID_MOSI  23
#define RFID_SS    5       // pin rotulado SDA en el modulo
#define RFID_RST   27

// Buzzer: 1 = activo (pita solo con voltaje), 0 = pasivo (necesita tono)
// Con 0 se genera un tono de 2 kHz, que hace sonar tanto pasivos como activos.
#define BUZZER_PIN     25
#define BUZZER_ACTIVO  0
#define BUZZER_FREC    2000   // Hz, solo para pasivo

// Rele de la cerradura (modulo de 2 canales SRD-05VDC-SL-C, se usa IN1).
// La mayoria de estos modulos se activan con LOW. Si el tuyo hace clic con HIGH, pon 0.
#define RELE_PIN          26
#define RELE_ACTIVO_BAJO  1

// LED RGB de 4 patas, cada color con su resistencia de 220 ohm.
// Catodo comun (pata larga a GND) = 0; anodo comun (pata larga a 3V3) = 1.
#define RGB_R_PIN         13
#define RGB_G_PIN         14
#define RGB_B_PIN         15
#define RGB_ANODO_COMUN   1       // el de este montaje enciende con la pata larga a 3V3
#define RGB_FREC          5000
#define RGB_PASO_MS       10      // 510 pasos x 10 ms = ~5 s de rojo a azul

// Malla de LEDs 3x3: cada fila (3 LEDs) la conmuta un transistor NPN.
// GPIO -> 1k -> base. HIGH = fila encendida.
const uint8_t FILA_PIN[3] = {16, 17, 2};   // GPIO2 tambien enciende el LED azul de la placa

// Condiciones de ejemplo para cada fila; cambialas a lo que necesites
const float TEMP_ALTA = 28.0;   // C
const float HUM_ALTA  = 70.0;   // %

DHT dht(DHTPIN, DHTTYPE);
Adafruit_SSD1306 oled(ANCHO, ALTO, &Wire, -1);
MFRC522 rfid(RFID_SS, RFID_RST);

const unsigned long MOSTRAR_TARJETA_MS = 3000;
const unsigned long REFRESCO_PANTALLA_MS = 500;
const unsigned long BEEP_MS = 500;
const unsigned long APERTURA_MS = 3000;   // tiempo que la cerradura queda energizada

float temp = NAN, hum = NAN;
unsigned long tDHT = 0;
unsigned long tPantalla = 0;

String uidTarjeta = "";
String tipoTarjeta = "";
String ultimoUid = "---";
unsigned long tTarjeta = 0;
bool hayTarjeta = false;

bool sonando = false;
unsigned long tBeep = 0;

bool abierta = false;
unsigned long tApertura = 0;

int fase = 0;             // 0..510: 0 rojo, 255 verde, 510 azul
int sentido = 1;          // +1 hacia azul, -1 de vuelta a rojo
unsigned long tRgb = 0;

// ---------------- rele / cerradura ----------------
void releEscribir(bool encender) {
  digitalWrite(RELE_PIN, (encender != RELE_ACTIVO_BAJO) ? HIGH : LOW);
}

void releIniciar() {
  releEscribir(false);      // fija el nivel de reposo antes de habilitar la salida
  pinMode(RELE_PIN, OUTPUT);
  releEscribir(false);      // cerradura bloqueada al arrancar
}

// Energiza la cerradura APERTURA_MS sin bloquear el resto del programa
void abrirCerradura() {
  abierta = true;
  tApertura = millis();
  releEscribir(true);
  Serial.println("Cerradura abierta");
}

void actualizarCerradura() {
  if (abierta && millis() - tApertura >= APERTURA_MS) {
    abierta = false;
    releEscribir(false);
    Serial.println("Cerradura cerrada");
  }
}

// ---------------- led rgb ----------------
// En core 2.x se usan los canales 2-4 para no compartir timer con el buzzer (canal 0).
void rgbEscribir(uint8_t r, uint8_t g, uint8_t b) {
#if RGB_ANODO_COMUN
  r = 255 - r; g = 255 - g; b = 255 - b;
#endif
#if ESP_ARDUINO_VERSION_MAJOR >= 3
  ledcWrite(RGB_R_PIN, r);
  ledcWrite(RGB_G_PIN, g);
  ledcWrite(RGB_B_PIN, b);
#else
  ledcWrite(2, r);
  ledcWrite(3, g);
  ledcWrite(4, b);
#endif
}

void rgbIniciar() {
#if ESP_ARDUINO_VERSION_MAJOR >= 3
  ledcAttach(RGB_R_PIN, RGB_FREC, 8);
  ledcAttach(RGB_G_PIN, RGB_FREC, 8);
  ledcAttach(RGB_B_PIN, RGB_FREC, 8);
#else
  ledcSetup(2, RGB_FREC, 8); ledcAttachPin(RGB_R_PIN, 2);
  ledcSetup(3, RGB_FREC, 8); ledcAttachPin(RGB_G_PIN, 3);
  ledcSetup(4, RGB_FREC, 8); ledcAttachPin(RGB_B_PIN, 4);
#endif
  rgbEscribir(255, 0, 0);
}

// Rojo -> amarillo -> verde -> cian -> azul y de vuelta, sin bloquear
void actualizarRgb() {
  if (millis() - tRgb < RGB_PASO_MS) return;
  tRgb = millis();

  fase += sentido;
  if (fase >= 510) { fase = 510; sentido = -1; }
  if (fase <= 0)   { fase = 0;   sentido = 1;  }

  if (fase <= 255) rgbEscribir(255 - fase, fase, 0);               // rojo -> verde
  else             rgbEscribir(0, 510 - fase, fase - 255);         // verde -> azul
}

// ---------------- malla 3x3 ----------------
void filaEscribir(uint8_t fila, bool encender) {
  if (fila < 3) digitalWrite(FILA_PIN[fila], encender ? HIGH : LOW);
}

// Enciende varias filas a la vez: bit 0 = fila 1, bit 1 = fila 2, bit 2 = fila 3.
// Ej.: filasEscribir(0b101) enciende la 1 y la 3.
void filasEscribir(uint8_t mascara) {
  for (uint8_t i = 0; i < 3; i++) filaEscribir(i, mascara & (1 << i));
}

void filasIniciar() {
  for (uint8_t i = 0; i < 3; i++) {
    digitalWrite(FILA_PIN[i], LOW);
    pinMode(FILA_PIN[i], OUTPUT);
  }
}

void actualizarFilas() {
  uint8_t mascara = 0;
  if (abierta)                          mascara |= 0b001;   // fila 1: cerradura abierta
  if (!isnan(temp) && temp >= TEMP_ALTA) mascara |= 0b010;   // fila 2: hace calor
  if (!isnan(hum)  && hum  >= HUM_ALTA)  mascara |= 0b100;   // fila 3: mucha humedad
  filasEscribir(mascara);
}

// ---------------- buzzer ----------------
void buzzerEncender() {
#if BUZZER_ACTIVO
  digitalWrite(BUZZER_PIN, HIGH);
#elif ESP_ARDUINO_VERSION_MAJOR >= 3
  ledcWriteTone(BUZZER_PIN, BUZZER_FREC);
#else
  ledcWriteTone(0, BUZZER_FREC);
#endif
}

void buzzerApagar() {
#if BUZZER_ACTIVO
  digitalWrite(BUZZER_PIN, LOW);
#elif ESP_ARDUINO_VERSION_MAJOR >= 3
  ledcWriteTone(BUZZER_PIN, 0);
#else
  ledcWriteTone(0, 0);
#endif
}

void buzzerIniciar() {
#if BUZZER_ACTIVO
  pinMode(BUZZER_PIN, OUTPUT);
#elif ESP_ARDUINO_VERSION_MAJOR >= 3
  ledcAttach(BUZZER_PIN, BUZZER_FREC, 8);
#else
  ledcSetup(0, BUZZER_FREC, 8);
  ledcAttachPin(BUZZER_PIN, 0);
#endif
  buzzerApagar();
}

// Suena BEEP_MS sin bloquear el resto del programa
void iniciarBeep() {
  Serial.println("Beep");
  sonando = true;
  tBeep = millis();
  buzzerEncender();
}

void actualizarBeep() {
  if (sonando && millis() - tBeep >= BEEP_MS) {
    sonando = false;
    buzzerApagar();
  }
}

void setup() {
  releIniciar();             // primero, para que el rele no haga clic al encender
  Serial.begin(115200);
  buzzerIniciar();
  rgbIniciar();
  filasIniciar();

  // Pitido de arranque: si no suena aqui, el problema es el buzzer/cableado, no el RFID
  Serial.println("Probando buzzer...");
  buzzerEncender();
  delay(300);
  buzzerApagar();

  dht.begin();

  SPI.begin(RFID_SCK, RFID_MISO, RFID_MOSI, RFID_SS);
  rfid.PCD_Init();
  byte version = rfid.PCD_ReadRegister(MFRC522::VersionReg);
  if (version == 0x00 || version == 0xFF) {
    Serial.println("No encuentro el RC522. Revisa cableado y que este a 3.3V");
  } else {
    Serial.printf("RC522 listo (version 0x%02X)\n", version);
  }

  if (!oled.begin(SSD1306_SWITCHCAPVCC, DIR_OLED)) {
    Serial.println("No encuentro la OLED");
    while (true) delay(1000);
  }
  oled.setTextColor(SSD1306_WHITE);
  oled.clearDisplay();
  oled.setCursor(0, 28);
  oled.print("Iniciando...");
  oled.display();
  delay(1500);
}

// ---------------- rfid ----------------
bool leerTarjeta() {
  if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()) return false;

  uidTarjeta = "";
  for (byte i = 0; i < rfid.uid.size; i++) {
    if (rfid.uid.uidByte[i] < 0x10) uidTarjeta += "0";
    uidTarjeta += String(rfid.uid.uidByte[i], HEX);
    if (i < rfid.uid.size - 1) uidTarjeta += " ";
  }
  uidTarjeta.toUpperCase();

  MFRC522::PICC_Type tipo = rfid.PICC_GetType(rfid.uid.sak);
  tipoTarjeta = String((const char *)rfid.PICC_GetTypeName(tipo));

  rfid.PICC_HaltA();        // deja la tarjeta en reposo para no leerla en bucle
  rfid.PCD_StopCrypto1();

  Serial.printf("Tarjeta: %s  (%s)\n", uidTarjeta.c_str(), tipoTarjeta.c_str());
  return true;
}

// ---------------- pantalla ----------------
void dibujarTarjeta() {
  oled.clearDisplay();

  oled.setTextSize(1);
  oled.setCursor(0, 0);
  oled.print("TARJETA DETECTADA");
  oled.drawLine(0, 10, ANCHO - 1, 10, SSD1306_WHITE);

  oled.setCursor(0, 16);
  oled.print("UID:");
  String compacto = uidTarjeta;
  compacto.replace(" ", "");
  if (compacto.length() <= 10) {   // UID de 4 bytes: 8 caracteres grandes caben en 128 px
    oled.setTextSize(2);
    oled.setCursor(0, 28);
    oled.print(compacto);
  } else {                         // UID de 7 bytes: letra chica con espacios
    oled.setTextSize(1);
    oled.setCursor(0, 32);
    oled.print(uidTarjeta);
  }

  oled.setTextSize(1);
  oled.setCursor(0, 56);
  oled.print(tipoTarjeta);

  oled.display();
}

void dibujar() {
  oled.clearDisplay();

  oled.setTextSize(1);
  oled.setCursor(0, 0);   oled.print("TEMP C");
  oled.setCursor(72, 0);  oled.print("HUM %");

  oled.setTextSize(2);
  oled.setCursor(0, 10);
  if (isnan(temp)) oled.print("--.-"); else oled.print(temp, 1);
  oled.setCursor(72, 10);
  if (isnan(hum))  oled.print("--");   else oled.print(hum, 0);

  oled.drawLine(0, 32, ANCHO - 1, 32, SSD1306_WHITE);

  oled.setTextSize(1);
  oled.setCursor(0, 38);
  oled.print("ULTIMA TARJETA");
  oled.setCursor(0, 50);
  oled.print(ultimoUid);

  oled.display();
}

// ---------------- bucle ----------------
void loop() {
  actualizarBeep();
  actualizarCerradura();
  actualizarRgb();
  actualizarFilas();

  if (millis() - tDHT >= 2000) {        // el DHT11 no admite lecturas mas rapidas
    tDHT = millis();
    float h = dht.readHumidity();
    float t = dht.readTemperature();
    hum  = isnan(h) ? NAN : h;
    temp = isnan(t) ? NAN : t;
    Serial.printf("T=%.1f C  H=%.0f %%\n", temp, hum);
  }

  if (leerTarjeta()) {
    hayTarjeta = true;
    tTarjeta = millis();
    iniciarBeep();
    abrirCerradura();       // por ahora abre con cualquier tarjeta
    ultimoUid = uidTarjeta;
    ultimoUid.replace(" ", "");
    tPantalla = 0;
  }
  if (hayTarjeta && millis() - tTarjeta >= MOSTRAR_TARJETA_MS) hayTarjeta = false;

  if (millis() - tPantalla >= REFRESCO_PANTALLA_MS) {
    tPantalla = millis();
    if (hayTarjeta) dibujarTarjeta();
    else dibujar();
  }
}
