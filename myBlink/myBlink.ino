const int kBuiltinLED = 13;

void setup()
{
  pinMode(kBuiltinLED, OUTPUT);
  Serial.begin(9600); // send and receive at 9600 bits per second (baud)
}

float myDelay = 20000;

void loop()
{
  myDelay = myDelay/2;
  Serial.print("delay is now ");
  Serial.println(myDelay);
  if(myDelay <= 0.00) {
    Serial.println("Delay is too low, resetting.");
    myDelay = 1000;
    delay(1500);
  }
  digitalWrite(kBuiltinLED, HIGH);
  delay(myDelay);
  digitalWrite(kBuiltinLED, LOW);
  delay(myDelay);
}
