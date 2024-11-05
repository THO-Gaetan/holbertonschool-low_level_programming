#include "main.h"
/**
 * sqrt_HELP - Helper function to calculate square root recursively
 * @n: The number to calculate the square root of
 * @i: The current guess for the square root
 *
 * Return: The natural square root of n, or -1 if it doesn't exist
 */
int sqrt_HELP(int n, int i)
{
if (n < 0)
return (-1);
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (sqrt_HELP(n, i + 1));
}
/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number to calculate the square root of
 *
 * Return: The natural square root of n, or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
return (sqrt_HELP(n, 1));
}
