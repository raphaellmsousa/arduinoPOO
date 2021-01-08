#include "Pisca.hpp"

//-----------------------------------------------------------------------

Pisca::Pisca(const int pin)
{
  /*
  This is the constructor method for the led class. As input we have 
  Arduino's pin where the led is connected. Moreover, Arduino's pin is 
  configurated as output.
  */

  pin_ = pin;
  pinMode(pin_, OUTPUT);

  //defualt parameters
  period_ = 1000;
  duty_ = 0.5;

  update();

}

//-----------------------------------------------------------------------

void Pisca::setPeriod(const int period)
{
  /*
  This method is used to set the period for blinking applications.
  */

  period_ = period;
  update();

}

//-----------------------------------------------------------------------

void Pisca::setDutyCycle(const float duty)
{
  /*
  This method is used to set the duty cicle for blinking applications.
  */

  duty_ = duty;  
  update();

}

//-----------------------------------------------------------------------

void Pisca::blink(void)
{
  /*
  Blinking method used to activate and deactivate a single led.
  */
  
  digitalWrite(pin_, HIGH);
  delay(t_on);
  digitalWrite(pin_, LOW);
  delay(t_off);
  
}

//-----------------------------------------------------------------------

void Pisca::update(void)
{
  /*
  This method is used to calculate ton and toff, time the led remains on
  or off, respectivally.
  */

  t_on = period_ * duty_;
  t_off = period_ - t_on;

}

//-----------------------------------------------------------------------
