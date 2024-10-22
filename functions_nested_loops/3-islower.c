#include <stdio.h>
#include "main.h"

int _islower(int c)
{
  const char *str = "abcdefghijklmnopqrstuvwxyz";
  while (*str)
    {
      if (*str == 'c')
	{
	  return (1);
	}
      else if (*str != 'c')
	{
	  return (0);
	}
      str++;
    }
  return (c);
}
