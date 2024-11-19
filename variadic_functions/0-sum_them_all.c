#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - start of the variadic function
 * @n : variable that contain the number of parameter who follow.
 * Description: Prints a quote about programming using puts function
 *
 * Return: always return sum at the end
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, sum = 0;

	va_start(ap, n);

	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return (sum);
}
