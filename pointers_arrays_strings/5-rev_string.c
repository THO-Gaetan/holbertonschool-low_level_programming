#include "main.h"

void rev_string(char *s)
{
  int len = 0;
  int rev, i;
  while (*s)
    {
      (void)*s++;
      len++;
    }
  i = len - 1;
  while (i >= 0)
    {
      rev += s[i];
      i--;
    }
  return;
}
