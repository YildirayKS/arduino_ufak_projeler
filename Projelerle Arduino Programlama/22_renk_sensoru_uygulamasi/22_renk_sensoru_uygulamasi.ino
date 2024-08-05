#define s0 8
#define s1 9
#define s2 10
#define s3 11
#define sensorPin 12

int kirmizi, yesil, mavi=0;

void setup() {
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(sensorPin, INPUT);

  digitalWrite(s0, HIGH);
  digitalWrite(s1, LOW);
  Serial.begin(9600);
}

void loop() {
  //Kırmızı filtre
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  kirmizi=pulseIn(sensorPin, LOW);
  Serial.print("Kırmızı: ");
  Serial.print(kirmizi);
  Serial.Print("\t");
  delay(100);

  //Yeşil filtre
  digitalWrite(s2, HIGH);
  digitalWrite(s3, HIGH);
  yesil=pulseIn(sensorPin, LOW);
  Serial.print("Yeşil: ");
  Serial.print(yesil);
  Serial.Print("\t");
  delay(100);

  //Mavi filtre
  digitalWrite(s2, LOW);
  digitalWrite(s3, HIGH);
  mavi=pulseIn(sensorPin, LOW);
  Serial.print("Mavi: ");
  Serial.print(mavi);
  Serial.Println("\t");
  delay(100);
}
