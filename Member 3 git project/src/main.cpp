#include <Arduino.h>

int num1 = 0;
int num2 = 0;
bool firstNumberEntered = false;
bool secondNumberEntered = false;

void setup() {
    Serial.begin(9600);   // Start serial communication
    delay(1000);          // Give Serial Monitor time to open
    Serial.println("Enter first number:");
}

void loop() {
    // If data is available in Serial Monitor
    if (Serial.available() > 0) {
        int value = Serial.parseInt();  // Read integer from Serial

        if (!firstNumberEntered) {
            num1 = value;
            firstNumberEntered = true;
            Serial.print("First number received: ");
            Serial.println(num1);
            Serial.println("Enter second number:");
        }
        else if (!secondNumberEntered) {
            num2 = value;
            secondNumberEntered = true;
            Serial.print("Second number received: ");
            Serial.println(num2);

            int sum = num1 + num2;
            Serial.print("The sum is: ");
            Serial.println(sum);

            // Reset so you can enter again
            firstNumberEntered = false;
            secondNumberEntered = false;
            Serial.println("\nEnter first number:");
        }
    }
}
