#include "main.h"

char *cap_string(char *str)
{
  char *s = str;
  int cap = 1, i = 0;
  char *maj = " ,;.!?\"(){}\t\n";
  while (*s)
    {
      if ((*s > 96 && *s < 123) && cap == 1)
	{
	  str[i] -= 32;
	  cap--;
	}
      else
	{
	  cap--;
	}
      while (*maj)
	{
	  if (*s == *maj && cap == 0)
	    {
	      cap++;
	    }
	  maj++;
	}
      maj--;
      while (*maj)
	{
	  maj--;
	}
      maj++;
      i++;
      s++;
    }
  return (str);
}
      
