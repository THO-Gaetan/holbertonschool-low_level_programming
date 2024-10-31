#include "main.h"

char *cap_string(char *str)
{
  char *s = str;
  int cap = 0, i = 0;
  while (*s)
    {
      if (*s == '.' && cap == 0)
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
      
