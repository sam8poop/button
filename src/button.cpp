#include "button.h"

button::button(int button_pin) {// not working pls ignore
    pin = button_pin;pinMode(pin, INPUT_PULLUP);
}
// dip3::dip3(uint8_t dip_pins[3]) {
//     for (int i = 0;i < 3;i++) {
//         pins[i] = dip_pins[i];
//         pinMode(pins[i], INPUT_PULLUP);
// }}
// dip6::dip6(uint8_t dip_pins[6]) {
//     for (int i = 0;i < 6;i++) {
//         pins[i] = dip_pins[i];
//         pinMode(pins[i], INPUT_PULLUP);
// }}
