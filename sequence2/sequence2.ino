const int kRedLED = 8;
const int kBlueLED = 9;
const int kWhiteLED = 10;
const int kOrangeLED = 11;
const int kYellowLED = 12;
const int kGreenLED = 13;
const int Delay = 410;
void setup()
{
  pinMode(kRedLED, OUTPUT);
  pinMode(kBlueLED, OUTPUT);
  pinMode(kWhiteLED, OUTPUT);
  pinMode(kOrangeLED, OUTPUT);
  pinMode(kYellowLED, OUTPUT);
  pinMode(kGreenLED, OUTPUT);
}


void loop()
{
  digitalWrite(kRedLED, HIGH);
  delay(Delay);
  digitalWrite(kBlueLED, HIGH);
  digitalWrite(kRedLED, LOW);
  delay(Delay);
  digitalWrite(kWhiteLED, HIGH);
  digitalWrite(kBlueLED, LOW);
  delay(Delay);
  digitalWrite(kWhiteLED, LOW);
  digitalWrite(kOrangeLED, HIGH);
  delay(Delay);
  digitalWrite(kOrangeLED, LOW);
  digitalWrite(kYellowLED, HIGH);
  delay(Delay);
  digitalWrite(kGreenLED, HIGH);
  digitalWrite(kYellowLED, LOW);
  delay(Delay);
  digitalWrite(kGreenLED, LOW);
}
