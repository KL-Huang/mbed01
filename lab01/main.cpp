#include "mbed.h"

DigitalOut myled(LED1);
DigitalOut myled2(LED3);

void Led(DigitalOut &ledpin);
void Ledd(DigitalOut &ledpin);

int main()
{
    myled = 1;
    myled2 = 1;
    while (true)
    {
        Led(myled2);
        Ledd(myled);
    }
}