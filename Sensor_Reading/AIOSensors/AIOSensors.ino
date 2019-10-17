#define LightsensorPin A5 
int LightsensorValue = 0;
#include <DallasTemperature.h>
#define MoistureSensorPin A0
float MoistureSensorValue = 0;
#define ONE_WIRE_BUS 10

OneWire oneWire(ONE_WIRE_BUS);

DallasTemperature sensors(&oneWire);

float Celcius=0;
void setup() {
  Serial.begin(9600);
  sensors.begin();
  
}

void loop() {
  LightsensorValue = analogRead(LightsensorPin);
  Serial.print("Light Value: ");
  Serial.println(LightsensorValue, DEC);
  sensors.requestTemperatures();
  Celcius=sensors.getTempCByIndex(0);
  Serial.print("Celcius temp: ");
  Serial.println(Celcius);
  for (int i = 0; i <= 100; i++)
  {
    MoistureSensorValue = MoistureSensorValue + analogRead(MoistureSensorPin);
    delay(1);
  }
  MoistureSensorValue = MoistureSensorValue/100.0;
  Serial.print("Moisture Level: ");
  Serial.println(MoistureSensorValue);
  Serial.println("====================");
  delay(500);
}
