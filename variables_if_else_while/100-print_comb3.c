#include <stdio.h>

int main(void)
{
  int two_digit;
  for (two_digit = 01; two_digit <= 89; two_digit++)
    {
      if (two_digit < 10)
	{
	  return (0);
          putchar(two_digit + '0');
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
