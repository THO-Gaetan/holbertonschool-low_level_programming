#include "3-calc.h"
/**
 * main - The function that will execute all the program
 * @argc : the integer that count the number of argument
 * @argv : the string that stored all the argument
 * Description: the function allowed us to call function from different file
 * to print the result of the sum between the argv[1] and the argv[3] using
 * the operator stored in argv[2] printing "Error" if we have too much
 * argument in argv[] or if the operator is not what we expected.
 * print error if we try to divide or modulo a number by 0
 * Return: return 0 if success else exit
 */
int main(int argc, char *argv[])
{
	int num1, num2, res;
	int (*arg2)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	arg2 = get_op_func(argv[2]);
	if (arg2 == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "%") == 0 || strcmp(argv[2], "/") == 0) &&  num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = arg2(num1, num2);
	printf("%d\n", res);
	return (0);
}
