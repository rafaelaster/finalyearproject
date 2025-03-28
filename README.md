
# Server Room Temperature Control and Monitoring System using Arduino Uno R4 WiFi

![Project Banner](https://via.placeholder.com/800x200.png?text=Server+Room+Temperature+Control+System)

A smart system to monitor and control server room temperature using Arduino Uno R4 WiFi. This project automates cooling with a DC fan based on real-time temperature data from a DHT22 sensor, with cloud integration for remote monitoring.

## Features
- 🌡️ Real-time temperature/humidity monitoring via DHT22
- 🌀 PWM-controlled 12V DC fan for precise cooling
- 🎛️ Adjustable temperature threshold via potentiometer
- ☁️ Arduino IoT Cloud dashboard for remote access
- 📈 Historical data logging
- 🔧 Fail-safe manual override

## Components
| Component | Quantity |
|-----------|----------|
| Arduino Uno R4 WiFi | 1 |
| DHT22 Temperature/Humidity Sensor | 1 |
| L298N Motor Driver | 1 |
| 12V DC Fan (40-120mm) | 1 |
| 10KΩ Potentiometer | 1 |
| Jumper Wires | 15 |
| 12V Power Supply | 1 |
| Breadboard | 1 |

## Installation & Setup

### 1. Software Requirements
```python
# requirements.txt
ArduinoIoTCloud
Arduino_ConnectionHandler
DHTesp
Wire
