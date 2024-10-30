#include "main.h"

int _atoi(char *s)
{
  int i = 0;
  int len = 0;
  int neg = 1;
  while (*s != '\0')
    {
      if (s[len] == ' ')
      {
	s++;
	len++;
      }
      else if (s[len] == '-')
	{
	  neg = -1;
	  s++;
	  len++;
	}
      else if (s[len] == '+')
	{
	  s++;
	  len++;
	}
      else
	{
      i = i * 10 +(*s - '0');
      s++;
      len++;
	}
    }
  return (neg * i);
}
