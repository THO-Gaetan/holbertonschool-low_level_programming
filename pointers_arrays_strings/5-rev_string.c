#include "main.h"
#include <string.h>

void rev_string(char *s)
{
  int len = strlen(s);
  char temp;
  int i = 0;
  while (i < len - 1)
    {
      temp = s[i];
      s[i] = s[len - i - 1];
      s[len - i - 1] = temp;
      i++;
    }
  return;
}
