#include <stdio.h>

int main(void)
{
  int third, second, one;
  while (third <= 7)
    {
      second = third + 1;
      while (second <= 8)
	{
	  one = second + 1;
	  while (one <= 9)
	    {
	      putchar(third + '0');
	      putchar(second + '0');
	      putchar(one + '0');
	      one++;
	    }
	  second++;
	}
      third++;
    }
  return (0);
}
