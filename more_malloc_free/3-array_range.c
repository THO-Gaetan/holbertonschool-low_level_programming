#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	if (max == 0)
	{
		return (NULL);
	}
	arr = malloc(max * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	while (min < max)
	{
		arr[min] = min;
		min++;
	}
	return (arr);
}
