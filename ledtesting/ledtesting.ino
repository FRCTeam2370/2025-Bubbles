 #include <FastLED.h>
#include <Adafruit_NeoPixel.h>

#define DATA_PIN 6
#define NUM_LEDS 147
void setBubbleColor(int bubble, uint32_t color);
Adafruit_NeoPixel strip(NUM_LEDS, DATA_PIN, NEO_GRB + NEO_KHZ800);



// CRGB leds[NUM_LEDS];

void setup() {
// FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
strip.begin();
  strip.setBrightness(50);
strip.show();
}

//blink the entire strip with different colors 

void loop() {
  // Set all LEDs to red

  //setBubbleColor(20, strip.Color(43, 255, 0));
  //strip.show();

  //theaterChase(strip.Color(43, 255, 0),100);
  //theaterChaseRainbow(50);
  //bubbleFloat();
  //BlinkyBlinkahs(strip.Color(43, 255, 0));
  //CoralGrabbed();
  //AlgaeGrabbed();
  //HungerSatisfied();
  //BlueClimbingAnim();
  //RedClimbingAnim();
  DisabeledAnim();
}

  void DisabeledAnim() {
  uint32_t color1 = strip.Color(0, 255, 0);
  uint32_t color2 = strip.Color(0, 253, 0);
  uint32_t color3 = strip.Color(0, 251, 0);
  uint32_t color4 = strip.Color(0, 249, 0);
  uint32_t color5 = strip.Color(0, 247, 0);

  while (true) {
    int a = 0;
    int b = -1;
    while (a < 45){
    strip.clear();
    if (a < 45){
    setBubbleColor(2370,strip.Color(43, 255, 0));
    setBubbleColor(a, color1);
    setBubbleColor(a-1, color2);
    setBubbleColor(a-2, color3);
    setBubbleColor(a-3, color4);
    setBubbleColor(a-4, color5);
    a++;
  } else b = 45;

  if (b > 0) {
    setBubbleColor(2370,strip.Color(43, 255, 0));
    setBubbleColor(b, color1);
    setBubbleColor(b+1, color2);
    setBubbleColor(b+2, color3);
    setBubbleColor(b+3, color4);
    setBubbleColor(b+4, color5);
    b--;
  } else a = 0;
  
  
    strip.show();
    delay(100);
  }
  }
  }

 void BlinkyBlinkahs(uint32_t color){
  setBubbleColor(2370, strip.Color(0, 255, 17));

  for (int i = 0; i < 32; i++){
  setBubbleColor(i, color);
  }
  strip.show();
  delay(20);
  for (int i = 0; i < 32; i++){
    setBubbleColor(i, strip.Color(0, 0, 0));
  }
  
  strip.show();
  delay(250);
}

void CoralGrabbed(){
  uint32_t color1 = strip.Color(204, 243, 252);
  uint32_t color2 = strip.Color(204, 243, 252);
  uint32_t color3 = strip.Color(222, 249, 255);
  uint32_t bcolor1 = strip.Color(204, 243, 252);
  uint32_t bcolor2 = strip.Color(204, 243, 252);
  uint32_t bcolor3 = strip.Color(222, 249, 255);
  while (true) {
  int a = 0;
  int b = -22;
  while (a < 35 || b < 35) {
    strip.clear();
    
    if (a < 35) {
    setBubbleColor(a, color1);
    setBubbleColor(a-1, color2);
    setBubbleColor(a-2, color3);
    a++;
    } else {
      a = 0;
    }

    if (b < 35) {
    setBubbleColor(b, bcolor1);
    setBubbleColor(b-1, bcolor2);
    setBubbleColor(b-2, bcolor3);
      b++;
    } else {
      b = 0;
    }

    setBubbleColor(2370, strip.Color(0, 255, 17));

    strip.show();
    delay(100);
    }
  }
}

void AlgaeGrabbed(){
  uint32_t color1 = strip.Color(53, 190, 171);
  uint32_t color2 = strip.Color(53, 190, 171);
  uint32_t color3 = strip.Color(4, 204, 222);
  uint32_t bcolor1 = strip.Color(53, 190, 171);
  uint32_t bcolor2 = strip.Color(53, 190, 171);
  uint32_t bcolor3 = strip.Color(4, 204, 222);
  while (true) {
  int a = 0;
  int b = -22;
  while (a < 35 || b < 35) {
    strip.clear();
    
    if (a < 35) {
    setBubbleColor(a, color1);
    setBubbleColor(a-1, color2);
    setBubbleColor(a-2, color3);
    a++;
    } else {
      a = 0;
    }

    if (b < 35) {
    setBubbleColor(b, bcolor1);
    setBubbleColor(b-1, bcolor2);
    setBubbleColor(b-2, bcolor3);
      b++;
    } else {
      b = 0;
    }

    setBubbleColor(2370, strip.Color(0, 255, 17));

    strip.show();
    delay(100);
    }
  }
}  

void HungerSatisfied(){
  setBubbleColor(2370, strip.Color(0, 255, 17));
  for (int i = 0; i < 32; i++){
    setBubbleColor(i, strip.Color(255, 255, 255));
  }
  strip.show();
  delay(20);
  for (int i = 0; i < 32; i++){
    setBubbleColor(i,strip.Color(0, 0, 0));
  }
  strip.show();
  delay(250);
}

void BlueClimbingAnim() {
  uint32_t color1 = strip.Color(0, 0, 255);
  uint32_t color2 = strip.Color(0, 0, 253);
  uint32_t color3 = strip.Color(0, 0, 251);
  uint32_t color4 = strip.Color(0, 0, 249);
  uint32_t color5 = strip.Color(0, 0, 247);
  uint32_t color6 = strip.Color(0, 0, 245);
  uint32_t color7 = strip.Color(0, 0, 243);
  uint32_t color8 = strip.Color(0, 0, 241);
  uint32_t color9 = strip.Color(0, 0, 239);
  uint32_t color10 = strip.Color(0, 0, 237);
  uint32_t color11 = strip.Color(0, 0, 235);
  uint32_t color12 = strip.Color(0, 0, 233);
  for(int a=0; a<45; a++){
    strip.clear();
    setBubbleColor(2370, strip.Color(0, 255, 17));
    setBubbleColor(a, color1);
    setBubbleColor(a-1, color2);
    setBubbleColor(a-2, color3);
    setBubbleColor(a-3, color4);
    setBubbleColor(a-4, color5);
    setBubbleColor(a-5, color6);
    setBubbleColor(a-6, color7);
    setBubbleColor(a-7, color8);
    setBubbleColor(a-8, color9);
    setBubbleColor(a-9, color10);
    setBubbleColor(a-10, color11);
    setBubbleColor(a-11, color12);
    strip.show();
    delay(10);
}
}

void RedClimbingAnim() {
  uint32_t color1 = strip.Color(255, 0, 0);
  uint32_t color2 = strip.Color(255, 2, 0);
  uint32_t color3 = strip.Color(255, 4, 0);
  uint32_t color4 = strip.Color(255, 6, 0);
  uint32_t color5 = strip.Color(255, 8, 0);
  uint32_t color6 = strip.Color(255, 10, 0);
  uint32_t color7 = strip.Color(255, 12, 0);
  uint32_t color8 = strip.Color(255, 14, 0);
  uint32_t color9 = strip.Color(255, 16, 0);
  uint32_t color10 = strip.Color(255, 18, 0);
  uint32_t color11 = strip.Color(255, 20, 0);
  uint32_t color12 = strip.Color(255, 22, 0);



  for(int a=0; a<45; a++){
    strip.clear();
    setBubbleColor(2370, strip.Color(0, 255, 17));
    setBubbleColor(a, color1);
    setBubbleColor(a-1, color2);
    setBubbleColor(a-2, color3);
    setBubbleColor(a-3, color4);
    setBubbleColor(a-4, color5);
    setBubbleColor(a-5, color6);
    setBubbleColor(a-6, color7);
    setBubbleColor(a-7, color8);
    setBubbleColor(a-8, color9);
    setBubbleColor(a-9, color10);
    setBubbleColor(a-10, color11);
    setBubbleColor(a-11, color12);
    strip.show();
    delay(10);
}
}

void bubbleFloat(){

  uint32_t color1 = strip.Color(43, 255, 0);
  uint32_t color2 = strip.Color(0, 255, 0);
  uint32_t color3 = strip.Color(0, 255, 40);
  for(int a=0; a<34; a++){
    strip.clear();
    if (a >= 30){
      setBubbleColor(2370,strip.Color(43, 255, 0));
    }
    else{
      setBubbleColor(2370,strip.Color(0, 0, 0));
    }
    
    setBubbleColor(a, color1);
    setBubbleColor(a-1, color2);
    setBubbleColor(a-2, color3);
    strip.show();
    delay(100);
  }
}
void theaterChase(uint32_t color, int wait) {
  for(int a=0; a<10; a++) {  // Repeat 10 times...
    for(int b=0; b<3; b++) { //  'b' counts from 0 to 2...
      strip.clear();         //   Set all pixels in RAM to 0 (off)
      // 'c' counts up from 'b' to end of strip in steps of 3...
      for(int c=b; c<strip.numPixels(); c += 3) {
        setBubbleColor(c, color); // Set pixel 'c' to value 'color'
      }
      strip.show(); // Update strip with new contents
      delay(wait);  // Pause for a moment
    }
  }
}


// Rainbow-enhanced theater marquee. Pass delay time (in ms) between frames.
void theaterChaseRainbow(int wait) {
  int firstPixelHue = 0;     // First pixel starts at red (hue 0)
  for(int a=0; a<30; a++) {  // Repeat 30 times...
    for(int b=0; b<3; b++) { //  'b' counts from 0 to 2...
      strip.clear();         //   Set all pixels in RAM to 0 (off)
      // 'c' counts up from 'b' to end of strip in increments of 3...
      for(int c=b; c<32; c += 3) {
        // hue of pixel 'c' is offset by an amount to make one full
        // revolution of the color wheel (range 65536) along the length
        // of the strip (strip.numPixels() steps):
        int      hue   = firstPixelHue + c * 65536L / 32;
        uint32_t color = strip.gamma32(strip.ColorHSV(hue)); // hue -> RGB
        setBubbleColor(c, color); // Set pixel 'c' to value 'color'
      }
      strip.show();                // Update strip with new contents
      delay(wait);                 // Pause for a moment
      firstPixelHue += 65536 / 90; // One cycle of color wheel over 90 frames
    }
  }
}




void setBubbleColor(int bubble, uint32_t color){

switch (bubble) {
  case 0:
  strip.setPixelColor(98, color);
  strip.setPixelColor(97, color);
    // statements
    break;
  case 1:
  strip.setPixelColor(96, color);
  break;
    // statements
    case 2:
    strip.setPixelColor(95, color);
    strip.setPixelColor(100, color);
    strip.setPixelColor(101, color);
    strip.setPixelColor(94, color);
    break;
    case 3:
    strip.setPixelColor(4, color);
    strip.setPixelColor(93, color);
    break;
    case 4:
    strip.setPixelColor(102, color);
    break;
    case 5:
    strip.setPixelColor(104, color);
    break;
    case 6:
    strip.setPixelColor(106, color);
    strip.setPixelColor(107, color);
    strip.setPixelColor(88, color);
    strip.setPixelColor(89, color);
    strip.setPixelColor(8, color);
    strip.setPixelColor(9, color);
    break;
    case 7:
    strip.setPixelColor(11, color);
    strip.setPixelColor(86, color);
    break;
    case 8:
    strip.setPixelColor(110, color);
    break;
    case 9:
    strip.setPixelColor(12, color);
    break;
    case 10:
    strip.setPixelColor(12, color);
    break;
    case 11:
    strip.setPixelColor(111, color);
    break;
    case 12:
    strip.setPixelColor(83, color);
    strip.setPixelColor(84, color);
    break;
    case 13:
    strip.setPixelColor(81, color);
    strip.setPixelColor(82, color);
    strip.setPixelColor(114, color);
    strip.setPixelColor(113, color);
    break;
    case 14:
    strip.setPixelColor(18, color);
    strip.setPixelColor(17, color);
    strip.setPixelColor(79, color);
    strip.setPixelColor(80, color);
    strip.setPixelColor(115, color);
    strip.setPixelColor(116, color);
    break;
    case 15:
    strip.setPixelColor(118, color);
    break;
    case 16:
    strip.setPixelColor(20, color);
    break;
    case 17:
    strip.setPixelColor(119, color);
    break;
    case 18:
    strip.setPixelColor(22, color);
    strip.setPixelColor(75, color);
    break;
    case 19:
    strip.setPixelColor(122, color);
    strip.setPixelColor(123, color);
    strip.setPixelColor(72, color);
    strip.setPixelColor(73, color);
    strip.setPixelColor(24, color);
    break;
    case 20:
    strip.setPixelColor(26, color);
    break;
    case 21:
    strip.setPixelColor(70, color);
    strip.setPixelColor(71, color);
    strip.setPixelColor(125, color);
    strip.setPixelColor(124, color);
    break;
    case 22:
    strip.setPixelColor(68, color);
    strip.setPixelColor(69, color);
    strip.setPixelColor(29, color);
    strip.setPixelColor(28, color);
    break;
    case 23:
    strip.setPixelColor(67, color);
    strip.setPixelColor(128, color);
    break;
    case 24:
    strip.setPixelColor(33, color);
    strip.setPixelColor(32, color);
    strip.setPixelColor(64, color);
    strip.setPixelColor(65, color);
    strip.setPixelColor(130, color);
    break;
    case 25:
    strip.setPixelColor(132, color);
    strip.setPixelColor(131, color);
    break;
    case 26:
    strip.setPixelColor(63, color);
    strip.setPixelColor(34, color);
    break;
    case 27:
    strip.setPixelColor(132, color);
    break;
    case 28:
    strip.setPixelColor(36, color);
    strip.setPixelColor(61, color);
    strip.setPixelColor(35, color);
    break;
    case 29:
    strip.setPixelColor(134, color);
    break;
    case 30:
    strip.setPixelColor(60, color);
    break;
    case 31:
    strip.setPixelColor(135, color);
    break;
    case 2370:
    strip.setPixelColor(39, color);
    strip.setPixelColor(40, color);
    strip.setPixelColor(41, color);
    strip.setPixelColor(42, color);
    strip.setPixelColor(43, color);
    strip.setPixelColor(44, color);
    strip.setPixelColor(45, color);
    strip.setPixelColor(46, color);
    strip.setPixelColor(47, color);
    strip.setPixelColor(48, color);
    strip.setPixelColor(49, color);
    strip.setPixelColor(50, color);
    strip.setPixelColor(51, color);
    strip.setPixelColor(52, color);
    strip.setPixelColor(53, color);
    strip.setPixelColor(54, color);
    strip.setPixelColor(55, color);
    strip.setPixelColor(56, color);
    strip.setPixelColor(57, color);
    strip.setPixelColor(58, color);
    strip.setPixelColor(137, color);
    strip.setPixelColor(138, color);
    strip.setPixelColor(139, color);
    strip.setPixelColor(141, color);
    strip.setPixelColor(142, color);
    strip.setPixelColor(143, color);
    strip.setPixelColor(144, color);
    strip.setPixelColor(145, color);
    strip.setPixelColor(146, color);
    break;
  default:
    // statements
    break;
}
}