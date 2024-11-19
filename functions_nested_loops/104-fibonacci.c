#include <stdio.h>
/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Description: This program calculates and prints the first 98 numbers
 * in the Fibonacci sequence. The numbers are printed as integers,
 * separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	long f1 = 1, f2 = 2, temp = 0, max = 1000000000;
	long f1_head = 0, f1_tail = 0, f2_head = 0, f2_tail = 0, temp_head, temp_tail;

	while (i < 98)
	{
		if (i != 0)
			printf("%d = ", i);
		printf("%.0ld\n", f1);
		temp = f2;
		f2 += f1;
		f1 = temp;
		i++;
	}
	putchar('\n');
	return (0);
}
