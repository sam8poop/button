#include <Arduino.h>
#include "button.h"
uint8_t pins[3] = { 2, 3, 4 };

Dip<3> dipswitch(pins);
void setup() {
    Serial.begin(115200);
}

void loop() {
    if (dipswitch.Is_on(0)) {
        Serial.println("Dip one is on");
    }
    if (dipswitch.Is_on(1)) {
        Serial.println("Dip two is on");
    }
    if (dipswitch.Is_on(2)) {
        Serial.println("Dip three is on");
    }
}