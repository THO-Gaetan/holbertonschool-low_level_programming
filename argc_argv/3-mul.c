#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Description: This program multiplies two numbers provided as command line
 * arguments. If the number of arguments is not exactly 3 (program name and
 * two numbers), it prints "Error" and returns 1. Otherwise, it multiplies
 * the two numbers and prints the result.
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
