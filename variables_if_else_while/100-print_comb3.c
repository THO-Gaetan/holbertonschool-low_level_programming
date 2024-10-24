#include <stdio.h>

int main(void)
{
  int two_digit;
  int i;
  for (two_digit = 01; two_digit <= 89; two_digit++)
    {
      if (two_digit < 10)
	{
	  i = 0;
	  while (i <=1)
	    {
	      putchar(two_digit * i);
	    }
	}
      else
	{
	  putchar((two_digit / 10) + '0');
	  putchar((two_digit % 10) + '0');
	}
      if ( two_digit !=89)
	{
	  putchar(',');
	  putchar(' ');
	}
    }
  return (0);
}
