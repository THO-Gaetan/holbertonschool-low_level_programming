#include <stdio.h>
#include "main.h"

void times_table(void)
{
  int table, result, base;
  table = 0;
  base = 0;
  result = 0;
  while (table <= 9)
    {
      while (base <= 9)
	{
	  result = table * base;
	  if (base <= 9 && base != 0)
	    {
	  _putchar(44);
	  _putchar(32);
	    }
	  if (result <= 9)
	    {
	      if (base != 0)
		{
		_putchar(32);
		_putchar(result + '0');
		}
	      else {
	      _putchar(result + '0');
	      }
	    }
	  else
	    {
	  _putchar((result / 10) + '0');
	  _putchar((result % 10) + '0');
	    }
	  base++;
	}
      _putchar('\n');
      table++;
      base = 0;
    }
  return;
}
