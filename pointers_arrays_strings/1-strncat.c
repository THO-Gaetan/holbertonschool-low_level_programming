#include "main.h"

char *_strncat(char *dest, char *src, int n)
{
  char *oups = dest;
  char *help = src;
  int run = 0;
  int runv2 = 0;
  int sum;
  int i = 0;
  while (*oups != '\0')
    {
      oups++;
      run++;
    }
  run--;
  while (*help != '\0')
    {
      help++;
      runv2++;
    }
  sum = runv2 + run;
  run++;
  while (run <= sum && i < n)
    {
      dest[run] = src[i];
      i++;
      run++;
    }
  return (dest);
}
