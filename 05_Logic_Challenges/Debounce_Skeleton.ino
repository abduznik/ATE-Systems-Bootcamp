/*
 * Debounce Skeleton
 * Task: Implement software debounce for a button without using delay().
 */

const int BUTTON_PIN = 4;
const unsigned long DEBOUNCE_DELAY = 50; // ms

int lastButtonState = LOW;
unsigned long lastDebounceTime = 0;

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.begin(115200);
}

void loop() {
  int reading = digitalRead(BUTTON_PIN);

  // TODO: Implement logic to update 'buttonState' only after DEBOUNCE_DELAY
  // Use lastDebounceTime and millis()
  
  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  // TODO: Add code to trigger an event on button press
  
  lastButtonState = reading;
}
