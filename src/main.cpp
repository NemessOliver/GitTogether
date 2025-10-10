#include <Arduino.h>

// put function declarations here:
void blink();

void setup() {
  Serial.begin(9600);
  delay(1000);
}


void loop() {
  int OP;

  do {
    Serial.println("Enter 1 or 2 for the operation:");
    while (Serial.available() == 0) {
    }
    OP = Serial.parseInt();
  } while (OP > 2 || OP < 1);

  if (OP == 1) {
    return;
  } else {
    return;
  }
}


// turn the built-in LED on for 1s, then off for 1s
void blink() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}
