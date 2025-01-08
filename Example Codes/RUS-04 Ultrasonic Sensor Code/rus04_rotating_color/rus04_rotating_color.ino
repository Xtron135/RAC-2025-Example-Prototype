#include "RGBLed.h"

const int RGBpin = 2;  

// The ultrasonic sensor has 6 built-in leds in total: 3 in each cylinder.
RGBLed ultrasonicRGB(RGBpin, 6);

// Set up some hex colours:
const long RED    = 0xFF0000;
const long ORANGE = 0xFF8800;
const long YELLOW = 0xFFFF00;
const long GREEN  = 0x00FF00;
const long BLUE   = 0x0000FF;
const long PURPLE = 0xFF00FF;

// Put the colours in an array:
const long RAINBOW[6] = {RED, ORANGE, YELLOW, GREEN, BLUE, PURPLE};
int index = 0;

void setup(){
  
}


void loop() {
// Shift the rainbow array's index across [0] to [5], red to purple:
index += 1;
if(index > 5) {index = 0;}

// Set the colours for all leds, shifting at each loop:
for(int ledNr = 1; ledNr <= 6; ledNr++) {
 int colourNr = (index + ledNr % 2) % 6;
 ultrasonicRGB.setColor(ledNr, RAINBOW[colourNr]);
}
ultrasonicRGB.show();

// Change the colours with a certain interval.
// The smaller the delay, the faster the animation.
delay(150);
}