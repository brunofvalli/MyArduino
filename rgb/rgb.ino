int _potPen = A0;
int _ledRedPin = 9;
int _ledGreenPin = 10;
int _ledBluePin = 11;
int _ledRedBrightness = 0;
int _ledGreenBrightness = 125;
int _ledBlueBrightness = 255;

bool _ledRedHit = false;
bool _ledGreenHit = false;
bool _ledBlueHit = false;

int _blink = 0;


void setup() {
  pinMode(_ledRedPin, OUTPUT);
  pinMode(_ledGreenPin, OUTPUT);
  pinMode(_ledBluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {

  if( _ledRedHit )
  {
    _ledRedBrightness--;
  }
  else
  { 
    _ledRedBrightness++;
  }

  if( _ledRedBrightness > 255 )
  {
    _ledRedHit = !_ledRedHit;
    _ledRedBrightness = 254;
  }
  else if( _ledRedBrightness < 0 )
  {
    _ledRedHit = !_ledRedHit;
    _ledRedBrightness = 1;
  }


  /// Green
  if( _ledGreenHit )
  {
    _ledGreenBrightness--;
  }
  else
  { 
    _ledGreenBrightness++;
  }

  if( _ledGreenBrightness > 255 )
  {
    _ledGreenHit = !_ledGreenHit;
    _ledGreenBrightness = 254;
  }
  else if( _ledGreenBrightness < 0 )
  {
    _ledGreenHit = !_ledGreenHit;
    _ledGreenBrightness = 1;
  }


  /// blue
  if( _ledBlueHit )
  {
    _ledBlueBrightness--;
  }
  else
  { 
    _ledBlueBrightness++;
  }

  if( _ledBlueBrightness > 255 )
  {
    _ledBlueHit = !_ledBlueHit;
    _ledBlueBrightness = 254;
  }
  else if( _ledBlueBrightness < 0 )
  {
    _ledBlueHit = !_ledBlueHit;
    _ledBlueBrightness = 1;
  }
  

  delay(10);
  
  analogWrite(_ledRedPin, _ledRedBrightness);
  analogWrite(_ledGreenPin, _ledGreenBrightness);
  analogWrite(_ledBluePin, _ledBlueBrightness);
}
