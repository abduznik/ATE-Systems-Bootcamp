const int LED_PIN = 2;  // Built-in LED on most ESP32 boards. Which always be pin number 2.

unsigned long previousMillis = 0;  // Updates the last change of the led.
const long interval = 1000; // The led is off.

int ledState = LOW; // The current status of the led, the is off.

void setup() {  // The setup of the program when the board is turning on.
  Serial.begin(115200); // The given Baud Rate for the program, which gives us a smooth result.
  pinMode(LED_PIN, OUTPUT);  // Output of voltage so led will turn on.
  Serial.println("System Initialized. Starting simulation...");  // The end of the setup.
}

void loop() { // The start of the main program, which is runnig in a loop.
  unsigned long currentMillis = millis(); // Saves the milli-seconds since the board started.

  if (currentMillis - previousMillis >= interval) { // New time.
    previousMillis = currentMillis; // Saves the current time.

// Changes the led's state (on -> off and vice versa)
    if (ledState == LOW) { 
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    digitalWrite(LED_PIN, ledState); // The new state of the led.

// Print out the seconds.
    Serial.print("System Time: ");
    Serial.print(currentMillis / 1000);
    Serial.println(" seconds");
  }
}