#ifndef RELAY_H
#define RELAY_H

//-----------------------------------------------------------------------

#include <Arduino.h>

//-----------------------------------------------------------------------

class Relay
{
    public:

        Relay(const int pin1, const int pin2, const int pin3, const int pin4); //Constructor
        
        //Methods of the class
        void relayOn(const int pin);
        void relayOff(const int pin);
        void relayAllOn(void);
        void relayAllOff(void);    
        void toggleRelay(const int pin);    
    
    private:

        int pin, pin1, pin2, pin3, pin4;
        bool pinState = 0; //This flag is gonna be used to monitor pin state 
                            //for toggle function
};

#endif // RELAY_H 