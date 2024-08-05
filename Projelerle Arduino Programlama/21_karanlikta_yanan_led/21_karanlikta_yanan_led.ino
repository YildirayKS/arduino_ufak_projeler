const int ledPin=9;
const int LDRPin=A0;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int deger=analogRead(LDRPin);
  if(deger<30){
    digitalWrite(ledPin, HIGH);
  } 
  else
  {
    digitalWrite(ledPin, LOW);
  }
}

