#include "3-calc.h"

int main(int argc, char *argv[])
{
	int arg1, arg3, res;
	int (*arg2)(int, int);

	if (argc != 4)
		return (0);
	arg1 = atoi(argv[1]);
	arg3 = atoi(argv[3]);
	arg2 = get_op_func(argv[2]);
	res = arg2(arg1, arg3);
	printf("%d\n", res);
	return (0);
}
