#include <stdio.h>

int main(void)
{
  int third, second, one;
  third = 0;
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
              if (!(third == 7 && second == 8 && one == 9))
		{
		  putchar(',');
		  putchar(' ');
		}
	      one++;
	    }
	  second++;
	}
      third++;
    }
  return (0);
}
