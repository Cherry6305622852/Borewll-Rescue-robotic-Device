# Borewell Rescue Robotic Device

A modular robotic system designed to rescue individuals trapped in borewells, equipped with live video streaming, ultrasonic sensors, and a servo-controlled robotic arm using ESP32-CAM and IoT integration via Blynk.

## Features
- Real-time video monitoring via ESP32-CAM
- Ultrasonic distance measurement
- Remote control through Blynk IoT app
- Servo-operated robotic arm
- Portable, low-cost, and scalable design

## Components Used
- ESP32-CAM
- Ultrasonic Sensor (HC-SR04)
- L298N Motor Driver
- Servo Motors
- DC Motors
- Li-ion Battery Pack

## Tools & Platforms
- Arduino IDE
- Blynk 2.0
- Firebase (optional)
- MQTT (optional)

## How to Run
1. Upload the Arduino code from `firmware/esp32_blynk_sensor.ino`.
2. Configure Blynk app (see `app/blynk_setup_instructions.txt`).
3. Connect to Wi-Fi.
4. View sensor data and control from your phone.

## Folder Structure
- `firmware/`: Arduino code for ESP32
- `documentation/`: Project reports
- `app/`: Blynk configuration
- `hardware/`: Optional diagrams or models
- `images/`: Optional photos of prototype

## License
MIT License
