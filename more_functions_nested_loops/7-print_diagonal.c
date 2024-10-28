#include "main.h"

void print_diagonal(int n)
{
  int len = 0;
  while (n > 0)
    {
      len = len + 1;
      while (len > 0)
	{
	  _putchar(' ');
	  len--;
	}
      _putchar(92);
      _putchar('\n');
      n--;
    }
  if (n <= 0)
    {
      _putchar('\n');
    }
  return;
}
  
