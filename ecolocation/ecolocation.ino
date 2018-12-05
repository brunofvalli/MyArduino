#include <TimerOne.h>
int yellowPin = 9;
int redPin = 10;

bool yellowOn = false;

void setup(){
    pinMode(redPin, OUTPUT);
    pinMode(yellowPin, OUTPUT);
    // how long before we run
    Timer1.initialize(10000000);
    Timer1.attached(BlinkYellow);
}

void BlinkYellow()
{
    if( yellowOn )
    {
        digitalWrite(yellowPin, HIGH);
    }
    else    
    {
        digitalWrite(yellowPin, LOW);
    }
    yellowOn = !yellowOn;

    return;
}

void loop(){
    digitalWrite(redPin, HIGH);
    delay(1000);
    digitalWrite(redPin, LOW);
    delay(1000);
}
