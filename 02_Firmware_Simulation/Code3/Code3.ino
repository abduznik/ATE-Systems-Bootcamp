// Sets the physical pin for the LED (always pin 2 on ESP32).
constexpr uint8_t LED_PIN = 2; 

// 1000ms interval (1 second) for the blink rate.
constexpr uint32_t INTERVAL = 1000; 

// Stores the last time the LED state changed.
uint32_t previousMillis = 0; 

// Tracks if the LED is ON (true) or OFF (false). Initial state is off.
bool ledState = false; 

// Runs once when the board turns on or resets.
void setup() {
  // Starts serial communication at 115200 Baud for fast text output.
  Serial.begin(115200); 
  
  // Sets pin 2 as output to power the LED.
  pinMode(LED_PIN, OUTPUT); 
  
  // Confirms on screen that the setup is done and starting.
  Serial.println("System Initialized. Starting simulation..."); 
}

// Main program loop, runs continuously.
void loop() {
  // Saves total milliseconds passed since the board started.
  const uint32_t currentMillis = millis(); 

  // Check if 1 second has passed since the last toggle.
  if (currentMillis - previousMillis >= INTERVAL) {
    
    // Moves the timer forward by 1 second for perfect timing.
    previousMillis += INTERVAL; 

    // Toggles the LED state (on -> off or off -> on).
    ledState = !ledState; 
    
    // Sends the new state (voltage/no voltage) to the pin.
    digitalWrite(LED_PIN, ledState); 

    // Prints the time label without a new line.
    Serial.print("System Time: "); 
    
    // Divide by 1000 to print the time in seconds.
    Serial.print(currentMillis / 1000); 
    
    // Prints " seconds" and drops to a new line.
    Serial.println(" seconds"); 
  }
}
