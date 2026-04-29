/*
 * Project: ATE Bootcamp - Bit Masking Challenge
 * Goal: Control a virtual "Register" using bit manipulation
 */

byte systemRegister = 0b00000000; // 8-bit register

// Bit definitions
const byte RELAY_1 = 0; // Bit 0
const byte RELAY_2 = 1; // Bit 1
const byte POWER_LED = 7; // Bit 7

void setup() {
  Serial.begin(115200);
  printRegister();
  Serial.println("Commands: '1' to Toggle Relay 1, '2' to Toggle Relay 2, 'L' to Toggle LED");
}

void loop() {
  if (Serial.available() > 0) {
    char input = Serial.read();
    
    // TODO: Implement bitwise operations to toggle specific bits
    // Use the bit() macro or (1 << bit)
    
    if (input == '1') {
      // systemRegister ^= (1 << RELAY_1);
      Serial.println("Toggling Relay 1...");
    }
    
    printRegister();
  }
}

void printRegister() {
  Serial.print("Current Register Status: 0b");
  for (int i = 7; i >= 0; i--) {
    Serial.print(bitRead(systemRegister, i));
  }
  Serial.println();
}
