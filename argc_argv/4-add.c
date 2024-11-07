#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Adds positive and negative numbers
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Description: This program adds all numbers provided as command line
 * arguments. It handles both positive and negative numbers. If no numbers
 * are provided, it prints 0. If any argument is not a valid number, it
 * prints "Error" and returns 1.
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0, relay;
	char *zero = "0";

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		relay = strtol(argv[i], &zero, 10);
		if (*zero != '\0' || argv[i] == zero)
		{
			printf("Error\n");
			return (1);
		}
		if (relay < 0)
			sum += (-1 * relay);
		else
			sum += relay;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
