/*
 * Project: Blink and Serial Heartbeat
 * Description: Non-blocking LED blink and Serial message output.
 * Target: ESP32 / Arduino Generic
 * Rule: NO DELAY() ALLOWED.
 */

const int LED_PIN = 2; // Built-in LED on most ESP32 boards
const unsigned long INTERVAL = 1000; // 1 second

unsigned long lastUpdate = 0;
bool ledState = false;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(115200);
  Serial.println("ATE Bootcamp: Firmware Simulation Started.");
}

void loop() {
  unsigned long currentMillis = millis();

  // Task: Toggle LED and print heartbeat every 1 second
  if (currentMillis - lastUpdate >= INTERVAL) {
    lastUpdate = currentMillis;
    
    ledState = !ledState;
    digitalWrite(LED_PIN, ledState);
    
    Serial.print("Heartbeat - System Time: ");
    Serial.print(currentMillis / 1000);
    Serial.println("s");
  }

  // Other tasks can run here without being blocked
}
