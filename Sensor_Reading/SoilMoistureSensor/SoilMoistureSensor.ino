// from https://create.arduino.cc/projecthub/electropeak/complete-guide-to-use-soil-moisture-sensor-w-examples-756b1f

/*
 * 0-300 means dry
 * 300-600 means moist
 * 600-950 means the big wet
 */
#define MoistureSensorPin A0
float MoistureSensorValue = 0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int i = 0; i <= 100; i++)
  {
    MoistureSensorValue = MoistureSensorValue + analogRead(MoistureSensorPin);
    delay(1);
  }
  MoistureSensorValue = MoistureSensorValue/100.0;
  Serial.print("Moisture Level: ");
  Serial.println(MoistureSensorValue);
  delay(30);
}
