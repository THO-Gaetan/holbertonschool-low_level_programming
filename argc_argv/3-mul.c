#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	printf("Error\n");
	return (1);
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf ("%d\n", sum);
	}
	return (0);
}