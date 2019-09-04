const int kRedLED = 8;
const int kBlueLED = 9;
const int kWhiteLED = 10;

void setup()
{
  pinMode(kRedLED, OUTPUT);
  pinMode(kBlueLED, OUTPUT);
  pinMode(kWhiteLED, OUTPUT); 
}


void loop()
{
  digitalWrite(kRedLED, HIGH);
  delay(500);
  digitalWrite(kBlueLED, HIGH);
  delay(500);
  digitalWrite(kWhiteLED, HIGH);
  delay(500);
  digitalWrite(kRedLED, LOW);
  digitalWrite(kBlueLED, LOW);
  digitalWrite(kWhiteLED, LOW);
  delay(700); 
}
