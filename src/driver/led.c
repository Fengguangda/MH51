#include "led.h"

void initLed()
{
   P0 = 0x00;
}

void lightLed(unsigned int i)
{
	uchar setValue = 1<<i;
	P0 |= setValue;
}


