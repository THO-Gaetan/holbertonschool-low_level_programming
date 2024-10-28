#include "main.h"

void print_triangle(int s)
{
  int col = s;
  int raw;
  int len = 1;
  while (col > 0)
    {
      int sp = col - len;
      raw = s;
      while (raw > 0)
	{
	  if (sp != 0)
	    {
	      _putchar(' ');
	      sp--;
	    }
	  else
	    {
	      _putchar(35);
	    }
	  raw--;
	}
      _putchar('\n');
      col--;
    }
  if (s <= 0)
    {
      _putchar('\n');
    }
  return;
}
