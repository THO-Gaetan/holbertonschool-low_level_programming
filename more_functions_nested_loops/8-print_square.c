#include "main.h"

void print_square(int s)
{
  int col = s;
  int raw = s;
  if (s > 0)
    {
      while (col >= 0)
	{
	  while (raw >= 0)
	    {
	      _putchar(35);
	      raw--;
	    }
	  col--;
	  _putchar('\n');
	}
    }
  if (s <= 0 && raw == s)
    {
      _putchar('\n');
    }
  return;
}
  
