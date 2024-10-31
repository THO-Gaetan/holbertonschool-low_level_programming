#include "main.h"

void reverse_array(int *a, int n)
{
  int b[n];
  i = 0;
  while (i < n)
    {
      b[i] = a[i];
      i++;
    }
  i--;
  while (i >= 0)
    {
      a[i] = b[i];
      i--;
    }
  return;
}
