#include <stdio.h>

int main(void)
{
	float i = 0, f1 = 1, f2 = 2, temp;

	while (i < 50)
	{
		printf("%.0f = %.0f\n", i + 1, f1);
		temp = f2;
		f2 += f1;
		f1 = temp;
		i++;
	}
	return (0);
}
