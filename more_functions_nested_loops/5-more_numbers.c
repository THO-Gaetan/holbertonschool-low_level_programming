#include "main.h"

void more_numbers(void)
{
  int i = 48;
  int reset = 0;
  while (i <= 57 && reset <= 1)
    {
      if (reset == 1 && i <= 52)
	{
	  _putchar(49);
	}
      if ( reset == 0 && i <= 52)
	{
	  _putchar(i);
	}
      if (i == 57)
	{
	  i = 48;
	  reset = reset + 1;
	}
      else
	{
	  i++;
	}
    }
  _putchar('\n');
  return;
}
  
	  
