
#include "mbed.h"
#include "uLCD_4DGL.h"

// uLCD_4DGL uLCD(D1, D0, D2); // serial tx, serial rx, reset pin;
PwmOut PWM1(D0);
Serial pc( USBTX, USBRX );

int main()
{
    
    // uLCD.printf("106060024\n"); //Default Green on black text

  
    // uLCD.locate(1,2);
    // uLCD.line(12, 12 , 52, 12, GREEN);
    // uLCD.line(12, 12 , 12, 52, GREEN);
    // uLCD.line(52, 52, 52, 12, GREEN);
    // uLCD.line(52, 52, 12, 52, GREEN);

    float value = 0;
    bool flag = true;
    while(1) {
        PWM1.period(0.001);
        PWM1 = value;
        // if(flag) {
        //     value += 0.1;
        //     if(value > 1) {
        //         value = 0.9;
        //         flag = false;
        //     }
        // }
        // else {
        //     value -= 0.1;
        //     if(value < 0) {
        //         value = 0.1;
        //         flag = true;
        //     }
        // }
        pc.printf("%1.3f\r\n", PWM1);
        wait(0.1);
    }
    
}