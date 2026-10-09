# Cableado del nodo ESP32 de Edifika

Fuente de verdad: `../diagram.json`. Esta tabla sirve para la sección 5.6 del informe.

## Mapa de pines

| Componente | Señal | Pin ESP32 | Bus / tipo | Alimentación |
|---|---|---|---|---|
| Lector RFID RC522 | SDA (SS) | GPIO5 | SPI (VSPI) | 3V3 |
| | SCK | GPIO18 | SPI | |
| | MOSI | GPIO23 | SPI | |
| | MISO | GPIO19 | SPI | |
| | RST | GPIO27 | Digital | |
| Pantalla OLED SSD1306 (0x3C) | SDA | GPIO21 | I2C | 3V3 |
| | SCL | GPIO22 | I2C | |
| Reloj RTC DS1307 (0x68) | SDA | GPIO21 | I2C (compartido) | 5V |
| | SCL | GPIO22 | I2C (compartido) | |
| Módulo relé (cerradura) | IN | GPIO26 | Salida digital | 5V |
| Buzzer | + | GPIO25 | Salida (tono) | |
| Sensor de humedad | SIG | GPIO34 | ADC1 (solo entrada) | 3V3 |
| Sensor ultrasónico HC-SR04 | TRIG | GPIO32 | Salida digital | 5V |
| | ECHO | GPIO33 | Entrada, vía divisor 1 kΩ / 2 kΩ | |

## Decisiones de diseño

- **Humedad en GPIO34 (ADC1).** El ADC2 del ESP32 no se puede usar mientras el Wi-Fi está activo, y el nodo siempre está conectado a Wi-Fi/MQTT.
- **Divisor en ECHO.** El HC-SR04 se alimenta a 5 V y su pin ECHO entrega 5 V; los GPIO del ESP32 toleran 3,3 V. El divisor 1 kΩ + 2 kΩ lo reduce a unos 3,3 V.
- **Relé y estado seguro (US72).** La cerradura se conecta por los contactos COM y NO, así que sin energizar el relé queda bloqueada. El firmware debe poner GPIO26 en bajo al arrancar.
- **Bus I2C compartido.** OLED y RTC tienen direcciones distintas (0x3C y 0x68), por lo que comparten SDA/SCL.
- **Pines evitados.** No se usan GPIO0, 2, 12 ni 15 (strapping de arranque) ni GPIO6–11 (flash).

## Diferencias entre la simulación y el montaje físico

| Elemento | En Wokwi | En el montaje físico |
|---|---|---|
| RC522 | Chip personalizado (`rfid-rc522.chip.*`), solo representa pines y cableado; no emula tarjetas | Módulo RC522 real |
| Sensor de humedad | Potenciómetro como sustituto analógico | Sensor de humedad de suelo (salida analógica) |
| Cerradura | LED amarillo con resistencia de 220 Ω | Cerradura eléctrica de 12 V con fuente externa y diodo 1N4007 en antiparalelo; COM del relé a +12 V |
| RTC | DS1307 (5 V) | DS3231 recomendado: mismo bus y dirección 0x68, y trabaja a 3,3 V sin adaptar niveles I2C |
