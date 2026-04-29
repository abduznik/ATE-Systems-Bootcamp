/*
 * Project: ATE Bootcamp - Debounce Challenge
 * Goal: Read a button without delay() and handle contact bouncing
 */

const int BUTTON_PIN = 4;
int lastButtonState = LOW;
int stableButtonState = LOW;

unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50; // 50ms

void setup() {
  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.println("Debounce Monitor Ready.");
}

void loop() {
  int reading = digitalRead(BUTTON_PIN);

  // TODO: Implement non-blocking debounce logic
  // 1. If reading changed, reset the debounce timer
  // 2. If enough time passed (debounceDelay), accept the new state
  // 3. If state transitioned from HIGH to LOW, count as a "Press"

  if (reading != lastButtonState) {
    // Timer reset logic here
  }

  lastButtonState = reading;
}
