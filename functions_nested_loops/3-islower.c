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
      else
	{
	  return (0);
	}
    }
  return (c);
}
