#include "main.h"

void print_triangle(int s)
{
  int col = s;
  while (col > 0)
    {
      int len = 1;
      while (len <= s)
	{
	  int sp = s - len;
	  if (sp != 0)
	    {
	      _putchar(' ');
	      sp--;
	    }
	  else
	    {
	      _putchar(35);
	    }
	  len++;
	}
      col--;
    }
  if (s <= 0)
    {
      _putchar('\n');
    }
  return;
}
