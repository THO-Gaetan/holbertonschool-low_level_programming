#include <stdio.h>
#include "main.h"
#include <time.h>

void jack_bauer(void)
{
  time_t minute;
  minute = time(NULL);
  _putchar(minute);
  return;
}
