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
	va_list ap;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				break;
			case 's':
				str = va_arg(ap, char*);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				i++;
				continue;
		}
		i++;
		if (format[i])
			printf(", ");
	}
	va_end(ap);
	printf("\n");
}
