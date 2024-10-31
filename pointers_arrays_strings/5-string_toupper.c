#include "main.h"

char *string_toupper(char *str)
{
  int n;
  
  while (*str != '\0')
    {
      n = 97;
      while (n <= 122)
	{
	  if (n == *str)
	    {
		*str = n - 32;
	    }
	  n++;
	}
      str++;
    }
  return (str);
}
