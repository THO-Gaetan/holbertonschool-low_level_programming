#include "main.h"
/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14
 *
 * Description: Uses _putchar to print each number
 */
void more_numbers(void)
{
int n = 0;
while (n <= 9)
{
int i = 48;
int reset = 0;
while (i <= 57 && reset <= 1)
{
if (reset == 1 && i <= 52)
{
_putchar(49);
}
if (reset == 0 || i <= 52)
{
_putchar(i);
}
if (i == 57)
{
i = 48;
reset = reset + 1;
}
else
{
i++;
}
}
n++;
_putchar('\n');
}
return;
}
