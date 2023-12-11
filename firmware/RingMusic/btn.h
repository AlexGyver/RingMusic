#pragma once
#include <EncButton.h>

#include "config.h"
#include "ringu.h"

Button btn(BTN_PIN);

void btn_cb() {
    static int8_t dir = 1;

    if (btn.hasClicks()) {
        switch (btn.getClicks()) {
            case 1:
                ringu.togglePower();  // вкл/выкл
                break;
            case 2:
                ringu.nextPal();  // следующая палитра
                break;
            case 3:
                ringu.nextEffect();  // следующий эффект
                break;
            case 4:
                ringu.toggleReact();  // вкл/выкл реакцию на звук
                break;
            case 5:
                ringu.calibrate();  // калибровка
                break;
        }
    }

    if (btn.step()) {
        switch (btn.getClicks()) {
            case 0:
                ringu.brightMax(dir * 10);  // яркость макс
                break;
            case 1:
                ringu.brightMin(dir * 10);  // яркость мин
                break;
            case 2:
                ringu.speed(dir);  // скорость
                break;
            case 3:
                ringu.scale(dir);  // масштаб
                break;
        }
    }

    if (btn.releaseStep()) dir = -dir;

    memory.update();
}