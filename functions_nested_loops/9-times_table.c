#include <stdio.h>
#include "main.h"

void times_table(void)
{
  int table, result;
  table = 0;
  base = 0;
  result = 0;
  while (table <= 9)
    {
      while (base <= 9)
	{
	  result ⁼ table * base;
	  _putchar(result + '0');
	  if (base != 9)
	    {
	  _putchar(44);
	  _putchar(32);
	    }
	  base++;
	}
      table++;
    }
  return;
}
