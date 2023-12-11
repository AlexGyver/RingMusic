#pragma once
#include <Arduino.h>

class Tmr {
   public:
    void start(uint16_t prd, bool once = false) {
        this->prd = prd;
        mode = once ? 2 : 1;
        tmr = millis();
    }

    bool tick() {
        if (mode && (uint16_t)((uint16_t)millis() - tmr) >= prd) {
            if (mode == 2) mode = 0;
            else tmr = millis();
            return 1;
        }
        return 0;
    }

    bool state() {
        return mode;
    }

   private:
    uint16_t prd;
    uint16_t tmr = 0;
    uint8_t mode = 0;
};