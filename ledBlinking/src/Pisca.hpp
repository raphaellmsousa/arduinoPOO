#ifndef PISCA_HPP
//#define PISCA_HPP

//-----------------------------------------------------------------------

#include <Arduino.h>

//-----------------------------------------------------------------------

class Pisca
{
    public:

        Pisca(const int pin); // Construtor

        //Methods of the class
        void setPeriod(const int periodo);
        void setDutyCycle(const float duty);

        void blink(void);

    private:

        int pin_;
        int period_;
        float duty_;
        
        int t_on;
        int t_off;

        void update(void);    
};

#endif // PISCA_HPP