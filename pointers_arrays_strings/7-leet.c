#include "main.h"

char *leet(char *str)
{
  char *s = str;
  char *oups = "aAeEoOtTlL";
  char *help = "4433007711";
  int i = 0;
  int n;
  while (s[i] != '\0')
    {
      n = 0;
      while (oups[n] != '\0')
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
