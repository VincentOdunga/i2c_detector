#include <Wire.h>
#include <i2cdetect.h>

void setup() {
  // put your setup code here, to run once:
Wire.begin();
Serial.begin(9600);
Serial.println("Scanning address range 0x03 - 0x77\n\n");
}

void loop() {
  // put your main code here, to run repeatedly:
   i2cdetect();
   delay(2000);
}
