#include <Arduino.h>
#include "soc/gpio_struct.h"

#define LED_PIN_MASK (1ULL << 2)   
#define INPUT_PINS_MASK ((1ULL << 4) | (1ULL << 12) | (1ULL << 14)) 

void setup() {
  Serial.begin(115200);
  
  pinMode(2, OUTPUT);
  pinMode(4, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  
  Serial.println("Register Control Active.");
}

void loop() {
  GPIO.out_w1ts = LED_PIN_MASK;
  
  uint32_t count = 0;
  while(count++ < 1000000);

  GPIO.out_w1tc = LED_PIN_MASK;
  
  count = 0;
  while(count++ < 1000000);

  uint64_t registerRead = (GPIO.in & INPUT_PINS_MASK);
  
  if (registerRead == 0) {
    // Handle all pins LOW event
  }
}
