#include "main.h"

void rev_string(char *s)
{
  int len = 0;
  int  i;
  char *rev;
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
  i = 0;
  while (i <= len - 1)
    {
      s += rev[i];
      i++;
    }
  return;
}
