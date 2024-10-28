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
      _putchar(92);
      _putchar(110);
      n++;
    }
  return;
}
