// Edifika - prueba de hardware: RFID RC522 + OLED SSD1306 + sensor de humedad
// Placa: ESP32 Dev Module. Monitor serie a 115200.
//
// Librerias (Administrador de bibliotecas):
//   - Adafruit SSD1306 (instala tambien Adafruit GFX)
//   - MFRC522 (de GithubCommunity / Miguel Balboa)
//   - DHT sensor library (Adafruit) + Adafruit Unified Sensor  [solo si USE_DHT = 1]

#include <Wire.h>
#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <MFRC522.h>

// ---- Configuracion del sensor de humedad ----
// 1 = DHT11/DHT22 (pin DAT) en GPIO4
// 0 = sensor de humedad de suelo analogico (pin AOUT) en GPIO34
#define USE_DHT 1
#define DHT_TYPE DHT11  // DHT11 o DHT22

#if USE_DHT
#include <DHT.h>
const uint8_t PIN_HUM = 4;
DHT dht(PIN_HUM, DHT_TYPE);
#else
const uint8_t PIN_HUM = 34;
// Calibracion del sensor de suelo: anota la lectura con el sensor al aire (seco)
// y sumergido en agua, y pon aqui esos valores.
const int VALOR_SECO = 3200;
const int VALOR_AGUA = 1400;
#endif

// ---- Pines ----
const uint8_t PIN_RFID_SS = 5;
const uint8_t PIN_RFID_RST = 27;
const uint8_t PIN_SDA = 21;
const uint8_t PIN_SCL = 22;

// ---- OLED ----
const uint8_t OLED_ANCHO = 128;
const uint8_t OLED_ALTO = 64;  // si tu pantalla es 128x32, cambia a 32
const uint8_t OLED_DIR = 0x3C;
Adafruit_SSD1306 oled(OLED_ANCHO, OLED_ALTO, &Wire, -1);

MFRC522 rfid(PIN_RFID_SS, PIN_RFID_RST);

// ---- Estado ----
float humedad = NAN;
float temperatura = NAN;  // solo con DHT
String ultimoUid = "---";
bool rfidOk = false;
unsigned long ultimaLectura = 0;
const unsigned long INTERVALO_SENSOR_MS = 2000;

void leerHumedad() {
#if USE_DHT
  humedad = dht.readHumidity();
  temperatura = dht.readTemperature();
#else
  int crudo = analogRead(PIN_HUM);
  humedad = constrain(map(crudo, VALOR_SECO, VALOR_AGUA, 0, 100), 0, 100);
  Serial.printf("ADC crudo: %d\n", crudo);
#endif
}

void dibujar() {
  oled.clearDisplay();
  oled.setTextSize(1);
  oled.setTextColor(SSD1306_WHITE);

  oled.setCursor(0, 0);
  oled.print("EDIFIKA  RFID:");
  oled.print(rfidOk ? "OK" : "ERROR");

  oled.setCursor(0, 16);
  if (isnan(humedad)) {
    oled.print("Humedad: error");
  } else {
    oled.printf("Humedad: %.0f %%", humedad);
  }

#if USE_DHT
  oled.setCursor(0, 28);
  if (isnan(temperatura)) {
    oled.print("Temp: error");
  } else {
    oled.printf("Temp: %.1f C", temperatura);
  }
#endif

  oled.setCursor(0, 44);
  oled.print("Tarjeta:");
  oled.setCursor(0, 54);
  oled.print(ultimoUid);

  oled.display();
}

void leerTarjeta() {
  if (!rfid.PICC_IsNewCardPresent() || !rfid.PICC_ReadCardSerial()) return;

  String uid = "";
  for (byte i = 0; i < rfid.uid.size; i++) {
    if (rfid.uid.uidByte[i] < 0x10) uid += "0";
    uid += String(rfid.uid.uidByte[i], HEX);
    if (i < rfid.uid.size - 1) uid += ":";
  }
  uid.toUpperCase();
  ultimoUid = uid;
  Serial.println("Tarjeta: " + uid);

  rfid.PICC_HaltA();
  rfid.PCD_StopCrypto1();
  dibujar();
}

void setup() {
  Serial.begin(115200);
  Wire.begin(PIN_SDA, PIN_SCL);

  if (!oled.begin(SSD1306_SWITCHCAPVCC, OLED_DIR)) {
    Serial.println("OLED no encontrada: revisa SDA/SCL y VCC");
  }
  oled.clearDisplay();
  oled.setTextSize(1);
  oled.setTextColor(SSD1306_WHITE);
  oled.setCursor(0, 0);
  oled.print("Iniciando...");
  oled.display();

#if USE_DHT
  dht.begin();
#else
  pinMode(PIN_HUM, INPUT);
#endif

  SPI.begin();  // VSPI por defecto: SCK18, MISO19, MOSI23
  rfid.PCD_Init();
  byte version = rfid.PCD_ReadRegister(MFRC522::VersionReg);
  rfidOk = (version != 0x00 && version != 0xFF);
  Serial.printf("RC522 version: 0x%02X (%s)\n", version, rfidOk ? "OK" : "sin respuesta, revisa cableado");

  leerHumedad();
  dibujar();
}

void loop() {
  if (millis() - ultimaLectura >= INTERVALO_SENSOR_MS) {
    ultimaLectura = millis();
    leerHumedad();
#if USE_DHT
    Serial.printf("Humedad: %.1f %%  Temp: %.1f C\n", humedad, temperatura);
#else
    Serial.printf("Humedad: %.0f %%\n", humedad);
#endif
    dibujar();
  }
  leerTarjeta();
}
