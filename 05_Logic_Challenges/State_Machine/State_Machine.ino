#include <Arduino.h>

enum SystemState {
  IDLE,
  TESTING,
  RESULT
};

SystemState currentState = IDLE;
unsigned long stateStartTime = 0;

const int BUTTON_PIN = 4;       
const int SENSOR_PIN = 32;      

bool testPassed = false;
int maxSensorValue = 0;

void setup() {
  Serial.begin(115200);
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  Serial.println("System Initialized. Current State: IDLE.");
}

void loop() {
  unsigned long currentMillis = millis();

  bool serialTrigger = false;
  if (Serial.available() > 0) {
    char cmd = Serial.read();
    if (cmd == 'S' || cmd == 's') {
      serialTrigger = true;
    }
  }

  bool buttonTrigger = (digitalRead(BUTTON_PIN) == LOW);

  switch (currentState) {
    case IDLE:
      if (serialTrigger || buttonTrigger) {
        currentState = TESTING;
        stateStartTime = currentMillis;
        maxSensorValue = 0;
        Serial.println("\n>>> Status: TESTING STARTED");
      }
      break;

    case TESTING:
      {
        int currentSample = analogRead(SENSOR_PIN);
        if (currentSample > maxSensorValue) {
          maxSensorValue = currentSample;
        }
      }

      if (currentMillis - stateStartTime >= 3000) {
        testPassed = (maxSensorValue > 2000); 
        currentState = RESULT;
        stateStartTime = currentMillis;
        Serial.println(">>> Status: TESTING FINISHED");
      }
      break;

    case RESULT:
      if (currentMillis - stateStartTime < 10) {
        Serial.print("RESULT: ");
        Serial.println(testPassed ? "PASS" : "FAIL");
        Serial.print("Max Value: ");
        Serial.println(maxSensorValue);
      }

      if (currentMillis - stateStartTime >= 2000) {
        currentState = IDLE;
        Serial.println("\nSystem IDLE. Ready for next test.");
      }
      break;
  }
}
