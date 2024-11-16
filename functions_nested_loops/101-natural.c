#include <stdio.h>

int main(void)
{
	int j = 1024, i = 0;

	while (i < j)
	{
		if (i % 3 == 0)
		{
			printf("%d", i);
			putchar(',');
		}
		else if (i % 5 == 0)
		{
			printf("%d", i);
			putchar(',');
		}
		i++;
	}
	putchar('\n');
	return (0);
}