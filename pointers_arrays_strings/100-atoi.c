#include "main.h"

int _atoi(char *s)
{
  int i = 0;
  int neg = 1;
  char n = '0';
  while (*s != '\0')
    {
      while (n <= '9')
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
	  else if (*s == n)
	    {
	      i = i * 10 +(*s - '0');
	      s++;
	    }
	  else
	    {
	      s++;
	    }
	  n++;
	}
    }
  return (neg * i);
}
