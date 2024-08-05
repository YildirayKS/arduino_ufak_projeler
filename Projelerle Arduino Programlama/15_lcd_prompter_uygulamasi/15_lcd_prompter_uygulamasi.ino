#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C ekran(0x27,16,2);

void setup() {
  ekran.init();
  ekran.backlight();
}

void loop() {
  int analogDeger=analogDeger(A0);
  int deger=map(analogDeger, 0, 1023, 0, 4);

  switch(deger){
    case 0:
    ekran.clear();
    ekran.setCursor(3, 0);
    ekran.print("Merhabalar");
    ekran.setCursor(3, 1);
    ekran.print("arkadaşlar!");
    delay(100);
    break;

    case 1:
    ekran.clear();
    ekran.setCursor(3, 0);
    ekran.print("Arduino ile");
    ekran.setCursor(3, 1);
    ekran.print("projeler");
    delay(100);
    break;

    case 2:
    ekran.clear();
    ekran.setCursor(3, 0);
    ekran.print("egitimine");
    ekran.setCursor(3, 1);
    ekran.print("hosgeldiniz.");
    delay(100);
    break;

    case 3:
    ekran.clear();
    ekran.setCursor(3, 0);
    ekran.print("Benim adim");
    ekran.setCursor(3, 1);
    ekran.print("Yildiray");
    delay(100);
    break;
  }
}



