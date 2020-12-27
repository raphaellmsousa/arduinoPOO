#include <Arduino.h>
#include "Pisca.hpp"

//-----------------------------------------------------------------------

Pisca led(13); //cria objeto da classe Pisca

//-----------------------------------------------------------------------

void setup()
{
    led.setPeriod(100);
    led.setDutyCycle(0.9);
}

//-----------------------------------------------------------------------

void loop()
{
    led.blink();
}