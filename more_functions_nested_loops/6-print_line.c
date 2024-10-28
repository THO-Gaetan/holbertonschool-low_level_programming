#include "main.h"
/**
 * print_line - Draws a straight line in the terminal
 * @n: The number of times the character _ should be printed
 *
 * Description: If n is 0 or less, the function should only print \n
 */
void print_line(int n)
{
int neg = 0;
while (n > 0)
{
_putchar(95);
n--;
}
while (n <= 0)
{
n = -n;
if (neg == 0)
{
_putchar('\n');
neg++;
}
n--;
n = -n;
}
return;
}
