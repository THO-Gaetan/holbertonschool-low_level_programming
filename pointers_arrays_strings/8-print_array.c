#include "main.h"

void print_array(int *a, int n)
{
  int i = 0;
  int sum;
  while (i < n)
    {
      sum += a[i];
      i++;
      _putchar(sum + '0');
      if (i != n)
	{
	  _putchar(',');
	  _putchar(' ');
	}
    }
}
