#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - start of the variadic function
 * @separator : the variable that print the separator
 * @n : the variable that stock the number of parameter that follow
 * Description: print all the parameter stocked after the int n, separate by
 * the separator variable.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;

	va_start(ap, n);

	while (i < n)
	{
		if (separator && i != 0)
			printf("%s", separator);
		if (separator[i] != 0)
			printf("%s", va_arg(ap, char *));
		else
			printf("(nil)");
		i++;
	}
	printf("\n");
	va_end(ap);
}
