#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - start of the variadic function
 * @separator : the variable that print the separator
 * @n : the variable that stock the number of parameter that follow
 * Description: print all the number stocked after the int n, separate by the
 * separator variable.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0, res;

	va_start(ap, n);

	while (i < n)
	{
		res = va_arg(ap, int);
		if (separator && i != 0)
			printf("%s", separator);
		printf("%d", res);
		i++;
	}
	printf("\n");
	va_end(ap);
}
