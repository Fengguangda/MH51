#include "led.h"

void initLed()
{
   P0 = 0x00;
}

/*
  unsigned int which:to control which led will be light
*/
void lightLed(unsigned int which)
{
	uchar setValue = 1<<which;
	P0 |= setValue;
}


