#include "main.h"

void print_diagonal(int n)
{
  int len;
  while (n => 0)
    {
    _putchar(92);
    _putchar('\n');
    len = n + 1;
    while (len >= 0)
      {
	_putchar(' ');
	len--;
      }
    n--;
    }
  return;
}
  
