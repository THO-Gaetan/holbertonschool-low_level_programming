#include "main.h"

void puts2(char *str)
{
int len = 0;
while(*str)
  {
    if (len%2 == 0)
      {
	_putchar(*str);
	len++;
      }
    str++;
  }
 return;
}
