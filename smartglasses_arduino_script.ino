
// Import required libraries
#include <ArducamSSD1306.h>    // Modification of Adafruit_SSD1306 for ESP8266 compatibility
#include <Adafruit_GFX.h>   // Needs a little change in original Adafruit library (See README.txt file)
#include <Wire.h>           // For I2C comm, but needed for not getting compile error

/*
HardWare I2C pins
A4   SDA
A5   SCL
*/

// Pin definitions
#define OLED_RESET  16  // Pin 15 -RESET digital signal

#define LOGO16_GLCD_HEIGHT 16
#define LOGO16_GLCD_WIDTH  16
String textt = "sdadsa";

ArducamSSD1306 display(OLED_RESET); // FOR I2C


void setup(void)
{
  // Start Serial
  Serial.begin(9600);
 pinMode(5,OUTPUT);
 digitalWrite(5,HIGH); // powers Bluetooth

  // SSD1306 Init
  display.begin();  // Switch OLED
  // Clear the buffer.
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(10,20);
  display.print("test");
display.display();
 if (Serial.available())
 {
  
   Serial.read();
 }

}


void loop() {

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(10,20);
display.display();
 if (Serial.available())
 {
    display.clearDisplay();T
   String textt = Serial.readString();
    display.print(textt);
 display.display();

 }

}
