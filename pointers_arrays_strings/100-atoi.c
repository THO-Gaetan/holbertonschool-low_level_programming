#include "main.h"

int _atoi(char *s)
{
  int i = 0;
  int neg = 1;
  char n;
  int stop = 0;
  int retain = 0;
  while (*s != '\0')
    {
      n = '0';
      while (n <= '9')
	{
	  if (*s == '-')
	    {
	      neg = -1;
	    }
	  else if (i != 0 && *s == ' ')
	    {
	      retain = 1;
	    }
	  else if (*s == n && retain == 0)
	    {
	      i = i * 10 +(*s - '0');
	    }
	  n++;
	}
      s++;
    }
  if { neg == -1)
    {
      s--;
      for (n = '0'; n <= '9'; n++)
	{
	  if (*s != n && stop == 0)
	    {
	      neg = 1;
	    }
	  else if (*s == n && stop == 0)
	    {
	      neg = -1;
	      stop = 1;
	    }
	}
    }
  return (neg * i);
}
