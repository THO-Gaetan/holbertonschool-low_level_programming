#include "main.h"
/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: The number of times the character \ should be printed
 *
 * Description: If n is 0 or less, the function should only print a \n
 */
void print_diagonal(int n)
{
int len = 0;
int len2;
while (n > 0)
{
_putchar(92);
_putchar('\n');
n--;
if (n != 0)
{
len = len + 1;
len2 = len;
while (len2 > 0)
{
_putchar(' ');
len2--;
}
}
}
if (n <= 0 && len == 0)
{
_putchar('\n');
}
return;
}
