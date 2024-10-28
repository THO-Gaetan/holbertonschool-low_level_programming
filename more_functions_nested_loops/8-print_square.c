#include "main.h"
/**
 * print_square - Prints a square, followed by a new line
 * @size: Size of the square
 *
 * Description: If size is 0 or less, the function should print only a new line
 */
void print_square(int s)
{
int col = s;
int raw;
if (s > 0)
{
while (col > 0)
{
raw = s;
while (raw > 0)
{
_putchar(35);
raw--;
}
col--;
_putchar('\n');
}
}
if (s <= 0 && col == s)
{
_putchar('\n');
}
return;
}
  
