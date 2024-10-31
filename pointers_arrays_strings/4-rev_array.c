#include "main.h"

void reverse_array(int *a, int n)
{
  int OUPS = 0;
  int ALAID;
  while (OUPS < n)
    {
      ALAID = a[OUPS];
      a[OUPS] = a[n];
      a[n] = ALAID;
      OUPS++;
      n++;
    }
  return;
}
