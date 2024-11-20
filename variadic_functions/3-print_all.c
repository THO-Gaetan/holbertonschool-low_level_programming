#include "variadic_functions.b"
#include <stdio.h>

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s", va_arg(ap, char));
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'f':
				printf("%.0f", va_arg(ap, float));
				break;
			case "s":
				printf("%s", va_arg(ap, char *));
				break;
			default:
				i++;
				continue;
		}
		printf()
		i++;
	}
}
