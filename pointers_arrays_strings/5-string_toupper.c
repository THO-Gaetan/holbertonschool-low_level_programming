#include "main.h"

char *string_toupper(char *str)
{
  char *s = str;
  int i = 0;
  while (*s != '\0')
    {
      if (*s > 96 && *str < 123)
	{
	  str[i] -= 32;
	}
      i++;
      s++;
    }	  
  return (str);
}
