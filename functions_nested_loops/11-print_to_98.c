#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
  while (n != 98)
    {
      if (n < 0)
	{
	  _putchar('-');
	  n = -n;
	}
  if (n < 10)
    {
      _putchar(n + '0');
    }
  else if (n < 100)
    {
      _putchar((n / 10) + '0');
      _putchar((n % 10) + '0');
    }
  else if (n < 1000)
    {
      _putchar((n / 100) + '0');
      _putchar(((n / 10) % 10) + '0');
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
    }
  if (n == 98)
    {
      _putchar((n / 10) + '0');
      _putchar((n % 10) + '0');
    }
  _putchar('\n');
  return;
}
  
