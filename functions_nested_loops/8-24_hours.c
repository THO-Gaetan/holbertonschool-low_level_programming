#include <stdio.h>
#include "main.h"

void jack_bauer(void)
{
  int hour, minute;
  hour = 0;
    minute = 0;
  while (hour < 24)
    {
      while (minute < 60)
	{
_putchar((hour / 10)+ '0');
_putchar((hour % 10)+ '0');
_putchar(':');
_puthcar((minute / 10)+ '0');
_putchar((minute % 10)+ '0');
	  minute++;
	}
      hour ++
	}
  return;
}
