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

## Contenido previsto

```
wokwi/
├── README.md        # Este archivo
├── diagram.json     # Circuito del nodo (Wokwi / Cirkit Designer)
├── wokwi.toml       # Configuración del proyecto Wokwi
├── firmware/        # Código del ESP32
└── docs/            # Imágenes exportadas del circuito y fotos del montaje físico para el informe
```

## Notas

- El montaje final es físico; el diagrama documenta el mismo cableado para el informe.
- El enunciado indica Wokwi o Cirkit Designer para los diagramas de Device Design.
- El Edge Gateway (Flask, Peewee ORM, SQLite) se desarrolla aparte y se comunica con este nodo por MQTT local.
