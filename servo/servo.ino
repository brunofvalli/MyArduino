#include <Servo.h>
int _pos = 0;
int _servoPin = 9;
int _servoDelay = 25;
int _pot = A0;

Servo _servo;

void setup() {
  Serial.begin(9600);
  _servo.attach(_servoPin);
  // pinMode()
}

void loop() {
  Serial.println("Where should we go:");
  while(Serial.available() == 0) {}

  _pos = Serial.parseInt();

  _servo.write(_pos);
}