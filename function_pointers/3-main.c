#include "3-calc.h"

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
if ((strcmp(argv[3], "%") || strcmp(argv[3], "/")) && (num1 == 0 || num2 == 0))
{
	printf("Error\n");
	exit(100);
}
	res = arg2(num1, num2);
	printf("%d\n", res);
	return (0);
}
