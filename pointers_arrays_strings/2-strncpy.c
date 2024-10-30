#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{
  int run = 0;
  
  while (run < n && src[run] != '\0')
    {
      dest[run] = src[run];
      run++;
    }
  return (dest);
}
