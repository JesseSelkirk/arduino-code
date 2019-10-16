#define sensorPin A5 
#define ledPin 13 
int sensorValue = 0; 
void setup() {
pinMode(ledPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  if (sensorValue > 500 )
  {
    digitalWrite(ledPin, HIGH);
  }
  else 
  {
    digitalWrite(ledPin, LOW);
  }
  Serial.println(sensorValue, DEC);
}
