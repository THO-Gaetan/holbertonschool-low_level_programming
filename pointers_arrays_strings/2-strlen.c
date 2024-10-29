#include "main.h"

int _strlen(char *s)
{
  int e = 0;
  while (*s)
    {
      (*s)++;
      e++;
    }
  return (e);
}
    
    
