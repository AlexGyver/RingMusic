#pragma once
#include <Arduino.h>
#include <FastLED.h>

DEFINE_GRADIENT_PALETTE(Sunset_Real_gp){
    0, 120, 0, 0,
    22, 179, 22, 0,
    51, 255, 104, 0,
    85, 167, 22, 18,
    135, 100, 0, 103,
    198, 16, 0, 130,
    255, 0, 0, 160};

// Gradient palette "BlacK_Red_Magenta_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/basic/tn/BlacK_Red_Magenta.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE(BlacK_Red_Magenta_gp){
    0, 0, 0, 0,
    63, 42, 0, 0,
    127, 255, 0, 0,
    191, 255, 0, 45,
    255, 255, 0, 255};

// Gradient palette "BlacK_Green_Yellow_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/basic/tn/BlacK_Green_Yellow.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE(BlacK_Green_Yellow_gp){
    0, 0, 0, 0,
    63, 0, 55, 0,
    127, 0, 255, 0,
    191, 42, 255, 0,
    255, 255, 255, 0};

// Gradient palette "Cyan_Magenta_Red_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/basic/tn/Cyan_Magenta_Red.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE(Cyan_Magenta_Red_gp){
    0, 0, 255, 255,
    63, 42, 55, 255,
    127, 255, 0, 255,
    191, 255, 0, 45,
    255, 255, 0, 0};

// Gradient palette "Green_Yellow_Red_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/basic/tn/Green_Yellow_Red.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE(Green_Yellow_Red_gp){
    0, 0, 255, 0,
    63, 42, 255, 0,
    127, 255, 255, 0,
    191, 255, 55, 0,
    255, 255, 0, 0};

// Gradient palette "bhw1_04_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw1/tn/bhw1_04.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE(bhw1_04_gp){
    0, 229, 227, 1,
    15, 227, 101, 3,
    142, 40, 1, 80,
    198, 17, 1, 79,
    255, 0, 0, 45};

// Gradient palette "bhw2_xmas_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw2/tn/bhw2_xmas.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 48 bytes of program space.

DEFINE_GRADIENT_PALETTE(bhw2_xmas_gp){
    0, 0, 12, 0,
    40, 0, 55, 0,
    66, 1, 117, 2,
    77, 1, 84, 1,
    81, 0, 55, 0,
    119, 0, 12, 0,
    153, 42, 0, 0,
    181, 121, 0, 0,
    204, 255, 12, 8,
    224, 121, 0, 0,
    244, 42, 0, 0,
    255, 42, 0, 0};

// Gradient palette "bhw2_22_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw2/tn/bhw2_22.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE(bhw2_22_gp){
    0, 0, 0, 0,
    99, 227, 1, 1,
    130, 249, 199, 95,
    155, 227, 1, 1,
    255, 0, 0, 0};

// Gradient palette "GMT_seis_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/gmt/tn/GMT_seis.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 40 bytes of program space.

DEFINE_GRADIENT_PALETTE(GMT_seis_gp){
    0, 88, 0, 0,
    28, 255, 0, 0,
    56, 255, 22, 0,
    85, 255, 104, 0,
    113, 255, 255, 0,
    141, 255, 255, 0,
    169, 17, 255, 1,
    198, 0, 223, 31,
    226, 0, 19, 255,
    255, 0, 0, 147};

// Gradient palette "GMT_hot_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/gmt/tn/GMT_hot.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 16 bytes of program space.

DEFINE_GRADIENT_PALETTE(GMT_hot_gp){
    0, 0, 0, 0,
    95, 255, 0, 0,
    191, 255, 255, 0,
    255, 255, 255, 255};

// Gradient palette "Red_Yellow_Green_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/basic/tn/Red_Yellow_Green.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE(Red_Yellow_Green_gp){
    0, 255, 0, 0,
    63, 255, 55, 0,
    127, 255, 255, 0,
    191, 42, 255, 0,
    255, 0, 255, 0};

// Gradient palette "Yellow_Red_Magenta_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/basic/tn/Yellow_Red_Magenta.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE(Yellow_Red_Magenta_gp){
    0, 255, 255, 0,
    63, 255, 55, 0,
    127, 255, 0, 0,
    191, 255, 0, 45,
    255, 255, 0, 255};

// Gradient palette "Spectrum_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/strips/tn/Spectrum.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 72 bytes of program space.

DEFINE_GRADIENT_PALETTE(Spectrum_gp){
    0, 255, 0, 0,
    21, 255, 0, 0,
    42, 255, 0, 0,
    42, 255, 255, 0,
    63, 255, 255, 0,
    84, 255, 255, 0,
    84, 0, 255, 0,
    106, 0, 255, 0,
    127, 0, 255, 0,
    127, 0, 255, 255,
    148, 0, 255, 255,
    170, 0, 255, 255,
    170, 0, 0, 255,
    191, 0, 0, 255,
    212, 0, 0, 255,
    212, 255, 0, 255,
    233, 255, 0, 255,
    255, 255, 0, 255};

// Gradient palette "Yellow_Black_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/strips/tn/Yellow_Black.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 120 bytes of program space.

DEFINE_GRADIENT_PALETTE(Yellow_Black_gp){
    0, 0, 0, 0,
    12, 0, 0, 0,
    25, 0, 0, 0,
    25, 255, 169, 0,
    38, 255, 169, 0,
    51, 255, 169, 0,
    51, 0, 0, 0,
    63, 0, 0, 0,
    76, 0, 0, 0,
    76, 255, 169, 0,
    89, 255, 169, 0,
    102, 255, 169, 0,
    102, 0, 0, 0,
    114, 0, 0, 0,
    127, 0, 0, 0,
    127, 255, 169, 0,
    140, 255, 169, 0,
    153, 255, 169, 0,
    153, 0, 0, 0,
    165, 0, 0, 0,
    178, 0, 0, 0,
    178, 255, 169, 0,
    191, 255, 169, 0,
    204, 255, 169, 0,
    204, 0, 0, 0,
    216, 0, 0, 0,
    229, 0, 0, 0,
    229, 255, 169, 0,
    242, 255, 169, 0,
    255, 255, 169, 0};

// Gradient palette "Split_04a_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/vermillion/tn/Split_04a.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 36 bytes of program space.

DEFINE_GRADIENT_PALETTE(Split_04a_gp){
    0, 1, 55, 255,
    42, 1, 55, 255,
    84, 1, 55, 255,
    84, 0, 178, 1,
    127, 0, 178, 1,
    170, 0, 178, 1,
    170, 255, 1, 4,
    212, 255, 1, 4,
    255, 255, 1, 4};

// Gradient palette "Primary_1_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/nd/red/tn/Primary_1.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 20 bytes of program space.

DEFINE_GRADIENT_PALETTE(Primary_1_gp){
    0, 0, 33, 255,
    63, 42, 115, 45,
    127, 255, 255, 0,
    191, 255, 55, 0,
    255, 255, 0, 0};

// Gradient palette "bhw1_w00t_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw1/tn/bhw1_w00t.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 16 bytes of program space.

DEFINE_GRADIENT_PALETTE(bhw1_w00t_gp){
    0, 3, 13, 43,
    104, 78, 141, 240,
    188, 255, 0, 0,
    255, 28, 1, 1};

// Gradient palette "bhw2_47_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw2/tn/bhw2_47.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 48 bytes of program space.

DEFINE_GRADIENT_PALETTE(bhw2_47_gp){
    0, 78, 43, 205,
    22, 1, 111, 114,
    48, 121, 255, 125,
    56, 38, 191, 122,
    79, 46, 93, 119,
    112, 78, 43, 205,
    135, 78, 43, 205,
    165, 46, 93, 119,
    193, 38, 191, 122,
    204, 121, 255, 125,
    226, 1, 111, 114,
    255, 78, 43, 205};

// Gradient palette "bhw3_13_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw3/tn/bhw3_13.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 24 bytes of program space.

DEFINE_GRADIENT_PALETTE(bhw3_13_gp){
    0, 3, 6, 72,
    38, 12, 50, 188,
    109, 217, 35, 1,
    135, 242, 175, 12,
    178, 161, 32, 87,
    255, 24, 6, 108};

// Gradient palette "bhw4_044_gp", originally from
// http://soliton.vm.bytemark.co.uk/pub/cpt-city/bhw/bhw4/tn/bhw4_044.png.index.html
// converted for FastLED with gammas (2.6, 2.2, 2.5)
// Size: 28 bytes of program space.

DEFINE_GRADIENT_PALETTE(bhw4_044_gp){
    0, 157, 21, 2,
    35, 229, 244, 16,
    73, 255, 44, 7,
    107, 142, 7, 1,
    153, 229, 244, 16,
    206, 142, 7, 1,
    255, 135, 36, 0};

const TProgmemRGBGradientPalettePtr palettes[] = {
    bhw4_044_gp,
    bhw3_13_gp,
    bhw2_47_gp,
    bhw1_w00t_gp,
    Primary_1_gp,
    Split_04a_gp,
    Yellow_Black_gp,
    Spectrum_gp,
    Yellow_Red_Magenta_gp,
    Sunset_Real_gp,
    BlacK_Red_Magenta_gp,
    BlacK_Green_Yellow_gp,
    Cyan_Magenta_Red_gp,
    Red_Yellow_Green_gp,
    Green_Yellow_Red_gp,
    bhw1_04_gp,
    bhw2_xmas_gp,
    bhw2_22_gp,
    GMT_seis_gp,
    GMT_hot_gp,
};

const uint8_t palettesAmount = sizeof(palettes) / sizeof(TProgmemRGBGradientPalettePtr);