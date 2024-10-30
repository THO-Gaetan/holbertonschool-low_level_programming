#include "main.h"

int _atoi(char *s)
{
  int i = 0;
  int neg = 1;
  char n;
  int stop;
  while (*s != '\0')
    {
      n = '0';
      while (n <= '9')
	{
	  if (*s == '-')
	    {
	      neg = -1;
	    }
	  else if (*s == n)
	    {
	      i = i * 10 +(*s - '0');
	    }
	  n++;
	}
      s++;
    }
  for (n = '0'; n <= '9'; n++)
    {
      if (*s - 1 != n && stop == 0)
	{
	  neg = 1;
	}
      else if (*s - 1 == n && stop == 0)
	{
	  neg = -1;
	  stop = 1;
	}
    }
  return (neg * i);
}
