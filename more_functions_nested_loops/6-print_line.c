#include "main.h"

void print_line(int n)
{
  while (n > 0)
    {
      _putchar(95);
      n--;
    }
  while (n <= 0)
    {
      _putchar('\n');
      n++;
    }
  _putchar('\n');
  return;
}
