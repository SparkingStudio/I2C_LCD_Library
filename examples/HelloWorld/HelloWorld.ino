#include <Wire.h>
#include <I2C_LCD.h>
I2C_LCD LCD;
uint8_t I2C_LCD_ADDRESS = 0x51; //Device address configuration, the default value is 0x51.

//For detials of the function useage, please refer to "I2C_LCD User Manual". 
//You can download the "I2C_LCD User Manual" from I2C_LCD WIKI page: http://www.seeedstudio.com/wiki/I2C_LCD


void setup(void)
{
    //Wire.begin();         //I2C controller initialization.
    pinMode(13, OUTPUT);
}

void loop(void)
{
    //LCD.CleanAll(WHITE);    //Clean the screen with black or white.
    delay(1000);            //Delay for 1s.

    //8*16 font size��auto new line��black character on white back ground.
    //LCD.FontModeConf(Font_6x8, FM_ANL_AAA, BLACK_BAC); 
    //LCD.DispStringAt("Hello World!", 0, 10);    //Display "Hello World!" on coordinate of (0, 10).

    while(1)
    {
      digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);              // wait for a second
  digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  delay(200);              // wait for a second
      } //Wait for ever. 
}
