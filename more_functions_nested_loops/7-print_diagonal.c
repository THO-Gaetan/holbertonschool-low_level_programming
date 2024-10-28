#include "main.h"

void print_diagonal(int n)
{
  while (n > 0)
    {
    _putchar(92);
    _putchar('\n');
    while (n +1 >= 0)
      {
	_putchar(' ');
	n--;
      }
    }
  return;
}
  
