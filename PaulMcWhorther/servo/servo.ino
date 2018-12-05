#include <Servo.h>
int pos = 0;
int servoPin = 9;
int servoDelay = 25;

Servo myPointer;

void setup() {
  myPointer.attach(servoPin);
}

void loop() {
  myPointer.write(90);
  delay(1000);
  myPointer.write(0);
  delay(1000);

}