int _potPen = A0;
int _ledPin = 9;
int _readValue;
int _outputValue = 0;
int _blink = 0;


void setup() {
  pinMode(_potPen, INPUT);
  pinMode(_ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  _readValue = analogRead(_potPen);

  Serial.println(_readValue);
  if( _blink == 0)
  { 
    analogWrite(_ledPin, 255);
    _blink = 255;
  }
  else
  {
    analogWrite(_ledPin, 0);
    _blink = 0;
  }
  
  delay(_readValue);  

}
