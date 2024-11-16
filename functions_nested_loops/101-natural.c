#include <stdio.h>
/**
 * main - Calculates the sum of multiples of 3 or 5 below 1024
 *
 * Description: This program calculates the sum of all multiples of 3 or 5
 * that are below 1024 (exclusive). It then prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j = 1024, i = 0, res = 0;

	while (i < j)
	{
		if (i % 3 == 0)
		{
			res += i;
		}
		else if (i % 5 == 0)
		{
			res += i;
		}
		i++;
	}
	printf("%d", res);
	putchar('\n');
	return (0);
}
