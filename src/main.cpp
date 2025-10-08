#include <Arduino.h>

// put function declarations here:
void blink();

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}

// Turn the built-in LED on for 1 s, then off for 1 s.
void blink() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}