#include <stdio.h>
#include "main.h"

void print_alphabet_x10(void)
{
  int n = 1;
  while (n <= 10)
    {
  const char *str = "abcdefghijklmnopqrstuvwxyz\n";
  while (*str)
    {
      _putchar(*str++);
	}
  n++
  }
  return; }
