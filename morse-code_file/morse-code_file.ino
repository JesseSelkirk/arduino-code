const int kRedLED = 8;
const int kButton = 5;
const int kFreq = 1000;
const int kUnit = 100;

void setup() {
  // put your setup code here, to run once:
  pinMode(kRedLED, OUTPUT);
  pinMode(kButton, INPUT);
  digitalWrite(kButton, HIGH);
}

void dit() {
  tone(kRedLED, kFreq);
  delay(kUnit);
  noTone(kRedLED);
  delay(kRedLED);
}

void dah() {
  tone(kRedLED, kFreq);
  delay(kUnit*3);
  noTone(kRedLED);
  delay(kRedLED);
}

void nLet() {
  // delay between each letter, the functions for dits and dahs include the first delay so only 2 are needed here
  delay(kUnit*2);
}

void nWrd() {
  // delay between each word, the functions for dits and dahs include the first delay so only 6 are needed here
  delay(kUnit*6);
}

void hello() {
  
  dit();
  dit();
  dit();
  dit();
  nLet();
  dit();
  nLet();
  dit();
  dah();
  dit();
  dit();
  nLet();
  dit();
  dah();
  dit();
  dit();
  nLet();
  dah();
  dah();
  dah();
}

void fraser() {
  dit();
  dit();
  dah();
  dit();
  nLet();
  dit();
  dah();
  dit();
  nLet();
  dit();
  dah();
  nLet();
  dit();
  dit();
  dit();
  nLet();
  dit();
  nLet();
  dit();
  dah();
  dit();
}

void loop() {

  hello();
  nWrd();
  fraser();
  nWrd();
  nWrd();
  /*
  tone(kRedLED, 600, 75);
  delay(900);
  */
  /*
  if(digitalRead(kButton) == LOW) {
    tone(kRedLED, 800);
  }
  else{
    digitalWrite(kRedLED, LOW);
  }
  */
}
