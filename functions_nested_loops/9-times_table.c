#include <stdio.h>
#include "main.h"

void times_table(void)
{
  int table, result;
  table = 0;
  result = 0;
  while (table <= 9)
    {
      while (result <= 9)
	{
	  _putchar(result + '0');
	  if (result != 9)
	    {
	  _putchar(44);
	  _putchar(32);
	    }
	  result++;
	}
      table++;
    }
  return;
}
