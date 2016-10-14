/*
  Simple LCD demo for Blair's FFL Dashboard.
  

  The core of this code is derived from 
  
  LiquidCrystal Library - Serial Input
  In my demo we are going to put a Cat5 plug on this to make it easy to dettach.
 
 The circuit:                                   Cat5:
 * LCD RS pin to digital pin 12                 Orange
 * LCD Enable pin to digital pin 11             Blue
 * LCD D4 pin to digital pin 5                  Green
 * LCD D5 pin to digital pin 4                  Brown
 * LCD D6 pin to digital pin 3                  White/Orange
 * LCD D7 pin to digital pin 2                  White/Blue
 * LCD R/W pin to ground                        White/Green
 * 
 * Contrast Control:
 * 10K resistor:
 * ends to +5V and ground                       White/Brown
 * wiper to LCD VO pin (pin 3)

 Original library by David A. Mellis
 Improvments by Limor Fried(LadyAda) & Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/LiquidCrystalSerial
 */

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // initialize the serial communications:
  Serial.begin(9600);
}

void loop()
{
  // when characters arrive over the serial port...
  if (Serial.available()) {
    // wait a bit for the entire message to arrive
    delay(100);

    Serial.println("Bring It On");
    // clear the screen
    lcd.clear();
    // read all the available characters
    while (Serial.available() > 0) {
      // display each character to the LCD
      lcd.write(Serial.read());
    }
  }
}
