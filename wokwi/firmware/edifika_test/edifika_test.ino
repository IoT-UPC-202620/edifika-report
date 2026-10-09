// Edifika - prueba: DHT11 + OLED SSD1306 + RFID RC522
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
#define BUZZER_PIN     25
#define BUZZER_ACTIVO  1
#define BUZZER_FREC    2000   // Hz, solo para pasivo

DHT dht(DHTPIN, DHTTYPE);
Adafruit_SSD1306 oled(ANCHO, ALTO, &Wire, -1);
MFRC522 rfid(RFID_SS, RFID_RST);

const unsigned long MOSTRAR_TARJETA_MS = 3000;
const unsigned long REFRESCO_PANTALLA_MS = 500;
const unsigned long BEEP_MS = 500;

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
  Serial.begin(115200);
  buzzerIniciar();

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
