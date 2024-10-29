#include "main.h"

void reset_to_98(int *n)
{
  int *point = n;
  while (*point > 99)
    {
      *point--;
    }
  while (*point < 97)
    {
      *point++;
    }
  return;
}
