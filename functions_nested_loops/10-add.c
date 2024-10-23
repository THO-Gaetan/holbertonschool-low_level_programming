#include <stdio.h>
#include "main.h"

int add(int a,int b)
{
  a = a + b;
  if (a < 10)
    {
    _putchar(a + '0');
    }
  else
    {
      _putchar((a / 10) + '0');
      _putchar((a % 10) + '0');
    }
  return (0);
}
