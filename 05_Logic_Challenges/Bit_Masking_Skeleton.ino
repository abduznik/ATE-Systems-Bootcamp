/*
 * Bit Masking & Register Control Skeleton
 * 
 * Objective: Control ESP32 GPIOs using direct register manipulation for speed.
 */

// Note: For ESP32, we use GPIO_OUT_REG, GPIO_OUT_W1TS_REG (Set), GPIO_OUT_W1TC_REG (Clear)
// These are defined in the ESP-IDF / Arduino core.

void setup() {
  // TODO: Set GPIO 2 (LED) as output using BIT MASKING
  // Using standard pinMode for setup is okay, but use registers for loop.
  pinMode(2, OUTPUT);
}

void loop() {
  // TODO: Toggle GPIO 2 using XOR or specific Set/Clear registers
  
  // Example (Conceptual):
  // REG_WRITE(GPIO_OUT_W1TS_REG, (1 << 2)); // SET HIGH
  // REG_WRITE(GPIO_OUT_W1TC_REG, (1 << 2)); // SET LOW
  
  // TODO: Implement a mask to check the state of multiple pins at once
}
