/*
 * State Machine Skeleton
 * 
 * Objective: Implement a robust state machine for a testing sequence.
 * States: 
 *   - IDLE: Waiting for trigger.
 *   - TESTING: Running measurement for 3 seconds.
 *   - RESULT: Displaying outcome (PASS/FAIL).
 */

enum SystemState {
  IDLE,
  TESTING,
  RESULT
};

SystemState currentState = IDLE;
unsigned long stateStartTime = 0;

void setup() {
  Serial.begin(115200);
}

void loop() {
  unsigned long currentMillis = millis();

  switch (currentState) {
    case IDLE:
      // TODO: Check for Serial command or button press to start test
      // Serial.println("System IDLE. Send 'S' to Start.");
      break;

    case TESTING:
      // TODO: Measure sensor values using non-blocking timer
      // if (currentMillis - stateStartTime >= 3000) { transition... }
      break;

    case RESULT:
      // TODO: Display results for 2 seconds then return to IDLE
      break;
  }
}
