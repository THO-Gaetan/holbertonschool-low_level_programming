#include <stdio.h>
#include "main.h"

int add(int a,int b)
{
  int  c = a + b;
  if (c < 10)
    {
    _putchar(c + '0');
    }
  else
    {
      _putchar((c / 10) + '0');
      _putchar((c % 10) + '0');
    }
  return (c);
}
