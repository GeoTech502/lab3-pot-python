#include "POT.h"

Encender encender;

void setup() {
  Serial.begin(9600);
  encender.Modo(13);
}

void loop() {
  encender.Encendido(13);
}
