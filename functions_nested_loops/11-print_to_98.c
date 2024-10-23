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
  if (n != 98)
    {
      _putchar(44);
      _putchar(32);
    }
  if (n < 98)
    {
    n++;
    }
  else if (n > 98)
    {
    n--;
    }
  _putchar('\n');
  return;
}
  
