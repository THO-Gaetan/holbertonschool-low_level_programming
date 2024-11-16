#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Description: This program prints all possible combinations of two
 * two-digit numbers, ranging from 00 to 99. The numbers are separated
 * by a space, and the combinations are separated by a comma and a space.
 * The combinations are printed in ascending order.
 *
 * Return: Always 0 (Success)
 */
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
			if (un != 98 || deux != 99)
			{
				putchar(',');
				putchar(' ');
			}
		deux++;
		}
	un++;
	}
	putchar('\n');
	return (0);
}
