#include "main.h"
/**
 * print_most_numbers - Prints numbers from 0 to 9, excluding 2 and 4
 *
 * Description: Uses _putchar to print each number
 */
void print_most_numbers(void)
{
int i = 48;
while (i <= 57)
{
if (i != 50 && i != 52)
{
_putchar(i);
i++;
}
else
{
i++;
}
}
_putchar('\n');
return;
}
