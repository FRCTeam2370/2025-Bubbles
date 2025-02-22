#include <FastLED.h>
#include <Adafruit_NeoPixel.h>

#define DATA_PIN 6
#define NUM_LEDS 48

Adafruit_NeoPixel strip(NUM_LEDS, DATA_PIN, NEO_GRB + NEO_KHZ800);



// CRGB leds[NUM_LEDS];

void setup() {
// FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
strip.begin();
strip.show();
}

void loop() {
  // Set all LEDs to red

  int bubble1[] = {0};
  int numBubble1 = sizeof(bubble1) / sizeof(bubble1[0]);

  for (int i = 0; i < numBubble1; i++) {
    strip.setPixelColor(bubble1[i], strip.Color(255, 0, 0));
  }
  strip.show();
  delay(500);

  for (int i=0; i < numBubble1; i++) {
    strip.setPixelColor(bubble1[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble2[] = {96};
  int numBubble2 = sizeof(bubble2) / sizeof(bubble2[0]);

  for (int i = 0; i < numBubble2; i++) {

    strip.setPixelColor(bubble2[i], strip.Color(255, 132, 0));
  }
  strip.show();
  delay(500);

  for (int i=0; i < numBubble2; i++) {
    strip.setPixelColor(bubble2[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble3[] = {2, 3, 94, 95};
  int numBubble3 = sizeof(bubble3) / sizeof(bubble3[0]);

  for (int i = 0; i < numBubble3; i++) {
    strip.setPixelColor(bubble3[i], strip.Color(255, 234, 0));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble3; i++) {
    strip.setPixelColor(bubble3[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble4[] = {93, 102};
  int numBubble4 = sizeof(bubble4) / sizeof(bubble4[0]);

  for (int i = 0; i < numBubble4; i++) {
    strip.setPixelColor(bubble4[i], strip.Color(166, 255, 0));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble4; i++) {
    strip.setPixelColor(bubble4[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble5[] = {4};
  int numBubble5 = sizeof(bubble5) / sizeof(bubble5[0]);

  for (int i = 0; i < numBubble5; i++) {
    strip.setPixelColor(bubble5[i], strip.Color(0, 255, 13));
  }
  strip.show();
  delay(500);

  for (int i =0; i < numBubble5; i++) {
    strip.setPixelColor(bubble5[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble6[] = {6};
  int numBubble6 = sizeof(bubble6) / sizeof(bubble6[0]);

  for (int i = 0; i < numBubble6; i++) {
    strip.setPixelColor(bubble6[i], strip.Color(0, 255, 179));
  }
  strip.show();
  delay(500);

  for (int i=0; i < numBubble6; i++) {
    strip.setPixelColor(bubble6[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble7[] = {8, 9, 88, 89, 106, 107};
  int numBubble7 = sizeof(bubble7) / sizeof(bubble7[0]);

  for (int i = 0; i < numBubble7; i++) {
    strip.setPixelColor(bubble7[i], strip.Color(0, 94, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble7; i++) {
    strip.setPixelColor(bubble7[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble8[] = {86, 109};
  int numBubble8 = sizeof(bubble8) / sizeof(bubble8[0]);

  for (int i = 0; i < numBubble8; i++) {
    strip.setPixelColor(bubble8[i], strip.Color(162, 0, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble8; i++) {
    strip.setPixelColor(bubble8[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble9[] = {85};
  int numBubble9 = sizeof(bubble9) / sizeof(bubble9[0]);

  for (int i = 0; i < numBubble9; i++) {
    strip.setPixelColor(bubble9[i], strip.Color(255, 0, 247));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble9; i++) {
    strip.setPixelColor(bubble9[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble10[] = {110, 111};
  int numBubble10 = sizeof(bubble10) / sizeof(bubble10[0]);

  for (int i = 0; i < numBubble10; i++) {
    strip.setPixelColor(bubble10[i], strip.Color(255, 0, 166));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble10; i++) {
    strip.setPixelColor(bubble10[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble11[] = {13};
  int numBubble11 = sizeof(bubble11) / sizeof(bubble11[0]);

  for (int i = 0; i < numBubble11; i++) {
    strip.setPixelColor(bubble11[i], strip.Color(255, 0, 0));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble11; i++) {
    strip.setPixelColor(bubble11[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble12[] = {83, 84};
  int numBubble12 = sizeof(bubble12) / sizeof(bubble12[0]);

  for (int i = 0; i < numBubble12; i++) {
    strip.setPixelColor(bubble12[i], strip.Color(0, 255, 76));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble12; i++) {
    strip.setPixelColor(bubble12[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble13[] = {15, 16, 81, 82};
  int numBubble13 = sizeof(bubble13) / sizeof(bubble13[0]);

  for (int i = 0; i < numBubble13; i++) {
    strip.setPixelColor(bubble13[i], strip.Color(0, 242, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble13; i++) {
    strip.setPixelColor(bubble13[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble14[] = {17, 18, 79, 80, 115, 116};
  int numBubble14 = sizeof(bubble14) / sizeof(bubble14[0]);

  for (int i = 0; i < numBubble14; i++) {
    strip.setPixelColor(bubble14[i], strip.Color(43, 255, 0));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble14; i++) {
    strip.setPixelColor(bubble14[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble15[] = {20};
  int numBubble15 = sizeof(bubble15) / sizeof(bubble15[0]);

  for (int i = 0; i < numBubble15; i++) {
    strip.setPixelColor(bubble15[i], strip.Color(0, 242, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble15; i++) {
    strip.setPixelColor(bubble15[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble16[] = {118};
  int numBubble16 = sizeof(bubble16) / sizeof(bubble16[0]);

  for (int i = 0; i < numBubble16; i++) {
    strip.setPixelColor(bubble16[i], strip.Color(43, 255, 0));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble16; i++) {
    strip.setPixelColor(bubble16[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble17[] = {21};
  int numBubble17 = sizeof(bubble17) / sizeof(bubble17[0]);

  for (int i = 0; i < numBubble17; i++) {
    strip.setPixelColor(bubble17[i], strip.Color(0, 242, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble17; i++) {
    strip.setPixelColor(bubble17[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble18[] = {21};
  int numBubble18 = sizeof(bubble18) / sizeof(bubble18[0]);

  for (int i = 0; i < numBubble18; i++) {
    strip.setPixelColor(bubble18[i], strip.Color(43, 255, 0));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble18; i++) {
    strip.setPixelColor(bubble18[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble19[] = {75, 120};
  int numBubble19 = sizeof(bubble19) / sizeof(bubble19[0]);

  for (int i = 0; i < numBubble19; i++) {
    strip.setPixelColor(bubble19[i], strip.Color(0, 242, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble19; i++) {
    strip.setPixelColor(bubble19[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble20[] = {24, 25, 72, 73};
  int numBubble20 = sizeof(bubble20) / sizeof(bubble20[0]);

  for (int i = 0; i < numBubble20; i++) {
    strip.setPixelColor(bubble20[i], strip.Color(43, 255, 0));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble20; i++) {
    strip.setPixelColor(bubble20[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble21[] = {124};
  int numBubble21 = sizeof(bubble21) / sizeof(bubble21[0]);

  for (int i = 0; i < numBubble21; i++) {
    strip.setPixelColor(bubble21[i], strip.Color(0, 242, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble21; i++) {
    strip.setPixelColor(bubble21[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble22[] = {26, 27, 70, 71};
  int numBubble22 = sizeof(bubble22) / sizeof(bubble22[0]);

  for (int i = 0; i < numBubble22; i++) {
    strip.setPixelColor(bubble22[i], strip.Color(0, 242, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble22; i++) {
    strip.setPixelColor(bubble22[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble23[] = {68, 69, 126, 127};
  int numBubble23 = sizeof(bubble23) / sizeof(bubble23[0]);

  for (int i = 0; i < numBubble23; i++) {
    strip.setPixelColor(bubble23[i], strip.Color(0, 242, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble23; i++) {
    strip.setPixelColor(bubble23[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble24[] = {30, 67};
  int numBubble24 = sizeof(bubble24) / sizeof(bubble24[0]);

  for (int i = 0; i < numBubble24; i++) {
    strip.setPixelColor(bubble24[i], strip.Color(0, 242, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble24; i++) {
    strip.setPixelColor(bubble24[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble25[] = {32, 33, 64, 65, 130, 131};
  int numBubble25 = sizeof(bubble25) / sizeof(bubble25[0]);

  for (int i = 0; i < numBubble25; i++) {
    strip.setPixelColor(bubble25[i], strip.Color(0, 242, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble25; i++) {
    strip.setPixelColor(bubble25[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble26[] = {63, 132};
  int numBubble26 = sizeof(bubble26) / sizeof(bubble26[0]);

  for (int i = 0; i < numBubble26; i++) {
    strip.setPixelColor(bubble26[i], strip.Color(0, 242, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble26; i++) {
    strip.setPixelColor(bubble26[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble27[] = {34};
  int numBubble27 = sizeof(bubble27) / sizeof(bubble27[0]);

  for (int i = 0; i < numBubble27; i++) {
    strip.setPixelColor(bubble27[i], strip.Color(0, 242, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble27; i++) {
    strip.setPixelColor(bubble27[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble28[] = {61, 134};
  int numBubble28 = sizeof(bubble28) / sizeof(bubble28[0]);

  for (int i = 0; i < numBubble28; i++) {
    strip.setPixelColor(bubble28[i], strip.Color(0, 242, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble28; i++) {
    strip.setPixelColor(bubble28[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble29[] = {36};
  int numBubble29 = sizeof(bubble29) / sizeof(bubble29[0]);

  for (int i = 0; i < numBubble29; i++) {
    strip.setPixelColor(bubble29[i], strip.Color(0, 242, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble29; i++) {
    strip.setPixelColor(bubble29[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble30[] = {60};
  int numBubble30 = sizeof(bubble30) / sizeof(bubble30[0]);

  for (int i = 0; i < numBubble30; i++) {
    strip.setPixelColor(bubble30[i], strip.Color(0, 242, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble30; i++) {
    strip.setPixelColor(bubble30[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int bubble31[] = {37};
  int numBubble31 = sizeof(bubble31) / sizeof(bubble31[0]);

  for (int i = 0; i < numBubble31; i++) {
    strip.setPixelColor(bubble31[i], strip.Color(0, 242, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numBubble31; i++) {
    strip.setPixelColor(bubble31[i], strip.Color(0, 0, 0));
  }
  strip.show();

  int lights2370[] = {39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146};
  int numLights2370 = sizeof(lights2370) / sizeof(lights2370[0]);

  for (int i = 0; i < numLights2370; i++) {
    strip.setPixelColor(lights2370[i], strip.Color(0, 242, 255));
  }
  strip.show();
  delay(500);

  for (int i = 0; i < numLights2370; i++) {
    strip.setPixelColor(lights2370[i], strip.Color(0, 0, 0));
  }
  strip.show();

}
