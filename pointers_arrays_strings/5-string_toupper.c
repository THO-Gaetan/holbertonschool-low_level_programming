#include "main.h"

char *string_toupper(char *str)
{
  while (*str != '\0')
    {
      if (*str > 96 && *str < 123)
	{
	  *str -= 32;
	}
      str++;
    }	  
  return (str);
}
