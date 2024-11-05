#include "main.h"
/**
 * factorial - Calculates the factorial of a number
 * @n: The number to calculate the factorial of
 *
 * Return: The factorial of n, or -1 if n is negative
 *
 * Description: This function recursively calculates the factorial of a
 * given non-negative integer. It returns -1 for negative inputs.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
else if (n <= 1)
return (1);
return (n * factorial(n - 1));
}
