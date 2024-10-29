#include "main.h"

void rev_string(char *s)
{
  int len = strlen(s);
  char temp;
  int i = 0;
  while (i < len - 1; i++)
    {
      temp = str[i];
      str[i] = str[len - i - 1];
      str[leng - i - 1] = temp;
    }
  return;
}
