/*
 * Project: Blink and Serial Heartbeat
 * Description: Non-blocking LED blink and Serial message output.
 * Target: ESP32 / Arduino Generic
 * Rule: NO DELAY() ALLOWED.
 */

const int LED_PIN = 2;    // Built-in LED on most ESP32 boards. Which always be pin number 2.
const unsigned long INTERVAL = 1000;    // a constant 1000msec (i.e. 1 second) interval when the program runs.

unsigned long lastUpdate = 0;   // Updates the last change of the led.
bool ledState = false;   // The led is off.

void setup() {    // The setup of the program when the board is turning on.
  pinMode(LED_PIN, OUTPUT);   // Pin number 2 will give voltage so led will turn on.
  Serial.begin(115200);   // The given Baud Rate for the program, which gives us a smooth result.
  Serial.println("ATE Bootcamp: Firmware Simulation Started.");   // The end of the setup.
}

void loop() { // The start of the main program, which is runnig in a loop.
  unsigned long currentMillis = millis(); // Saves the milli-seconds since the board started.

  // Task: Toggle LED and print heartbeat every 1 second
  if (currentMillis - lastUpdate >= INTERVAL) { // Did a second pass.
    lastUpdate = currentMillis; // Saves the current time. 
    
    ledState = !ledState; // Changes the led's state (led is on -> off or off -> on)
    digitalWrite(LED_PIN, ledState); // Telling to the board the new state of the led.
    // Prints a text of the current status of time, how many seconds had passed.
    Serial.print("Heartbeat - System Time: ");
    Serial.print(currentMillis / 1000); // A divide so we get a number in "seconds".
    Serial.println("s"); // an "s" that marks that the is in seconds
  }
}