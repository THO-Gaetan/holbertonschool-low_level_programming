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
	float i = 0, f1 = 1, f2 = 2, temp;

	while (i < 50)
	{
		printf("%.0f, ", f1);
		temp = f2;
		f2 += f1;
		f1 = temp;
		i++;
	}
	return (0);
}
