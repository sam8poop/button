#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

struct button{
    unsigned long mills;
    int prid = 10;
    bool current_button_sate;
    bool last_button_state;
    int pin;
    button(int button_pin);
};


#endif