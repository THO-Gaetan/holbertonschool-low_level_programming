#include <stdio.h>

int main(void)
{
  int len = 1;
  while (len <= 100)
    {
      if(len >= 10 && len < 100)
	{
	  if((len % 5) == 0)
	    {
	      printf("Buzz");
	    }
	  else if ((len % 3) == 0)
	    {
	      printf("Fizz");
	    }
	  else
	    {
	      putchar((len / 10) + '0');
	      putchar((len % 10) + '0');
	    }
	}
      else if (len >= 1 && len < 10)
	{
	  if ((len % 5) == 0)
	    {
	      printf("Buzz");
	    }
	  else if ((len % 3) == 0)
	    {
	      printf("Fizz");
	    }
	  else
	    {
	  putchar(len + '0');
	    }
	}
      putchar(' ');
      len++;
    }
  return (0); }
