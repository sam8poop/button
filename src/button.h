#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

class button // ignore pls :3
{
    unsigned long mills;
    int prid = 10;
    bool current_button_sate;
    bool last_button_state;
    int pin;
    button(int button_pin);
};
template <size_t T>
class Dip
{
private:
    uint8_t pins[T];
    bool states[T];

public:
    Dip(uint8_t dip_pins[T])
    {
        for (size_t i = 0; i < T; i++)
        {
            pins[i] = dip_pins[i];
            pinMode(pins[i], INPUT_PULLUP);
        }
    }
};
// class dip3 {
// private:
//     uint8_t pins[3];
//     bool states[3];
// public:

//     dip3(uint8_t dip_pins[3]);
// };
// class dip6 {
// public:
//     uint8_t pins[6];
//     bool states[6];
//     dip6(uint8_t dip_pins[6]);
// };

#endif