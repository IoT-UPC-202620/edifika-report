# Wokwi — Diseño del dispositivo IoT (ESP32)

Carpeta de trabajo para el diagrama de circuito y el firmware del nodo ESP32 de Edifika. Respalda la sección **5.6. IoT Device Design** del informe.

## Hardware del nodo

| Componente | Función |
|---|---|
| ESP32 | Microcontrolador del nodo |
| Lector RFID | Lectura de tarjetas de acceso |
| Cerradura eléctrica (con relé o MOSFET) | Actuador de acceso |
| Pantalla OLED | Mensajes de estado, fecha y hora |
| Buzzer | Señales sonoras |
| Sensor de humedad | Humedad del área verde |
| Sensor ultrasónico | Nivel del tanque de agua |
| Reloj (RTC) | Hora del nodo |

## Contenido

```
wokwi/
├── README.md              # Este archivo
├── diagram.json           # Circuito del nodo (Wokwi)
├── rfid-rc522.chip.json   # Chip personalizado: pines del lector RC522
├── rfid-rc522.chip.c      # Chip personalizado: stub (solo representa el módulo)
├── docs/pinout.md         # Mapa de pines y decisiones de cableado para el informe
├── wokwi.toml             # (pendiente) Configuración del proyecto Wokwi
├── firmware/              # (pendiente) Código del ESP32
└── docs/                  # (pendiente) Capturas del circuito y fotos del montaje físico
```

## Cómo abrirlo en Wokwi

1. En https://wokwi.com crear un proyecto **ESP32** nuevo.
2. Reemplazar el contenido de `diagram.json` con el de este repositorio.
3. Agregar los archivos `rfid-rc522.chip.json` y `rfid-rc522.chip.c` al proyecto (Wokwi compila el chip al cargarlo).
4. Si algún cable no se dibuja bien, reacomodar las partes arrastrándolas; las posiciones del archivo son aproximadas.

## Notas

- El montaje final es físico; el diagrama documenta el mismo cableado para el informe.
- El enunciado indica Wokwi o Cirkit Designer para los diagramas de Device Design.
- El Edge Gateway (Flask, Peewee ORM, SQLite) se desarrolla aparte y se comunica con este nodo por MQTT local.
