const int red=9;
const int green=10;
const int blue=11;

const int sure=1000;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  digitalWrite(red, LOW);
  delay(sure);
  digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  delay(sure);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  delay(sure);
  digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  delay(sure);
  digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
}

