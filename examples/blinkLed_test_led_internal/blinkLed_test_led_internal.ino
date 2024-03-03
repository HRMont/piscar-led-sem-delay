/*
---------------------------------------------------------------------------------------------------
Este exemplo demonstra como utilizar a biblioteca para o led interno do Arduino
Autor: Hercules Montenegro
---------------------------------------------------------------------------------------------------

Requer a biblioteca: timerwithoutdelay: https://github.com/casaautomacao/timerwithoutdelay.git

*/

#include <BlinkLed.h>

BlinkLed led();  // Pino padrão = 13 | Padrões: tempo LIGADO = 1000, tempo DESLIGADO = 1000
                   // ATENÇÃO PARA CONFLITOS COM O PINO 13

void setup() {

  // Inicializa os temporizadores, define o pino do led como OUTPUT e LOW (DESLIGADO)
  led.begin();
}

void loop() {

  // Chamada da função principal que inicia o ciclo de ligado/desligado
  led.blink();
}