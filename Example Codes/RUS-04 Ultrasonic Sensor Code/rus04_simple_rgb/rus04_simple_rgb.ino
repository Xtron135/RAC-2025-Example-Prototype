#include "RGBLed.h"

// Set the pin nr wired to the ultrasonic sensor's pin marked "RGB" or "RGB_IN":
const int RGBpin = 2;  

// The ultrasonic sensor has 6 built-in leds in total: 3 in each cylinder.
RGBLed ultrasonicRGB(RGBpin, 6);

void setup() {
// Set the 3 leds in the first cylinder to one colour, 
// passing values from 0 to 255 for red, green, and blue.
for(int ledNr = 1; ledNr <= 3; ledNr++) {
 ultrasonicRGB.setColor(ledNr, 200, 255, 0);  //yellow
}

// Set the leds in the other cylinder individually:
ultrasonicRGB.setColor(4, 255, 0, 0);  //red
ultrasonicRGB.setColor(5, 0, 255, 0);  //green

// Alternatively you can pass a hex colour value:
ultrasonicRGB.setColor(6, 0x0000FF);  //blue

// Apply the changes:
ultrasonicRGB.show();
}

void loop() {
}