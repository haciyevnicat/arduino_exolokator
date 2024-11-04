#include <Ultrasonic.h>
#include <Wire.h>
#include <FaBoLCD_PCF8574.h> //SCL->A5 SDA->A4
Ultrasonic mesafeolcen(9, 10); //trig pini->D9 echo pini->D10
FaBoLCD_PCF8574 ekran;

void setup() {
  ekran.begin(16, 2);
}

void loop() {
  int mesafe = mesafeolcen.read();
  ekran.setCursor(0,0);
  ekran.print("Mesafe:");
  ekran.setCursor(0,1);
  ekran.print(mesafe);
  ekran.print("sm");
  delay(100);
  ekran.clear();
}
