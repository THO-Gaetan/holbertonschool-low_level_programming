#include <stdio.h>
#include "main.h"
/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number up to which the times table should be printed
 *
 * Description: This function prints the times table for the given number n,
 * starting from 0 and going up to n. If n is greater than 15 or less than 0,
 * the function does not print anything.
 */
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
				if (res < 100)
					_putchar(' ');
				if (res < 10)
					_putchar(' ');
				_putchar(' ');
			}
			raw++;
		}
		_putchar('\n');
		col++;
	}
}
