#include "hardware/display.h"

#include "hardware/display_font.h"

LGFX tft;

void displayInit() {
  pinMode(3, OUTPUT);
  digitalWrite(3, HIGH);
  tft.init();
  tft.setRotation(0);
  tft.setBrightness(255);
  tft.setTextWrap(false);
  displayFontInit();
}
