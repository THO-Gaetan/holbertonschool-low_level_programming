#include "main.h"
/**
 * is_prime_check - Helper function to check if a number is prime
 * @n: The number to check
 * @i: The current divisor being checked
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_check(int n, int i)
{
if (n <= 1)
return (0);
else if (n != i && (n % i) == 0)
return (0);
else if (n == i && (n % i) == 0)
return (1);
return (is_prime_check(n, i + 1));
}
/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
return (is_prime_check(n, 2));
}
