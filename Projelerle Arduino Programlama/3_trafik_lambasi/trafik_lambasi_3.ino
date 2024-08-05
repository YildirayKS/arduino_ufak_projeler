void setup() {
  //arac
  pinMode(10, OUTPUT); //kirmizi icin cikis pini ayarlandi
  pinMode(9, OUTPUT); //sari icin cikis pini ayarlandi
  pinMode(8, OUTPUT); //yesil icin cikis pini ayarlandi
  //yaya
  pinMode(7, OUTPUT); //kirmizi icin cikis pini ayarlandi
  pinMode(6, OUTPUT); //yesil icin cikis pini ayarlandi
}

void loop() {
  //kirmizi isik
  //arac
  digitalWrite(10, HIGH); //kirmizi isik yandi
  digitalWrite(9, LOW); //sari isik sondu
  digitalWrite(8, LOW); //yesil isik sondu
  //yaya
  digitalWrite(7, LOW);  //kirmizi isik sondu
  digitalWrite(6, HIGH); //yesil isik yandi
  delay(5000);

  //yaya uyari
  digitalWrite(7, LOW);  //kirmizi isik sondu
  delay(500);
  digitalWrite(6, HIGH); //yesil isik yandi
  delay(500);
  digitalWrite(7, LOW);  //kirmizi isik sondu
  delay(500);
  digitalWrite(6, LOW); //yesil isik sondu
  delay(500);
  digitalWrite(6, HIGH); //yesil isik yandi
  delay(500);
  digitalWrite(6, LOW); //yesil isik sondu
  delay(500);
  digitalWrite(6, HIGH); //yesil isik yandi
  delay(500);

  //sari isik
  //arac
  digitalWrite(10, HIGH); //kirmizi isik yandi
  digitalWrite(9, HIGH);  //sari isik yandi
  //yaya
  digitalWrite(7, HIGH);  //kirmizi isik yandi
  digitalWrite(6, LOW); //yesil isik sondu
  delay(1000);

  //yesil isik
  //arac
  digitalWrite(10, LOW); //kirmizi isik sondu
  digitalWrite(9, LOW); //sari isik sondu
  digitalWrite(8, HIGH); //yesil isik yandi
  //yaya
  digitalWrite(7, HIGH);  //kirmizi isik yandi
  digitalWrite(6, LOW); //yesil isik sondu
  delay(5000);

  //arac uyari
  digitalWrite(10, LOW); //kirmizi isik sondu
  digitalWrite(9, LOW); //sari isik sondu
  digitalWrite(8, HIGH); //yesil isik yandi
  delay(500);
  digitalWrite(8, LOW); //yesil isik sondu
  delay(500);
  digitalWrite(8, HIGH); //yesil isik yandi
  delay(500);
  digitalWrite(8, LOW); //yesil isik sondu
  delay(500);
  digitalWrite(8, HIGH); //yesil isik yandi
  delay(500);
}
