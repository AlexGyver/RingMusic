#pragma once

#define EFF_AMOUNT 3

#include <EEManager.h>
#include <FastLED.h>
#include <VolAnalyzer.h>

#include "colorPalExt.h"
#include "config.h"
#include "palettes.h"
#include "tmr.h"

class Ringu {
   public:
    enum class Effect : uint8_t {
        Solid,
        Noise,
        VU,
    };

    struct Data {
        bool power = 1;
        bool react = 1;
        uint8_t bright_min = 0;
        uint8_t bright_max = 255;
        uint8_t speed = 10;
        uint8_t scale = 10;
        Effect effect = Effect::Solid;
        uint8_t palette = 0;
        uint16_t trsh = 10;
    };

    Ringu() : vol(SOUND_PIN) {
        FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, RING_SIZE * 2);
        pal = palettes[data.palette];
        pal = RainbowColors_p;
        FastLED.setBrightness(data.bright_min);
    }

    void brightMin(int8_t step) {
        data.bright_min = constrain((int16_t)data.bright_min + step, 0, data.bright_max);
        FastLED.clear();
        fill_solid(leds, RING_SIZE * data.bright_min / 255, CRGB::Green);
        _mirror();
        FastLED.setBrightness(data.bright_min);
        FastLED.show();
        tmr_busy.start(3000, true);
    }

    void brightMax(int8_t step) {
        data.bright_max = constrain((int16_t)data.bright_max + step, data.bright_min, 255);
        FastLED.clear();
        fill_solid(leds, RING_SIZE * data.bright_max / 255, CRGB::Red);
        _mirror();
        FastLED.setBrightness(data.bright_max);
        FastLED.show();
        tmr_busy.start(3000, true);
    }

    void speed(int8_t step) {
        data.speed = constrain((int16_t)data.speed + step, 1, 20);
        FastLED.clear();
        fill_solid(leds, RING_SIZE * data.speed / 20, CRGB::Cyan);
        _mirror();
        FastLED.setBrightness(data.bright_max);
        FastLED.show();
        tmr_busy.start(3000, true);
    }

    void scale(int8_t step) {
        data.scale = constrain((int16_t)data.scale + step, 1, 20);
        FastLED.clear();
        fill_solid(leds, RING_SIZE * data.scale / 20, CRGB::Yellow);
        _mirror();
        FastLED.setBrightness(data.bright_max);
        FastLED.show();
        tmr_busy.start(3000, true);
    }

    void power(bool value) {
        data.power = value;
        if (!value) {
            FastLED.clear();
            FastLED.show();
        }
    }

    void togglePower() {
        power(!data.power);
    }

    void toggleReact() {
        data.react = !data.react;
    }

    void nextPal() {
        if (++data.palette >= palettesAmount) data.palette = 0;
        pal = palettes[data.palette];
        fill_palette(leds, RING_SIZE, 0, 255 / RING_SIZE + 1, pal, 255, LINEARBLEND);
        _mirror();
        FastLED.show();
        tmr_busy.start(2000, true);
    }

    void nextEffect() {
        uint8_t effect = (uint8_t)data.effect;
        if (++effect >= EFF_AMOUNT) effect = 0;
        data.effect = (Effect)effect;
    }

    void calibrate() {
        vol.setTrsh(vol.getMax());
    }

    void tick() {
        tmr_busy.tick();
        if (!data.power || tmr_busy.state()) return;
        if (vol.tick()) _redraw();
    }

    Data data;

   private:
    VolAnalyzer vol;
    Tmr tmr_busy;
    CRGB leds[RING_SIZE * 2];
    uint16_t idx16;
    CRGBPalette16 pal;

    void _redraw() {
        switch (data.effect) {
            case Effect::Solid:
                fill_solid(leds, RING_SIZE * 2, colorFromPaletteExtended(pal, idx16, 255, LINEARBLEND));
                if (data.react) FastLED.setBrightness(map(vol.getVol(), 0, 100, data.bright_min, data.bright_max));
                else FastLED.setBrightness(data.bright_max);
                idx16 += data.speed * 5;
                break;

            case Effect::Noise:
                for (uint16_t i = 0; i < RING_SIZE; i++) {
                    leds[i] = ColorFromPalette(pal, inoise8(i * data.scale, idx16));
                }
                _mirror();
                if (data.react) FastLED.setBrightness(map(vol.getVol(), 0, 100, data.bright_min, data.bright_max));
                else FastLED.setBrightness(data.bright_max);
                idx16 += data.speed / 5;
                break;

            case Effect::VU: {
                FastLED.clear();
                uint8_t len = RING_SIZE / 2;
                if (data.react) len = map(vol.getVol(), 0, 100, 0, len);
                fill_palette(leds, len, idx16 / 255, data.scale, pal);
                for (uint8_t i = 0; i < RING_SIZE / 2; i++) {
                    leds[RING_SIZE - 1 - i] = leds[i];
                }
                _mirror();
                FastLED.setBrightness(data.bright_max);
                idx16 += data.speed * 5;
            } break;
        }
        FastLED.show();
    }

    void _mirror() {
        for (uint8_t i = 0; i < RING_SIZE; i++) {
            leds[RING_SIZE * 2 - 1 - i] = leds[i];
        }
    }
};  // class Ringu

Ringu ringu;
EEManager memory(ringu.data);

/*
for (uint16_t i = 0; i < data.led_amount; i++) {
    leds[data.led_amount - i - 1] = ColorFromPalette(paletteArr[data.palette], 255 - (idx + i) * 255 / data.pal_len, 255, LINEARBLEND);
}
*/