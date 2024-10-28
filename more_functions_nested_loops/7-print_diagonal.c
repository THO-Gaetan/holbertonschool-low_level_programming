#include "main.h"

void print_diagonal(int n)
{
  int len = 0;
  int len2;
  while (n > 0)
    {
      _putchar(92);
      _putchar('\n');
      len = len + 1;
      len2 = len;
      while (len2 > 0)
	{
	  _putchar(' ');
	  len2--;
	}
      n--;
    }
  if (n <= 0)
    {
      _putchar('\n');
    }
  return;
}
  
