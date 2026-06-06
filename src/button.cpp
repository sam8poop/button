#include "button.h"

bool Button::Pressed() {
    if (!digitalRead(Pin) && millis() - LastButtonPress >= Delay) {
        LastButtonPress = millis();
        return true;
    } else {
        return false;
    }
}

Button::Button(uint8_t button_pin, unsigned long delay) {
    Pin = button_pin;
    Delay = delay;
    pinMode(Pin, INPUT_PULLUP);
}