#ifndef BUTTON_H
#define BUTTON_H

#include <Arduino.h>

class Button // ignore pls :3
{
private:
    int Delay = 10;
    unsigned long LastButtonPress;
    int Pin;

public:
    bool Pressed();
    Button(uint8_t button_pin, unsigned long delay);
};

template <size_t T>
class Dip
{
private:
    uint8_t Pins[T];
    bool States[T];

public:
    bool Is_on(size_t pin) {
		if (!digitalRead(Pins[pin])) {
            States[pin] = true;
			return true;
		} else {
            States[pin] = flase;
			return false;
		}
	}
    Dip(uint8_t dip_pins[T])
    {
        for (size_t i = 0; i < T; i++)
        {
            Pins[i] = dip_pins[i];
            pinMode(Pins[i], INPUT_PULLUP);
        }
    }
};

#endif