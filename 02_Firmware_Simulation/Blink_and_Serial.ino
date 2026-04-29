/*
 * Module 02: Firmware Simulation
 * Blink and Serial Communication Challenge
 */

const int LED_PIN = 2; // Default onboard LED for many ESP32 boards

void setup() {
  // Initialize Serial monitor at 115200 baud
  Serial.begin(115200);
  
  // Initialize LED pin as an output
  pinMode(LED_PIN, OUTPUT);
  
  Serial.println("System Ready. Challenge: Modify the code to blink ONLY when 'A' is received.");
}

void loop() {
  /* 
   * CHALLENGE:
   * Currently, the LED blinks continuously.
   * Modify this loop so that the LED blinks once ONLY if 
   * the character 'A' is received via Serial.read().
   */
  
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
