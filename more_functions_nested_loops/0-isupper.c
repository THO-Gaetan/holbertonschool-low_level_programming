#include "main.h"

int _isupper(int c)
{
  if ( c <= 90 && c >= 65)
    {
      _putchar(c);
      return (1);
    }
  else {
    return (0);
  }
  return (0);
}
