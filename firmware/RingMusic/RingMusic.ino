#include <Arduino.h>

#include "btn.h"
#include "config.h"
#include "ringu.h"

void setup() {
    Serial.begin(115200);
    analogReference(EXTERNAL);
    memory.begin(0, 'a');
    btn.attach(btn_cb);
}

void loop() {
    memory.tick();
    btn.tick();
    ringu.tick();
}