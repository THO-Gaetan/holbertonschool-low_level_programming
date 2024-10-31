#include "main.h"

char *cap_string(char *str)
{
  char *s = str;
  int cap = 0, int i = 0;
  while (*s)
    {
      if (*s == '.')
	{
	  cap++;
	}
      else if ((*s > 96 && *s < 123) && cap == 1)
	{
	  str[i] -= 32;
	  cap--;
	}
      i++;
      s++;
    }
  return (str);
}
      
