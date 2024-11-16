#include <stdio.h>
/**
 * main - Calculates the sum of even-valued Fibonacci terms under 4,000,000
 *
 * Description: This program generates Fibonacci numbers up to 4,000,000,
 * sums the even-valued terms, and prints the result.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	long f1 = 1, f2 = 2, res = 1, temp, endres = 0;

	while (res < 4000000)
	{
		if (res % 2 == 0)
			endres += res;
		temp = f2;
		f2 += f1;
		f1 = temp;
		res = f1;
	}
	printf("%ld\n", endres);
	return (0);
}
