#include "main.h"

int _atoi(char *s)
{
  int i = 0;
  int neg = 1;
  while (*s != '\0')
    {
      if (*s == ' ')
      {
	s++;
      }
      else if (*s == '-')
	{
	  neg = -1;
	  s++;
	}
      else if (*s == '+')
	{
	  s++;
	}
      else
	{
	  i = i * 10 +(*s - '0');
	  s++;
	}
    }
  return (neg * i);
}
