#include <stdio.h>
#include "main.h"

void print_times_table(int n)
{
	int col = 0, raw, res;

	while (col <= n)
	{
		if (n > 15 || n < 0)
			return;
		raw = 0;
		while (raw <= n)
		{
			res = col * raw;
			if (res >= 10 && res < 100)
				_putchar((res / 10) + '0');
			if (res >= 100)
			{
				_putchar(((res / 10) / 10) + '0');
				_putchar(((res / 10) % 10) + '0');
			}
			_putchar((res % 10) + '0');
			if (raw != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			raw++;
		}
		_putchar('\n');
		col++;
	}
}
