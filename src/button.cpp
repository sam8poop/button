#include "button.h"

button::button(int button_pin) {
    pin = button_pin;pinMode(pin, INPUT_PULLUP);
}
dip::dip(uint8_t dip_pin) {
    pin = dip_pin;
    pinMode(pin, INPUT_PULLUP);
}