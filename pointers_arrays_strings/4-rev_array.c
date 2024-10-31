#include "main.h"

void reverse_array(int *a, int n)
{
  int OUPS = 0;
  int HELP = n;
  int ALAID;
  while (OUPS <= HELP)
    {
      ALAID = a[OUPS];
      a[OUPS] = a[HELP];
      a[HELP] = ALAID;
      OUPS++;
      HELP--;
    }
  return;
}
