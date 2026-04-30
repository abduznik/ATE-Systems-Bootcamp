/*
 * State Machine Skeleton
 * Task: Implement a 3-state system using millis() for state transitions.
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
  switch (currentState) {
    case IDLE:
      // TODO: Transition to TESTING if a condition is met
      break;

    case TESTING:
      // TODO: Run test for 5 seconds using millis()
      // TODO: Transition to RESULT when time is up
      break;

    case RESULT:
      // TODO: Display Pass/Fail for 2 seconds
      // TODO: Transition back to IDLE
      break;
  }
}
