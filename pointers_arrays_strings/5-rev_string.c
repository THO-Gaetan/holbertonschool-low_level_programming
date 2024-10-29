#include "main.h"

void rev_string(char *s)
{
  while (*s)
    {
      (void)*s++;
    }
  (void)*s--;
  return;
}
