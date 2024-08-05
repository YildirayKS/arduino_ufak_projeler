const int analogGiris=A0;

void setup() {
  pinMode(analogGiris, INPUT);
  Serial.begin(9600); 
}

void loop() {
  int deger=analogRead(analogGiris);
  Serial.print("Değer: ");
  Serial.println(deger);
  delay(1000);
}










//0 la 1023 arasında herhangi bir değer alır

//seri haberleşme başlatıldı. Seri port ekranından değer okunmaya başlanır. 9600 olan kısım bps yani haberleşme hızı