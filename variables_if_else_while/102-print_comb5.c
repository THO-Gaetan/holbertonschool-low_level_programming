#include <stdio.h>

int main(void)
{
  int quatre, trois, deux, un;
  for (quatre = 0; quatre <= 9; quatre++)
    {
      for (trois = 0; trois <= 8; trois++)
	{
	  for (deux = 0; deux <= 9; deux++)
	    {
	      for (un = 0; un <=9; un++)
		{
		  if (trois != 0 && un == 0 && deux == 0)
		    {
		      un = trois + 1;
		    }
		  else if (deux == 0 && un == 0)
		    {
		      un = un + 1;
		    }
		  if (!(un == 1 && deux == 0 && trois == 0 && quatre == 0))
		    {
		      putchar(',');
		      putchar(' ');
		    }
		  putchar(quatre + '0');
		  putchar(trois + '0');
		  putchar(' ');
		  putchar(deux + '0');
		  putchar(un + '0');
		}
	    }
	}
    }
  putchar('\n');
  return (0);
}
