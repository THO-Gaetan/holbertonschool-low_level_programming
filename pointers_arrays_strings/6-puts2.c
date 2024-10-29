#include "main.h"

void puts2(char *str)
{
int len = 0;
while(len%2 == 0 && *str)
  {
    _putchar(*str++);
    len++;
  }
 return;
}
