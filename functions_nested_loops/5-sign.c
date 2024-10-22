#include <stdio.h>
#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: The integer to check
 *
 * Description: This function determines the sign of a given integer and
 * prints the corresponding sign character. It prints '+' for positive numbers,
 * '-' for negative numbers, and '0' for zero. The function also returns a
 * value indicating the sign of the number.
 *
 * Return: 1 and prints '+' if n is greater than zero
 *         0 and prints '0' if n is zero
 *        -1 and prints '-' if n is less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
return (0);
}
