const int kRedLED = 8;
const int kButton = 5;
const int kFreq = 800;
const int kUnit = 110;

void setup() {
  // put your setup code here, to run once:
  pinMode(kRedLED, OUTPUT);
  pinMode(kButton, INPUT);
  digitalWrite(kButton, HIGH);
  Serial.begin(9600);
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
  Serial.print("H");
  nLet();
  dit();
  Serial.print("E");
  nLet();
  dit();
  dah();
  dit();
  dit();
  Serial.print("L");
  nLet();
  dit();
  dah();
  dit();
  dit();
  Serial.print("L");
  nLet();
  dah();
  dah();
  dah();
  Serial.print("O");
}

void fraser() {
  dit();
  dit();
  dah();
  dit();
  Serial.print("F");
  nLet();
  dit();
  dah();
  dit();
  Serial.print("R");
  nLet();
  dit();
  dah();
  Serial.print("A");
  nLet();
  dit();
  dit();
  dit();
  Serial.print("S");
  nLet();
  dit();
  Serial.print("E");
  nLet();
  dit();
  dah();
  dit();
  Serial.print("R");
}

void loop() {

  hello();
  Serial.print(" ");
  nWrd();
  fraser();
  Serial.println(" ");
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
