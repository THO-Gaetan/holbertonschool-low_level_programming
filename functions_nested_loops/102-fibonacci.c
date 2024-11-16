#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Description: This program calculates and prints the first 50 numbers
 * in the Fibonacci sequence. The numbers are printed as integers,
 * separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	long f1 = 1, f2 = 2, temp = 0;

	while (i < 50)
	{
		if (i != 0)
			printf(", ");
		printf("%.0ld", f1);
		temp = f2;
		f2 += f1;
		f1 = temp;
		i++;
	}
	putchar('\n');
	return (0);
}
