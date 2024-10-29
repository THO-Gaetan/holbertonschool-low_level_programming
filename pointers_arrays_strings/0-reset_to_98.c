#include "main.h"

void reset_to_98(int *n)
{
  while (*n > 98)
    {
      (*n)--;
    }
  while (*n < 98)
    {
      (*n)++;
    }
  return;
}
