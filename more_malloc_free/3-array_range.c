#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers from min to max, inclusive
 * @min: The minimum value (included)
 * @max: The maximum value (included)
 *
 * Return: Pointer to the newly created array, or NULL if it fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
