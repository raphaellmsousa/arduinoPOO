/*
Author: Raphaell Maciel de Sousa
Goal: this is a library used to control a relay shield with 4 units.
Data: 01/08/2021
*/

#include <Arduino.h>
#include "Relay.hpp"

//-----------------------------------------------------------------------

Relay relay(10, 11, 12, 13); //create object to Relay class

//-----------------------------------------------------------------------

void setup() 
{  
  
}

void loop() {

  relay.relayAllOn();
  delay(1000);
  relay.relayAllOff();
  delay(1000);
  
  relay.relayOn(13);
  delay(1000);
  relay.relayOff(13);
  delay(1000);

  for(int i=0; i<=3; i++)
  {
    relay.relayOn(i+10);
    delay(1000);
  }

  for(int i=0; i<=3; i++)
  {
    relay.relayOff(i+10);
    delay(1000);
  }

  relay.toggleRelay(13);
  delay(1000);  
  relay.toggleRelay(13);
  delay(1000); 

}