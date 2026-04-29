/*
 * Project: ATE Bootcamp - State Machine Challenge
 * Goal: Implement a 3-state system without using delay()
 * States: IDLE, TESTING, ERROR
 */

enum SystemState {
  STATE_IDLE,
  STATE_TESTING,
  STATE_ERROR
};

SystemState currentState = STATE_IDLE;
unsigned long previousMillis = 0;
const long testDuration = 5000; // 5 seconds

void setup() {
  Serial.begin(115200);
  Serial.println("System Initialized. State: IDLE");
  Serial.println("Send 's' to start test, 'e' to trigger error, 'r' to reset.");
}

void loop() {
  // Check for serial input
  if (Serial.available() > 0) {
    char input = Serial.read();
    handleInput(input);
  }

  // State Logic
  switch (currentState) {
    case STATE_IDLE:
      // Waiting for start command
      break;

    case STATE_TESTING:
      // TODO: Implement non-blocking timer to finish test after testDuration
      // Hint: Use millis() and previousMillis
      break;

    case STATE_ERROR:
      // System locked until reset
      break;
  }
}

void handleInput(char c) {
  if (c == 's' && currentState == STATE_IDLE) {
    currentState = STATE_TESTING;
    previousMillis = millis();
    Serial.println("Transition: IDLE -> TESTING");
  } else if (c == 'e') {
    currentState = STATE_ERROR;
    Serial.println("Transition: -> ERROR");
  } else if (c == 'r') {
    currentState = STATE_IDLE;
    Serial.println("Transition: -> IDLE (Reset)");
  }
}
