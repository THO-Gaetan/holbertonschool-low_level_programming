#include "main.h"

char *cap_string(char *str)
{
  char *s = str;
  int cap = 1, i = 0;
  while (*s)
    {
      if (*s == ('.' || '\t' || '\n' || '!') && cap == 0)
	{
	  cap++;
	}
      else if ((*s > 64 && *s < 91) && cap == 1)
	{
	  cap--;
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
      
