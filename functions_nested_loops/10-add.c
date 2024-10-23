#include <stdio.h>
#include "main.h"

int add(int a,int b)
{
  a = add(a, b);
  _putchar((a / 10) + '0');
  _putchar((a % 10) + '0');
  return (0);
}
