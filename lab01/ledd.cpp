#include "mbed.h"

void Ledd(DigitalOut &ledpin)
{
    for (int i = 0; i < 4; ++i)
    {                     //blink for 4 times
        ledpin = !ledpin; //toggle led
        ThisThread::sleep_for(100ms);
    }
}