#include <Arduino.h>

const int BUTTON_PIN = 4;
const unsigned long DEBOUNCE_DELAY = 50; 

int buttonState = HIGH;         
int lastButtonState = HIGH;     
unsigned long lastDebounceTime = 0;

void setup() {
  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.println("Debounce Filter Active.");
}

void loop() {
  int reading = digitalRead(BUTTON_PIN);

  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > DEBOUNCE_DELAY) {
    if (reading != buttonState) {
      buttonState = reading;

      if (buttonState == LOW) {
        Serial.println("Button Event: STABLE PRESS (LOW)");
      } else {
        Serial.println("Button Event: STABLE RELEASE (HIGH)");
      }
    }
  }

  lastButtonState = reading;
}

