#include <stdio.h>
/**
 * main - Entry point of the program
 * @argc: The number of command line arguments
 * @argv: An array containing the command line arguments
 *
 * Description: This program prints the name of the executable (argv[0])
 * if there are any command line arguments.
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	printf("%s\n", argv[0]);
	return (0);
}
