#include "main.h"

void reset_to_98(int n)
{
  int *point = &n;
  while (*point > 99)
    {
      &n--;
    }
  while (*point < 97)
    {
      &n++;
    }
  return;
}
