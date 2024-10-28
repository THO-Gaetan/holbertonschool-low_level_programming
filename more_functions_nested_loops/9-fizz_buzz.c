#include "main.h"

void more_numbers(void)
{
  int len = 0;
  while (len <= 100)
    {
      if(len >= 10 && len < 100)
	{
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
