#include <Stepper.h>

int _in1Pin = 2;
int _in2Pin = 3;
int _in3Pin = 4;
int _in4Pin = 5;

const int _stepsPerRevolution = 200;
const int _stepsPerRevolutionBack = -200;

Stepper _stepper(_stepsPerRevolution, _in1Pin, _in2Pin, _in3Pin, _in4Pin);

void setup(){
    _stepper.setSpeed(60);
}

void loop(){
    _stepper.step(_stepsPerRevolution);
    //delay(500);

    _stepper.step(_stepsPerRevolutionBack);
    //delay(500);
}