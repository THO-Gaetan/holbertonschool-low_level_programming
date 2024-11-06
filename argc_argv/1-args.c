#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Description: This program counts the number of arguments passed to it
 * (excluding the program name) and prints the count.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc && *argv)
	{
	i++;
	}
	printf("%d\n", i - 1);
	return (0);
}
