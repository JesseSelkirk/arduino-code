const int kRedLED = 8;
const int kButton = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(kRedLED, OUTPUT);
  pinMode(kButton, INPUT);
  digitalWrite(kButton, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(kButton) == LOW) {
    tone(kRedLED, 800);
  }
  else{
    digitalWrite(kRedLED, LOW);
  }
}
