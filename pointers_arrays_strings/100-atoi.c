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
	  else if (*s == ';')
	    {
	      stop = 1;
	    }
	  else if (*s == n && stop != 1)
	    {
	      i = i * 10 +(*s - '0');
	    }
	  n++;
	}
      if {*s == ' ')
	{
	  neg = 1;
	}
      s++;
    } 
  return (neg * i);
}
