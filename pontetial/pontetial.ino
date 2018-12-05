int _potPen = A0;
int _ledPin = 9;
int _readValue;
float _voltage;
int _outputValue = 0;


void setup() {
  pinMode(_potPen, INPUT);
  pinMode(_ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  _readValue = analogRead(_potPen);
  _voltage = (5./1023.)*_readValue;
  Serial.println(_voltage);

  _outputValue = (255./1023.)*_readValue;
  analogWrite(_ledPin, _outputValue);
  
  delay(250);  

}
