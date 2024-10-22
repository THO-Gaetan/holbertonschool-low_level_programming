#include <stdio.h>
#include "main.h"

int print_last_digit(int i)
{
int n;
n = i % 10;
if (n < 0)
{
n = -n;
}
_putchar(n + '0');
return (n);
}
