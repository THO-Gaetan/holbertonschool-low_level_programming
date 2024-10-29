#include "main.h"

void rev_string(char *s)
{
  int len = 0;
  while (*s)
    {
      (void)*s++;
      len++;
    }
  int i = len - 1;
  int rev;
  while (i >= 0)
    {
      rev += s[i];
      i--;
    }
  return;
}
