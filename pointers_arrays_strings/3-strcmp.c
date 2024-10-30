#include "main.h"

int _strcmp(char *s1, char *s2)
{
  char *oups = s1;
  char *help = s2;
  int run = 0;
  int runv2 = 0;
  while (*oups)
    {
      run++;
      oups++;
    }
  while (*help)
    {
      runv2++;
      help++;
    }
  if (run > runv2)
    {
      _putchar('-');
      _putchar('1');
      _putchar('3');
    }
  else if (run < runv2)
    {
      _putchar('1');
      _putchar('3');
    }
  else if (run == runv2)
    {
      _putchar('0');
    }
  return (0);
}
