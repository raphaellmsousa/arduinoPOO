#include "Relay.hpp"

//-----------------------------------------------------------------------

Relay::Relay(const int pin1, const int pin2, const int pin3, const int pin4)
{  
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
  this->pinState = 0; //on
  digitalWrite(pin1, LOW); //on in low
  digitalWrite(pin2, LOW);
  digitalWrite(pin3, LOW);
  digitalWrite(pin4, LOW);  
}

//-----------------------------------------------------------------------

void Relay::relayAllOff(void)
{
  this->pinState = 1; //off
  digitalWrite(pin1, HIGH); //off in high
  digitalWrite(pin2, HIGH);
  digitalWrite(pin3, HIGH);
  digitalWrite(pin4, HIGH);  
}

//-----------------------------------------------------------------------

void Relay::relayOn(const int pin)
{
  this->pin = pin;
  this->pinState = 0; //on
  digitalWrite(pin, LOW);
}

//-----------------------------------------------------------------------

void Relay::relayOff(const int pin)
{
  this->pin = pin;
  this->pinState = 1; //off
  digitalWrite(pin, HIGH);
}

//-----------------------------------------------------------------------

void Relay::toggleRelay(const int pin)
{
  this->pin = pin;
  this->pinState = !pinState;
  digitalWrite(pin, pinState);
}

//-----------------------------------------------------------------------