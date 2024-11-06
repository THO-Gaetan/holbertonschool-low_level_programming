#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int i = 1, j;
	int sum = 0, relay;
	char *zero = "0";

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	while (i < argc)
	{
		relay = atoi(argv[i]);
		j = strcmp(argv[i], zero);
		if (relay == 0 && j != 0)
		{
			printf("Error\n");
			return(1);
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