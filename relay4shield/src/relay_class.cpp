/*
Author: Raphaell Maciel de Sousa
Goal: this is a library used to control a relay shield with 4 units.
Data: 01/08/2021
*/

#include <Arduino.h>
#include "Relay.hpp" //Relay class

//-----------------------------------------------------------------------
/*Possible methods are listed as follow:

void relayOn(const int pin); 
void relayOff(const int pin);
void relayAllOn(void);
void relayAllOff(void);    
void toggleRelay(const int pin);  

It is possible to use thease methods as follow:

Ex.:

objectName.relayAllOn();
objectName.relayAllOff();
objectName.relayOn(pinNumber);
objectName.relayOff(pinNumber);
objectName.toggleRelay(pinNumber);  

*/
//-----------------------------------------------------------------------

Relay relay(10, 11, 12, 13); //create object to Relay class

//-----------------------------------------------------------------------

void setup() 
{  
  
}

//Main loop
void loop() {

  //Example of how to using methods of the Relay class
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