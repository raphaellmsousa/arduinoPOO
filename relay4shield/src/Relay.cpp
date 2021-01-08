#include "Relay.hpp"

//-----------------------------------------------------------------------

Relay::Relay(const int pin1, const int pin2, const int pin3, const int pin4)
{  
  /*
  This is the constructor method for the relay class. As input we have 
  Arduino pins where relays are connected. Moreover, Arduino pins are 
  configurated as output.
  */

  this->pin1 = pin1;
  this->pin2 = pin2;
  this->pin3 = pin3;
  this->pin4 = pin4;
  
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);

}

//-----------------------------------------------------------------------

void Relay::relayAllOn(void)
{
  /*
  This method activate all relays. There is no parameters as input, but 
  this method uses Arduino's pins used in the constructor method. For this shield, 
  the relays are activated in low state.
  */

  this->pinState = 0; //on

  digitalWrite(pin1, LOW); //on in low
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);  

}

//-----------------------------------------------------------------------

void Relay::relayAllOff(void)
{
  /*
  This method deactivate all relays. There is no parameters as input, but 
  this method uses Arduino's pins used in the constructor method. For this shield, 
  the relays are activated in low state.
  */

  this->pinState = 1; //off

  digitalWrite(pin1, HIGH); //off in high
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);  

}

//-----------------------------------------------------------------------

void Relay::relayOn(const int pin)
{
  /*
  This method is used to activate a single relay. As input we have an int value
  that is related to the Arduino's pin number.
  */

  this->pin = pin;
  this->pinState = 0; //on

  digitalWrite(pin, LOW);

}

//-----------------------------------------------------------------------

void Relay::relayOff(const int pin)
{
  /*
  This method is used to deactivate a single relay. As input we have an int value
  that is related to the Arduino's pin number.
  */

  this->pin = pin;
  this->pinState = 1; //off

  digitalWrite(pin, HIGH);

}

//-----------------------------------------------------------------------

void Relay::toggleRelay(const int pin)
{
  /*
  This method is used to toggle a Arduino's pin. As input we have an int value
  that is related to the Arduino's pin number.
  */

  this->pin = pin;
  this->pinState = !pinState;

  digitalWrite(pin, pinState);

}

//-----------------------------------------------------------------------