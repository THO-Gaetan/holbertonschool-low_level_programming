#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Prints and returns the last digit of a number
 * @i: The integer to extract the last digit from
 *
 * Description: This function extracts the last digit of the input integer,
 * prints it using _putchar, and returns its value. It works for both
 * positive and negative integers.
 *
 * Return: The value of the last digit
 */
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
