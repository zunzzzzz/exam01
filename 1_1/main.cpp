// uLCD-144-G2 basic text demo program for uLCD-4GL LCD driver library
//
#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;

int main()
{
    // basic printf demo = 16 by 18 characters on screen
    uLCD.printf("106060024\n"); //Default Green on black text

  
    uLCD.locate(1,2);
    uLCD.line(12, 12 , 52, 12, GREEN);
    uLCD.line(12, 12 , 12, 52, GREEN);
    uLCD.line(52, 52, 52, 12, GREEN);
    uLCD.line(52, 52, 12, 52, GREEN);
    // uLCD.triangle(1+10, 2+10, 1+10, 4+10, 3+10, 4+10, GREEN);
    // uLCD.triangle(3+10, 2+10, 1+10, 2+10, 3+10, 4+10, GREEN);
}