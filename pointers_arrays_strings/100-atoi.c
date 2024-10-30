#include "main.h"

int _atoi(char *s)
{
  int i = 0;
  int neg = 1;
  char n;
  while (*s != '\0')
    {
      n = '0';
      while (n <= '9')
	{
	  if (*s == '-')
	    {
	      neg = -1;
	    }
	  else if (*s == ';')
	    {
	      break;
	    }
	  else if (*s == n)
	    {
	      i = i * 10 +(*s - '0');
	    }
	  n++;
	}
      s++;
    }
  return (neg * i);
}
