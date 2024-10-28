#include <stdio.h>
#include "main.h"

void print_times_table(int n)
{
  int col = 0;
  int raw = 0;
  while (col <= n)
    {
      if (n > 15 && n < 0)
	{
	  break;
	}
      while (raw <= n)
	{
	  putchar(n + '0');
	  if (raw != n)
	    {
	      putchar(',');
	      putchar(' ');
	    }
	  raw++;
	}
      col++;
    }
  return;
}
