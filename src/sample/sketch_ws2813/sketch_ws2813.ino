#include <Arduino.h>
#include <Adafruit_NeoPixel.h>

//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)

//  parameters: number of LEDs, pin number, LED type
Adafruit_NeoPixel ledstrip = Adafruit_NeoPixel(40, 6, NEO_GRB + NEO_KHZ800);

#define MAX 220

int c = 0;

void setup() {
  ledstrip.begin();
}

void loop() {
  for (int i = 0; i < 20; i++) {
    int t = c + i;
    ledstrip.setPixelColor(i * 2, (3 * t) % MAX, (7 * t) % MAX, (11 * t) % MAX);
  }

  ledstrip.show();
  delay(100);
  c++;
}
