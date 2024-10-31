#include "main.h"

char *string_toupper(char *str)
{
  char *n = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  char *m = "abcdefghijklmnopqrstuvwxyz";
  
  while (*str != '\0')
    {
      while (*n)
	{
	  if (*m == *str)
	    {
	      *str = *n;
	    }
	  n++;
	  m++;
	}
      n--;
      while (*n)
	{
	  n--;
	  m--;
	}
      n++;
      str++;
    }
  return (s);
}
