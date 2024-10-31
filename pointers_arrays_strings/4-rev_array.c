#include "main.h"

void reverse_array(int *a, int n)
{
  int arr[n];
  int i = 0;
  while (i < n)
    {
      arr[i] = a[i];
      i++;
    }
  i--;
  while (i >= 0)
    {
      a[i] = arr[i];
      i--;
    }
  return;
}
