int sensorPin=9;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin, INPUT);
}

void loop() {
  int deger=digitalRead(sensorPin);
  if(deger==HIGH)
  {
    Serial.println("Etrafta Birileri Var!");
  }
  else
  {
    Serial.println("Etrafta Kimse Yok!");
  }
}