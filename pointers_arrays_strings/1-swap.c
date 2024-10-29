#include "main.h"

void swap_int(int *a, int *b)
{
  int sa, sb;
  sa = *a;
  sb = *b;
  while (*a > sb)
    {
      (*a)--;
    }
  while (*b < sa)
    {
      (*b)++;
    } 
  return;
}
