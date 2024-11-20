#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - start of your variadic function.
 * @format : the variable that permit to find which type we need to print
 * Description: we are creating a function that check the type of every element
 * of the function using the format variable, then we print when we get the
 * right type and we are looking for the next variable, then start with a new
 * line.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	char *sep = "";
	va_list ap;

	if (format == NULL)
		return;
	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(ap, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(ap);
}
