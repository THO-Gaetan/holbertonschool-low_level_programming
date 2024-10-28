#include "main.h"

void print_line(int n)
{
  int neg = 0;
  while (n > 0)
    {
      _putchar(95);
      n--;
    }
  while (n <= 0)
    {
      n = -n;
      _putchar('\n');
      n--;
      n = -n;
    }
  return;
}
