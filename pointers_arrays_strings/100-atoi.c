#include "main.h"

int _atoi(char *s)
{
  int i = 0;
  while (*s != '\0')
    {
      i = i * 10 +(*s - '0');
      s++;
    }
  return (i);
}
