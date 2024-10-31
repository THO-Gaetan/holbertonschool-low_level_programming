#include "main.h"

char *cap_string(char *str)
{
  char *s = str;
  int cap = 1, i = 0;
  char *maj = " ,;.!?\"(){}\t\n";
  while (*s)
    {
      while (*maj)
	{
	  if (*s == *maj && cap == 0)
	    {
	      cap++;
	    }
	  maj++;
	}
      /*if ((*s > 64 && *s < 91) && cap == 1)
       *{
       *  cap--;
       *}
       */
      if ((*s > 96 && *s < 123) && cap == 1)
	{
	  str[i] -= 32;
	  cap--;
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
      
