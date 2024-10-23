#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
  while (n <= 98)
    {
  if (n < 10)
    {
      _putchar(n + '0');
    }
  else
    {
      _putchar((n / 10) + '0');
      _putchar((n % 10) + '0');
    }
  if (n <= 97)
    {
      _putchar(44);
      _putchar(32);
    }
  n++;
    }
  return;
}
  
