#include "main.h"

void print_rev(char *s)
{
  while (*s)
    {
      (void)*s++;
    }
  (void)*s--;
  while (*s)
    {
    _putchar(*s--);
    }
  return;
}
