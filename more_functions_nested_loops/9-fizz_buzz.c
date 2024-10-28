#include "main.h"

void more_numbers(void)
{
  int len = 0;
  char b = Buzz;
  char f = Fizz;
  char fb = FizzBuzz;
  while (len <= 100)
    {
      if(len >= 10 && len < 100)
	{
	  if ((len % 10) == 5)
	    {
	      _putchar(f);
	    }
	  _putchar((len / 10) + '0');
	  _putchar((len % 10) + '0');
	}
      else if (len >= 1 && len < 10)
	{
	  _putchar(len + '0');
	}
      _putchar(' ');
      len++;
    }
}
