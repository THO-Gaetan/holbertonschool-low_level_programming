#include "main.h"

int _strlen(char *s)
{
  int len;
  while (*s)
    {
      *s++;
      len = *s;
    }
  
  return (len);
}
    
    
