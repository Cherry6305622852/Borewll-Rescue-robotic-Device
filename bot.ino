#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <NewPing.h>

char auth[] = "YourAuthToken";       // Replace with Blynk Auth Token
char ssid[] = "YourWiFiSSID";        // Replace with your Wi-Fi SSID
char pass[] = "YourWiFiPassword";    // Replace with your Wi-Fi Password

#define TRIG_PIN 5
#define ECHO_PIN 18
#define MAX_DISTANCE 200

NewPing sonar(TRIG_PIN, ECHO_PIN, MAX_DISTANCE);

BlynkTimer timer;

void sendSensor() {
  int distance = sonar.ping_cm();
  Blynk.virtualWrite(V0, distance);
}

void setup() {
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
  timer.setInterval(1000L, sendSensor);
}

void loop() {
  Blynk.run();
  timer.run();
}
