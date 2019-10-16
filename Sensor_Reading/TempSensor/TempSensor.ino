/*const int TempSignal = 10;
#include <DallasTemperature.h>
DallasTemperature sensors(TempSignal);
float Celcius = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Hello!"); // makes sure serial is working
  pinMode(TempSignal, INPUT);
  sensors.begin();
}

void loop() {
  sensors.requestTemperatures();
  Celcius=sensors.getTempCByIndex(0);
  Serial.print("C: ");
  Serial.print(Celcius);
  Serial.print(" Raw: ");
  Serial.println(TempSignal);
  delay(500);
}
*/

#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 10

OneWire oneWire(ONE_WIRE_BUS);

DallasTemperature sensors(&oneWire);

 float Celcius=0;
 float Fahrenheit=0;
void setup(void)
{
  
  Serial.begin(9600);
  sensors.begin();
}

void loop(void)
{ 
  sensors.requestTemperatures(); 
  Celcius=sensors.getTempCByIndex(0);
  Serial.print(" C  ");
  Serial.println(Celcius);
  delay(500);
}
