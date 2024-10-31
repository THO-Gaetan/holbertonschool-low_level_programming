#include "main.h"
#include <string.h>

char *leet(char *str)
{
  char *s = str;
  char *oups = "aAeEoOtTlL";
  char *help = "4433007711";
  int i = 0, n = 0;
  int alaid = strlen(oups);
  while (s[i] != '\0')
    {
      while (n < alaid)
	{
	  if (s[i] == oups[n])
	    {
	      str[i] = help[n];
	    }
	  n++;
	}
      i++;
    }
  return (str);
}
