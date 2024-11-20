#include "variadic_functions.h"
#include <stdio.h>

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
				printf("%.0f", va_arg(ap, double));
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
