#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
  char *help = src;
  int run = 0;
  int runv2 = 0;
  while (*help != '\0')
    {
      help++;
      run++;
    }
  while (runv2 <= run && runv2 < n)
    {
      dest[runv2] = src[runv2];
      runv2++;
    }
  return (dest);
}
