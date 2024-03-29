// Autor: Hercules Montenegro @ mar-2024
// link: https://github.com/HRMont/piscar-led-sem-delay.git

#include "BlinkLed.h"

BlinkLed::BlinkLed(byte ledPin, long onTime, long offTime) {
  this->ledPin = ledPin;
  this->onTime = onTime;
  this->offTime = offTime;
  
}

BlinkLed::BlinkLed(byte ledPin) {
  this->ledPin = ledPin;
  this->onTime = 1000;
  this->offTime = 1000;
  
}

void BlinkLed::begin() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  ledOn.defiSP(onTime);
  ledOff.defiSP(offTime);    
  
}

void BlinkLed::blink() {
  if (ledOff.Saida(1)) {
    digitalWrite(ledPin, HIGH);
    if (ledOn.Saida(1)) {
      digitalWrite(ledPin, LOW);
      ledOff.Saida(0);
      ledOn.Saida(0);
    }
  }
}
