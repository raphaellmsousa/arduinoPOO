#include "Pisca.hpp"

//-----------------------------------------------------------------------

Pisca::Pisca(const int pin)
{
  pin_ = pin;
  pinMode(pin_, OUTPUT);

  period_ = 1000;
  duty_ = 0.5;
  update();
}

//-----------------------------------------------------------------------

void Pisca::setPeriod(const int period)
{
  period_ = period;
  update();
}

//-----------------------------------------------------------------------

void Pisca::setDutyCycle(const float duty)
{
  duty_ = duty;
  update();

}

//-----------------------------------------------------------------------

void Pisca::blink(void)
{
  digitalWrite(pin_, HIGH);
  delay(t_on);
  digitalWrite(pin_, LOW);
  delay(t_off);
}

//-----------------------------------------------------------------------

void Pisca::update(void)
{
  t_on = period_ * duty_;
  t_off = period_ - t_on;
}

//-----------------------------------------------------------------------