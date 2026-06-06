#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

class button{
    unsigned long mills;
    int prid = 10;
    bool current_button_sate;
    bool last_button_state;
    int pin;
    button(int button_pin);
};
class dip {
    bool state;
    uint8_t pin;
    dip(uint8_t dip_pin);
};


#endif