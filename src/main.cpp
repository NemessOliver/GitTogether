#include <Arduino.h>

// put function declarations here:
void blink();

void setup() {
  // put your setup code here, to run once:
}


void loop() {
  int OP;

  do {
    printf("Enter 1 or 2 for the operation: /n");
    scanf("%d", &OP);
  } while (OP > 2 || OP < 1);

    if (OP == 1) {
    return;
  }
  else {
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