#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0, relay;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		relay = atoi(argv[i]);
		if (argv [i])
		if (relay < 0)
			sum += (-1 * relay);
		else
			sum += relay;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}