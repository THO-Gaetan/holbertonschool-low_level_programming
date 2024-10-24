#include <stdio.h>

/*int main(void)
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
	      i = two_digit * i;
	      putchar(i + '0');
	      i++;
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
  }*/
int main(void)
{
    int tens, ones;

    for (tens = 0; tens <= 8; tens++)
    {
        for (ones = tens + 1; ones <= 9; ones++)
        {
            putchar(tens + '0');
            putchar(ones + '0');
            
            if (!(tens == 8 && ones == 9))
            {
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return (0);
}
