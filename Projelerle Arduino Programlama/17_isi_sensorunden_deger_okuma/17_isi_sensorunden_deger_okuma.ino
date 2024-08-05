int sensorPin=A0;
int sensorDeger=0;
float gerilim=0
float sicaklik=0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorDeger=analogRead(sensorPin);
  gerilim=(sensorDeger/1024.0) * 5000.0; 
  sicaklik=gerilim/10.0;
  Serial.println(sicaklik);
}