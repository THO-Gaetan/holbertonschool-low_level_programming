#include "main.h"

int _strlen(char *s)
{
  int len = 0;
  while (*s)
    {
      (void)*s++;
      len++
    }
  
  return (len);
}
    
    
