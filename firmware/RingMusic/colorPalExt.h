#pragma once
#include <FastLED.h>

// https://github.com/FastLED/FastLED/issues/1014
// https://github.com/FastLED/FastLED/pull/202
CRGB colorFromPaletteExtended(const CRGBPalette16 &pal, uint16_t index, uint8_t brightness, TBlendType blendType) {
    // This fucnction has the same intuitive behavior as the other ColorFromPalette
    // functions, except it provides 8-bit interpolation between palette entries.

    // Extract the four most significant bits of the index as a palette index.
    uint8_t index_4bit = (index >> 12);

    // Calculate the 8-bit offset from the palette index.
    // Throws away the 4 least significant bits and uses the middle 8.
    uint8_t offset = (uint8_t)(index >> 4);

    // Get the palette entry from the 4-bit index
    //  CRGB rgb1 = pal[ hi4];
    const CRGB *entry = &(pal[0]) + index_4bit;
    uint8_t red1 = entry->red;
    uint8_t green1 = entry->green;
    uint8_t blue1 = entry->blue;

    uint8_t blend = offset && (blendType != NOBLEND);

    if (blend) {
        // If palette blending is enabled, use the offset to interpolate between
        // the selected palette entry and the next.

        if (index_4bit == 15) entry = &(pal[0]);
        else entry++;        

        // Calculate the scaling factor and scaled values for the lower palette value.

        uint8_t f1 = 255 - offset;

        red1 = scale8_LEAVING_R1_DIRTY(red1, f1);
        green1 = scale8_LEAVING_R1_DIRTY(green1, f1);
        blue1 = scale8_LEAVING_R1_DIRTY(blue1, f1);

        // Calculate the scaled values for the neighboring palette value.
        uint8_t red2 = entry->red;
        uint8_t green2 = entry->green;
        uint8_t blue2 = entry->blue;
        red2 = scale8_LEAVING_R1_DIRTY(red2, offset);
        green2 = scale8_LEAVING_R1_DIRTY(green2, offset);
        blue2 = scale8_LEAVING_R1_DIRTY(blue2, offset);

        cleanup_R1();

        // This was overflowing so I've updated it using qadd8
        red1 = qadd8(red1, red2);
        green1 = qadd8(green1, green2);
        blue1 = qadd8(blue1, blue2);
    }

    if (brightness != 255) nscale8x3_video(red1, green1, blue1, brightness);
    return CRGB(red1, green1, blue1);
}