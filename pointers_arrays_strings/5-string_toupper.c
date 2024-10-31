#include "main.h"

char *string_toupper(char *s)
{
  char *n = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char *m = "abcdefghijklmnopqrstuvwxyz";
  
  while (*s != '\0')
    {
      while (*n)
	{
	  if (*m == *s)
	    {
	      *s = *n;
	    }
	  n++;
	  m++;
	}
      n = 0;
      m = 0;
      s++;
    }
  return (s);
}
