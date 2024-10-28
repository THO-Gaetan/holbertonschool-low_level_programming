#include "main.h"

void print_triangle(int s)
{
  while (s > 0)
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
      _putchar('\n');
      s--;
    }
  if (s <= 0)
    {
      _putchar('\n');
    }
  return;
}
