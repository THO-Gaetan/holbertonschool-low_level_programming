#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
  int i = 0;
  int sum;
  while (i < n)
    {
      sum += a[i];
      i++;
      printf("%d", sum);
      if (i != n)
	{
	  _putchar(',');
	  _putchar(' ');
	}
    }
}
