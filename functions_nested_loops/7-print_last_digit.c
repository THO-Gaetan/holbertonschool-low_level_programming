#include <stdio.h>
#include "main.h"

int print_last_digit(int i)
{
  int n;
  n = i % 10;
  _putchar(n);
  return (n);
}
