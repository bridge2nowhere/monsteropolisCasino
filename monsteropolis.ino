#include <Tinyfont.h>
#include <Arduboy2.h>

Arduboy2 arduboy;
Tinyfont tinyfont = Tinyfont(arduboy.sBuffer, Arduboy2::width(), Arduboy2::height());

int gold = 100;

const unsigned char Splash[] PROGMEM = {0x00, 0xe0, 0xe0, 0xc0, 0x40, 0x60, 0xe0, 0xc0, 0xc0, 0x40, 0x40, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7, 0xfc, 0xfe, 0x3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x7, 0xfe, 0xfe, 0x00, 0x00, 0x00, 0x00, 0xc6, 0xcf, 0xc6, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0x20, 0x60, 0x60, 0x20, 0x00, 0x00, 0x3f, 0x3f, 0x3f, 0x00, 0x00, 0x20, 0xff, 0x7f, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0xff, 0xff, 0x80, 0x00, 0x3, 0xff, 0xff, 0x00, 0x00, 0x00, 0x1, 0xff, 0xff, 0x3, 0x1, 0x3, 0xff, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x38, 0xfc, 0xfe, 0x82, 0xc7, 0xc7, 0xe6, 0x80, 0x00, 0x00, 0x1, 0x1, 0xff, 0xff, 0x3, 0x2, 0x00, 0x00, 0xf0, 0xf8, 0xc, 0x3e, 0xfc, 0xe0, 0x00, 0x00, 0x1c, 0xfe, 0xf8, 0xc, 0xe, 0x1e, 0xc, 0x00, 0x00, 0xf8, 0xfc, 0x6, 0x6, 0x1f, 0xfe, 0xf8, 0x00, 0x00, 0x00, 0x1, 0xff, 0xfe, 0x2, 0x3, 0x7, 0xff, 0xfe, 0x00, 0x00, 0x00, 0xfc, 0xfe, 0xff, 0x1, 0x1, 0x3, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 0x3, 0x27, 0x76, 0x62, 0x22, 0x23, 0x1f, 0xe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3, 0x7, 0x3, 0x2, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0xf, 0xf, 0x6, 0x00, 0x00, 0xf, 0x3f, 0x1f, 0x00, 0x00, 0x00, 0x10, 0x38, 0x79, 0xf0, 0x60, 0x20, 0x3f, 0x1f, 0x00, 0x00, 0x00, 0x60, 0xff, 0xff, 0x40, 0x00, 0x00, 0x00, 0xff, 0xff, 0x86, 0x3, 0x1, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xe0, 0xc0, 0x40, 0x3f, 0x1f, 0x00, 0x00, 0x00, 0x38, 0xff, 0xff, 0x38, 0x30, 0x10, 0xf, 0x7, 0x00, 0x00, 0x00, 0x3, 0x7, 0xf, 0xe, 0x4, 0x2, 0x3, 0x1, 0x00, 0x00, 0x00, 0x1, 0x3, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0x3, 0x7, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x7, 0x3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x1f, 0x1f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xc0, 0xc0, 0xc0, 0x00, 0x00, 0xc0, 0xc0, 0x40, 0x40, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0xc0, 0xc0, 0x40, 0x00, 0x00, 0x00, 0x00, 0xcc, 0xde, 0x84, 0x00, 0x00, 0x00, 0xc0, 0xc0, 0x80, 0x80, 0xc0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x7f, 0x7f, 0x20, 0x20, 0x10, 0x00, 0x00, 0x3c, 0x7e, 0x63, 0x40, 0x60, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x27, 0x67, 0x64, 0x44, 0x66, 0x3e, 0x1c, 0x00, 0x00, 0x00, 0x7f, 0x7f, 0x20, 0x00, 0x00, 0x00, 0x20, 0x7f, 0x7f, 0x00, 0x00, 0x20, 0x7f, 0x7f, 0x00, 0x00, 0x00, 0x1f, 0x7f, 0x70, 0x60, 0x40, 0x3f, 0x3f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
const unsigned char Over[] PROGMEM = {0x00, 0x00, 0x00, 0x00, 0x00, 0xc, 0xc8, 0x78, 0x30, 0x30, 0x20, 0x20, 0x60, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x20, 0xe0, 0xf0, 0xf8, 0xf8, 0x8, 0x4, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xe0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xe7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xf0, 0xf0, 0x18, 0x18, 0x18, 0x3c, 0xfc, 0xf8, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x38, 0xfc, 0xf8, 0xf0, 0xe0, 0x00, 0x00, 0x00, 0x00, 0xf8, 0xf8, 0xfc, 0xf8, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x8, 0x7, 0x3, 0x00, 0x00, 0x00, 0x00, 0x10, 0x38, 0xfc, 0xf8, 0xf8, 0xf0, 0x18, 0x18, 0x38, 0x7c, 0x38, 0x30, 0x00, 0x00, 0x00, 0xe0, 0xe0, 0xe0, 0xf0, 0x18, 0x18, 0x78, 0xfc, 0xf8, 0xf0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x63, 0x87, 0x8e, 0xe, 0x1c, 0x1c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x3c, 0x18, 0x18, 0x18, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xc0, 0x80, 0x00, 0x00, 0xff, 0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xff, 0xff, 0xff, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x8c, 0x86, 0x2, 0x3, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x1, 0x1, 0x3, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x2, 0x3, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x3, 0x3, 0x3, 0x1, 0x1, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x3, 0x3, 0x3, 0x3, 0x1, 0x1, 0x1, 0x1, 0x3, 0x3, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x1, 0x3, 0x3, 0x1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0x3, 0x3, 0x3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8, 0x18, 0xc, 0x7, 0x3, 0xff, 0xff, 0xff, 0x81, 0x80, 0x40, 0x40, 0x60, 0x60, 0x60, 0x60, 0x61, 0x67, 0xff, 0xff, 0xbc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1, 0xff, 0xff, 0xff, 0xff, 0x3, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xe3, 0x81, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x2, 0x3, 0x7, 0xff, 0xff, 0xff, 0x3, 0x1, 0x3, 0x7, 0x7, 0x3, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0xfe, 0xfe, 0x3, 0x1, 0x1, 0x3, 0x7, 0xff, 0xff, 0xfe, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xc2, 0x63, 0x73, 0xff, 0xff, 0xcf, 0x6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0xfc, 0xfe, 0xff, 0x83, 0x43, 0x67, 0x3f, 0x3f, 0x1f, 0xc, 0x8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2, 0xc, 0xc, 0x10, 0x30, 0x3f, 0x3f, 0x3f, 0x60, 0x60, 0x41, 0x40, 0x40, 0x40, 0x40, 0x20, 0x20, 0x30, 0x18, 0x1e, 0xf, 0x7, 0x3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x7f, 0x7f, 0x3f, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf, 0xf, 0x3f, 0x3f, 0x7c, 0x78, 0x30, 0x30, 0x30, 0x1f, 0xf, 0xf, 0xf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x3f, 0x7f, 0x7f, 0x3f, 0x18, 0x00, 0x00, 0xf, 0x1f, 0x3f, 0x7e, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00, 0xf, 0x1f, 0x3f, 0x7f, 0x38, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  };




//menu variables
byte menuChoice = 0;
bool menuMoveOn = false;

//credit screen varaibles
byte creditScreen = 0;



enum class GameState : uint8_t
{
  SplashScreen,
  MenuScreen,
  LizardBetting,
  LizardRacing,
  RevengeMain,
  RevengeFirst,
  RevengeChance,
  RevengePayOut,
  OtherGame,
  GameOver,
  Credits
};
GameState gameState = GameState::SplashScreen; 

void setup() {
  arduboy.begin();
  arduboy.setFrameRate(30);
  arduboy.initRandomSeed();
}

void loop() {
  arduboy.clear();
  if (!(arduboy.nextFrame()))
    return;

  //check screen mode and display splashScreen of move on
  if (gameState == GameState::SplashScreen) splashScreen();
  if (gameState == GameState::MenuScreen) menuScreen();
  if (gameState == GameState::Credits) credits();
  if (gameState == GameState::LizardBetting) lizardBet();
  if (gameState == GameState::LizardRacing) lizardRacing();
  
  if (gameState == GameState::RevengeMain) revengeMain();
  if (gameState == GameState::RevengeFirst) revengeFirst();
  if (gameState == GameState::RevengeChance) revengeChance();
  if (gameState == GameState::RevengePayOut) revengePayOut();
  
  
  if (gameState == GameState::GameOver) gameOver();

  
}

void splashScreen() {
  //shows splash screen then moves on
  bool moveOn = false;
  arduboy.drawBitmap(0,0,Splash,128,47, WHITE);
  arduboy.setCursor(0,50);  
  arduboy.println(F(" Press A to Continue"));
  arduboy.display();
  while (!moveOn) {
   arduboy.pollButtons();
   if(arduboy.justPressed(A_BUTTON)){
      moveOn = true;
      gameState = GameState::MenuScreen;
      arduboy.clear();
   }
  }  
}

void gameOver() {
  arduboy.drawBitmap(0,0,Over,128,64,WHITE);
  arduboy.display();
}

void menuScreen() {
   //arduboy.println("Menu");
   tinyfont.setCursor(0,0);
   tinyfont.print(F("HEY, GOBLIN, YOU WORK AT\nTHE CASINO NOW.\nMAKE THE BOSS HAPPY\nBY MAKING MONEY, OR ELSE!"));
   arduboy.setCursor(0,30);
   arduboy.println(F("  Lizard Racing"));
   arduboy.println(F("  Nilbogs Revenge"));
   arduboy.println(F("  Other Game"));
   arduboy.println(F("  Credits"));
   if (menuChoice == 0) arduboy.setCursor(0,30);
   if (menuChoice == 1) arduboy.setCursor(0,38);
   if (menuChoice == 2) arduboy.setCursor(0,46);  
   if (menuChoice == 3) arduboy.setCursor(0,54);
   arduboy.print (">");
   arduboy.display();
   arduboy.pollButtons();
   if(arduboy.justPressed(DOWN_BUTTON)) menuChoice ++;
   if(arduboy.justPressed(UP_BUTTON)) menuChoice --;
   if (menuChoice > 3) menuChoice = 0;
   if (menuChoice < 0) menuChoice = 3;
   if(arduboy.justPressed(A_BUTTON)){
    menuMoveOn = true;
    if (menuChoice == 0) gameState = GameState::LizardBetting;
    if (menuChoice == 1) gameState = GameState::RevengeMain;
    if (menuChoice == 2) gameState = GameState::OtherGame;
    if (menuChoice == 3) gameState = GameState::Credits;
   }
}

void loose(int amount) {
  gold -= amount;
  if (gold <= 0) {
    gold = 0;
    gameState = GameState::GameOver;   
  }
  
}

void win(int amount) {
  gold += amount;
}

/////////////////////////////////////
//Revenge
/////////////////////////////////////
bool setupRevenge = true;
bool revengeRolled = false;
byte calledMain = 5;
byte setChance = 0;
int myRevengeBet = 2;
byte roll1 = 0;
byte roll2 = 0;
byte rollTotal = 0;
int winLoss = 0;
enum class RollResult : uint8_t {
  None,
  Nick,
  Win,
  Loose,
  Out,
  Chance,
};
RollResult rollResult = RollResult::None; 

void revengeSetup() {
  calledMain = 5;
  setupRevenge = false;
  myRevengeBet = 2;
}

void revengeMain() {
  if (setupRevenge) lizardSetup();
  
  arduboy.print(F("L/R Bet="));
  arduboy.print(myRevengeBet);
  arduboy.print(F(" of "));
  arduboy.println(gold);
  
  arduboy.print(F("U/D Jester's Mace="));
  arduboy.println(calledMain);
  
  arduboy.display();
  arduboy.pollButtons();
  if (arduboy.justPressed(B_BUTTON)){
    gameState = GameState:: MenuScreen;
    setupRevenge = true;
  }
  if (arduboy.justPressed(A_BUTTON)) {
    revengeRolled = false;
    gameState = GameState::RevengeFirst;
  }
  if (arduboy.justPressed(UP_BUTTON)) {
    calledMain ++;
  }
  if (arduboy.justPressed(DOWN_BUTTON)) {
    calledMain --;
  }
  if (arduboy.justPressed(LEFT_BUTTON)) {
    myRevengeBet -= 2;
  }
  if (arduboy.justPressed(RIGHT_BUTTON)) {
    myRevengeBet += 2;
  }
  if (myRevengeBet > gold) myRevengeBet = gold;
  else if (myRevengeBet < 0) myRevengeBet = 0;
  if (calledMain > 9) calledMain = 5;
  else if (calledMain < 5) calledMain = 9;
}

void revengeFirst() {
  if(!revengeRolled) {
    roll1 = random(7);
    roll2 = random(7);
    rollTotal = roll1 + roll2;
    revengeRolled = true;
    checkMain(rollTotal);
  }
  arduboy.println(F("Main Roll"));
  arduboy.println();
  arduboy.print(F("Roll="));
  arduboy.print(roll1);
  arduboy.print(',');
  arduboy.println(roll2);
  if(rollResult == RollResult::None) arduboy.print("uh-oh");
  if(rollResult == RollResult::Chance) {
    arduboy.println(F("Chance"));
  }
  if(rollResult == RollResult::Out) {
    arduboy.println(F("Out"));
  }
  if(rollResult == RollResult::Nick){
    arduboy.println(F("Nick"));
  }
  arduboy.println();
  arduboy.println(F("Press A to Cotinue"));
  arduboy.display();
  arduboy.pollButtons();
  if (arduboy.justPressed(B_BUTTON)){
    gameState = GameState:: MenuScreen;
    setupRevenge = true;
  }
  if (arduboy.justPressed(A_BUTTON)) {
    if(rollResult == RollResult::Chance) {
      revengeRolled = false;
      gameState = GameState::RevengeChance;
      setChance = rollTotal;
    }
    else if(rollResult == RollResult::Nick) {
      gameState = GameState::RevengePayOut;
      win(myRevengeBet);
      winLoss = myRevengeBet;
    }
    else if(rollResult == RollResult::Out) {
      gameState = GameState::RevengePayOut;
      loose(myRevengeBet);
      winLoss = -myRevengeBet;
    }   
  }
}

void checkMain(byte roll) {
  byte result;
  rollResult = RollResult::Out; 
  if (calledMain == 5 && roll == 5) rollResult = RollResult::Nick;
  else if (calledMain == 6 && (roll == 6 || roll == 12)) rollResult = RollResult::Nick;
  else if (calledMain == 7 && (roll == 7 || roll == 11)) rollResult = RollResult::Nick;
  else if (calledMain == 8 && (roll == 8 || roll == 12)) rollResult = RollResult::Nick;
  else if (calledMain == 9 && roll == 9) rollResult = RollResult::Nick;
  
  if (calledMain == 5 && (roll == 2 || roll == 3 || roll == 11 || roll == 12)) rollResult = RollResult::Chance;
  else if (calledMain == 6 && (roll == 2 || roll == 3 || roll == 11)) rollResult = RollResult::Chance;
  else if (calledMain == 7 && (roll == 2 || roll == 3 || roll == 12)) rollResult = RollResult::Chance;
  else if (calledMain == 8 && (roll == 2 || roll == 3 || roll == 11)) rollResult = RollResult::Chance;
  else if (calledMain == 9 && (roll == 2 || roll == 3 || roll == 11 || roll == 12)) rollResult = RollResult::Chance;
}

void revengeChance() {
 if(!revengeRolled) {
    roll1 = random(7);
    roll2 = random(7);
    rollTotal = roll1 + roll2;
    revengeRolled = true;
    if(rollTotal == calledMain) rollResult = RollResult::Loose;
    if(rollTotal == setChance) rollResult = RollResult::Win;
  }
  arduboy.println(F("Chance Roll"));
  arduboy.println();
  arduboy.print(F("Roll 1= "));
  arduboy.println(roll1);
  arduboy.print(F("Roll 2= "));
  arduboy.println(roll2);

  arduboy.println();
  arduboy.println();
  if (rollResult == RollResult::Loose) arduboy.println(F("You Lost"));
  else if (rollResult == RollResult::Win) arduboy.println(F("You Win"));
  else if (rollResult == RollResult::Chance) arduboy.println(F("Roll Again"));

  arduboy.println();
  arduboy.println(F("Press A to Cotinue"));
  arduboy.display();
  arduboy.pollButtons();
  if (arduboy.justPressed(A_BUTTON)) {
    if(rollResult == RollResult::Chance) {
      revengeRolled = false;
      gameState = GameState::RevengeChance;
    }
    else if(rollResult == RollResult::Win) {
      gameState = GameState::RevengePayOut;
      win(chanceLookup());
      winLoss = chanceLookup();
    }
    else if(rollResult == RollResult::Loose) {
      gameState = GameState::RevengePayOut;
      loose(myRevengeBet * 2);
      winLoss = -myRevengeBet * 2;
    }   
  }
  
}

int chanceLookup() {
  if (calledMain == 5 && rollTotal == 4) return (myRevengeBet*4)/3;
  else if (calledMain == 5 && rollTotal == 6) return (myRevengeBet*4)/5;
  else if (calledMain == 5 && rollTotal == 7) return (myRevengeBet*2)/3;
  else if (calledMain == 5 && rollTotal == 8) return (myRevengeBet*4)/5;
  else if (calledMain == 5 && rollTotal == 9) return (myRevengeBet*1)/1;
  else if (calledMain == 5 && rollTotal == 10) return (myRevengeBet*4)/3;

  if (calledMain == 6 && rollTotal == 4) return (myRevengeBet*5)/3;
  else if (calledMain == 6 && rollTotal == 5) return (myRevengeBet*5)/4;
  else if (calledMain == 6 && rollTotal == 7) return (myRevengeBet*5)/3;
  else if (calledMain == 6 && rollTotal == 8) return (myRevengeBet*1)/1;
  else if (calledMain == 6 && rollTotal == 9) return (myRevengeBet*5)/4;
  else if (calledMain == 6 && rollTotal == 10) return (myRevengeBet*5)/3;
  
  if (calledMain == 7 && rollTotal == 4) return (myRevengeBet*2)/1;
  else if (calledMain == 7 && rollTotal == 5) return (myRevengeBet*3)/2;
  else if (calledMain == 7 && rollTotal == 6) return (myRevengeBet*6)/5;
  else if (calledMain == 7 && rollTotal == 8) return (myRevengeBet*6)/5;
  else if (calledMain == 7 && rollTotal == 9) return (myRevengeBet*3)/2;
  else if (calledMain == 7 && rollTotal == 10) return (myRevengeBet*2)/1;

  if (calledMain == 8 && rollTotal == 4) return (myRevengeBet*5)/3;
  else if (calledMain == 8 && rollTotal == 5) return (myRevengeBet*5)/4;
  else if (calledMain == 8 && rollTotal == 6) return (myRevengeBet*1)/1;
  else if (calledMain == 8 && rollTotal == 7) return (myRevengeBet*5)/6;
  else if (calledMain == 8 && rollTotal == 9) return (myRevengeBet*5)/4;
  else if (calledMain == 8 && rollTotal == 10) return (myRevengeBet*5)/3;

  if (calledMain == 8 && rollTotal == 4) return (myRevengeBet*5)/3;
  else if (calledMain == 8 && rollTotal == 5) return (myRevengeBet*5)/4;
  else if (calledMain == 8 && rollTotal == 6) return (myRevengeBet*1)/1;
  else if (calledMain == 8 && rollTotal == 7) return (myRevengeBet*5)/6;
  else if (calledMain == 8 && rollTotal == 9) return (myRevengeBet*5)/4;
  else if (calledMain == 8 && rollTotal == 10) return (myRevengeBet*5)/3;

  if (calledMain == 9 && rollTotal == 4) return (myRevengeBet*4)/3;
  else if (calledMain == 9 && rollTotal == 5) return (myRevengeBet*1)/1;
  else if (calledMain == 9 && rollTotal == 6) return (myRevengeBet*4)/5;
  else if (calledMain == 9 && rollTotal == 7) return (myRevengeBet*2)/3;
  else if (calledMain == 9 && rollTotal == 8) return (myRevengeBet*4)/5;
  else if (calledMain == 9 && rollTotal == 10) return (myRevengeBet*4)/3;
}

void revengePayOut() {
  if(winLoss > 0) {
    arduboy.print(F("You Won "));
    arduboy.print(winLoss);
    arduboy.println(F(" gold"));
  }
  if(winLoss < 0) {
    arduboy.print(F("You Lost "));
    arduboy.print(-winLoss);
    arduboy.println(F(" gold"));
  }  
  arduboy.display();
  arduboy.pollButtons();
  if (arduboy.justPressed(B_BUTTON) || arduboy.justPressed(A_BUTTON)){
    gameState = GameState:: MenuScreen;
    setupRevenge = true;
  }
}


/////////////////////////////////////
//Lizard Racing
////////////////////////////////////
const char liz0[] PROGMEM = "Iv";
const char liz1[] PROGMEM = "Jhox";
const char liz2[] PROGMEM = "Edres";
const char liz3[] PROGMEM = "Urthi";
const char liz4[] PROGMEM = "Odhu";
const char liz5[] PROGMEM = "Dulrurth";
const char liz6[] PROGMEM = "Irthi";
const char liz7[] PROGMEM = "Nurhticun";
const char liz8[] PROGMEM = "Netirre";
const char liz9[] PROGMEM = "Lortgonk";
const char liz10[] PROGMEM = "Rudegroh";
const char liz11[] PROGMEM = "Shosj";
const char liz12[] PROGMEM = "Vaess";
const char liz13[] PROGMEM = "Thacherk";
const char liz14[] PROGMEM = "Korhti";
const char liz15[] PROGMEM = "Nirhty";
const char liz16[] PROGMEM = "Boshu";
const char liz17[] PROGMEM = "Repestri";
const char liz18[] PROGMEM = "Asharu";
const char liz19[] PROGMEM = "Tork";
const char liz20[] PROGMEM = "Shisk";
const char liz21[] PROGMEM = "Doskos";
const char liz22[] PROGMEM = "Maslo";
const char liz23[] PROGMEM = "Ogge";
const char liz24[] PROGMEM = "Otes";
const char liz25[] PROGMEM = "Daltekhi";
const char liz26[] PROGMEM = "Thothric";
const char liz27[] PROGMEM = "Lo";
const char liz28[] PROGMEM = "Esh";
const char liz29[] PROGMEM = "Nalthis";
const char liz30[] PROGMEM = "Etrin";
const char liz31[] PROGMEM = "Thurdyss";
const char liz32[] PROGMEM = "Thargox";
const char liz33[] PROGMEM = "Thoggy";
const char liz34[] PROGMEM = "Egisort";
const char liz35[] PROGMEM = "Stistink";

const char * const LizardNames[] PROGMEM = {liz0, liz1, liz2,liz3,liz4,liz5,liz6,liz7,liz8,liz9,liz10,liz11,liz12,liz13,liz14,liz15,liz16,liz17,liz18,liz19,liz20,liz21,liz22,liz23,liz24,liz25,liz26,liz27,liz28,liz29,liz30,liz31,liz32,liz33,liz34,liz35};

bool setupLizardRace = true;
byte racer[4];
byte racerOdds[4];
byte lizardPosn[4];
byte lizardMoveCounter = 0;
boolean lizardsGo = false;
byte myLizard = 0;
int myLizardBet = 5;
bool lizardWinFlag = true;

void lizardRacing() {
  arduboy.println(getLizardName(racer[0]));
  arduboy.println(getLizardName(racer[1]));
  arduboy.println(getLizardName(racer[2]));
  arduboy.println(getLizardName(racer[3]));
  arduboy.pollButtons();
  if (arduboy.justPressed(B_BUTTON)) {
    setupLizardRace = true;
    gameState = GameState:: MenuScreen;
  }
  if (!lizardsGo) {
    arduboy.setCursor(0,46);
    arduboy.println(F("Press A to Go"));
  }
  if (!lizardsGo && arduboy.justPressed(A_BUTTON)) lizardsGo = true;
  if (lizardsGo) lizardMove();
  arduboy.display();
}

void lizardSetup() {
  //reset & fill racer array
  for (byte r = 0; r < 4; r++) {
    racer[r] = 200;
    racerOdds[r] = 0;
    lizardPosn[r] = 60;
  }
  do {
    for(byte  i = 0; i < 4; i++) {
      racer[i] = random(0,36);
      racerOdds[i] = random(2,13);
    }
  } while (racer[0] == racer[1] || racer[0] == racer[2] || racer[0] == racer[3] || racer[1] == racer[2] || racer[1] == racer[3] || racer[2] == racer[3]);
  lizardMoveCounter = 0;
  lizardsGo = false;
  myLizard = 0;
  myLizardBet = 5;
  setupLizardRace = false;
  lizardWinFlag = true;
}

void lizardBet() {
  if (setupLizardRace) lizardSetup();
  arduboy.clear();
  for(byte i=0; i < 4; i++){
    arduboy.print(' ');
    arduboy.print(getLizardName(racer[i]));
    arduboy.setCursor(60,arduboy.getCursorY());
    arduboy.print(F(" Odds 1:"));
    arduboy.println(racerOdds[i]);
  }
  arduboy.println();
  arduboy.println();
  arduboy.print(F("L/R Bet="));
  arduboy.print(myLizardBet);
  arduboy.print(F(" of "));
  arduboy.print(gold);
  if (myLizard == 0) arduboy.setCursor(0,0);
  if (myLizard == 1) arduboy.setCursor(0,8);
  if (myLizard == 2) arduboy.setCursor(0,16);  
  if (myLizard == 3) arduboy.setCursor(0,24);
  arduboy.print ('>');
  arduboy.display();
  arduboy.pollButtons();
  if (arduboy.justPressed(B_BUTTON)){
    gameState = GameState:: MenuScreen;
    setupLizardRace = true;
  }
  if (arduboy.justPressed(A_BUTTON)) {
    gameState = GameState::LizardRacing;
  }
  if (arduboy.justPressed(UP_BUTTON)) {
    myLizard --;
  }
  if (arduboy.justPressed(DOWN_BUTTON)) {
    myLizard ++;
  }
  if (arduboy.justPressed(LEFT_BUTTON)) {
    myLizardBet -= 5;
  }
  if (arduboy.justPressed(RIGHT_BUTTON)) {
    myLizardBet += 5 ;
  }
  if (myLizardBet > gold) myLizardBet = gold;
  else if (myLizardBet < 0) myLizardBet = 0;
  if (myLizard > 3) myLizard = 0;
  else if (myLizard < 0) myLizard = 3;
}

void lizardMove() {
  if (lizardMoveCounter == 0){
    byte posnY = 0;
    for(byte i = 0; i < 4; i++)
    {
      arduboy.setCursor(lizardPosn[i],posnY);
      arduboy.print('~');
      posnY += 8;
    }
    lizardMoveCounter ++;
  }
  else if (lizardMoveCounter < 24) {
    byte posnY = 0;
    for( byte i = 0; i < 4; i++)
    {
      if(random(1,13) < (13 - racerOdds[i])) {
          lizardPosn[i] += random(2,5);
      }
      else {
         lizardPosn[i] += 1;
      }
        
      arduboy.setCursor(lizardPosn[i],posnY);
      arduboy.print('~');
      posnY += 8;
    }
    lizardMoveCounter ++;
  }
  else  {
    byte posnY = 0;
    for( byte i = 0; i < 4; i++) {
      arduboy.setCursor(lizardPosn[i],posnY);
      arduboy.print('~');
      posnY += 8;
      lizardWinner();
    }
  }
}

void lizardWinner() {
  byte max_v = 0;
  byte max_i = 0;
 
  for ( int i = 0; i < 4; i++ )
  {
    if ( lizardPosn[i] > max_v )
    {
      max_v = lizardPosn[i];
      max_i = i;
    }
  }
  arduboy.setCursor(0,46);
  arduboy.print(getLizardName(racer[max_i]));
  arduboy.println(F(" wins"));

  
  if (max_i == myLizard){
    arduboy.print(F("You Win "));
    arduboy.println(myLizardBet + (myLizardBet * racerOdds[max_i]));
    if (lizardWinFlag) win(myLizardBet + (myLizardBet * racerOdds[max_i]));
    lizardWinFlag = false;
  }
  else {
    arduboy.print(F("You loose "));
    arduboy.print(myLizardBet);
    if (lizardWinFlag) loose(myLizardBet);
    lizardWinFlag = false;
  }

}

const __FlashStringHelper * getLizardName(uint8_t index) {
  return reinterpret_cast<const __FlashStringHelper *>(pgm_read_ptr(&LizardNames[index]));
}

void credits() {
  tinyfont.setCursor(0,0);
  if (creditScreen == 0) tinyfont.print(F("MONSTEROPOLIS IS A \nFABULOUS DESTINATION FOR\nALL WHO HAVE RICHES OR\nWISH TO BECOME RICH. COME\nFOR A STAGE SHOW, PLAY IN\nTHE CASINO, VISIT THE\nMARKETS. CONVEINENTLY\nLOCATED IN NORTHERN\nFAERUN, JUST A SHORT BOAT\nRIDE FROM MIRABAR.")); 
  if (creditScreen == 1) tinyfont.print(F("MONSTEROPOLIS WAS\nFOUNDED BY GREAT,\nBUGBEAR WARLORD\nGOREHUNGER, FRIEND OF\nTHE DWARVES, ANNIHILATOR\nOF THE HILL GIANTS, HIS\nSWASHBUCKLING BROTHER\nGREGEK, NAVIGATOR OF THE\nSKIES, AND THEIR BOON\nCOMPANION SLOOP THE BONE\nHARVESTER, OF THE LIZARD\nFOLK, PARAMOUNT OF THE\nBONE CARVERS.")); 
  if (creditScreen == 2) tinyfont.print(F("THIS RESORT WAS IMAGINED\nBY A BEN, RYAN, ANDREW\nAND DAN, A DUNGEONS AND\nDRAGONS ADVENTURING\nGROUP WHILE ATTEMPTING TO\nSAVE THE WORLD FROM THE\nWRATH OF THE GIANTS."));
  arduboy.display();
  arduboy.pollButtons();
  if(arduboy.justPressed(A_BUTTON)){
    creditScreen ++;
    if (creditScreen > 2) gameState = GameState::MenuScreen;
  }
}
