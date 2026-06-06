#include "button.h"

struct button{
    unsigned long mills;
    int prid = 10;
    bool current_button_sate;
    bool last_button_state;
    int pin;
    button(int button_pin) {
        pin = button_pin;pinMode(pin,INPUT_PULLUP);
    }
};