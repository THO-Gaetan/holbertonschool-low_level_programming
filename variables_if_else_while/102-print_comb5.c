#include <stdio.h>

int main(void)
{
	int un = 0, deux, i = 0, j = 0;
	while (un <= 98)
	{
		deux = un + 1;
		while (deux <= 99)
		{
			i = un / 10;
			j = un % 10;
			putchar(i + '0');
			putchar(j + '0');
			putchar(' ');
			i = deux / 10;
			j = deux % 10;
			putchar(i + '0');
			putchar(j + '0');
			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		deux++;
		}
	un++;
	}
	return (0);
}
