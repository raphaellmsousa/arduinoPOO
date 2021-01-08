/*
Author: Raphaell Maciel de Sousa
Goal: creating a led class. 
Data: 01/08/2021
*/

#include <Arduino.h>
#include "Pisca.hpp"

//-----------------------------------------------------------------------

Pisca led(13); //create object to Led class

//-----------------------------------------------------------------------

void setup()
{
    led.setPeriod(1000); 
    led.setDutyCycle(0.3);
}

//-----------------------------------------------------------------------

void loop()
{
    led.blink(); //call method blink
}