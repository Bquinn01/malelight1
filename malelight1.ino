#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif
#define BUTTON_PIN   2
#define PIN    6
#define NUMPIXELS      1
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
bool oldState = HIGH;
int showType = 0;

void setup() {

  pixels.begin();
  }

void loop() {
  // put your main code here, to run repeatedly:
   bool newState = digitalRead(BUTTON_PIN);

  if (newState == HIGH) {
    // turn LED on:
    pixels.setPixelColor(1, pixels.Color(150,150,150));
  } else {
    // turn LED off:
    pixels.setPixelColor(2, pixels.Color(0,150,0));
  }

 // delay(delayval);
}
