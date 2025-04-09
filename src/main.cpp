#include <Arduino.h>

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(19200,SERIAL_8N1);
  Serial1.begin(9600,SERIAL_5N1);
  Serial2.begin(1200);

  Serial.write('H');
  Serial.write('o');
  Serial.write('l');
  Serial.write('a');

  Serial.println("Hola");
}

void loop() {
  
}
