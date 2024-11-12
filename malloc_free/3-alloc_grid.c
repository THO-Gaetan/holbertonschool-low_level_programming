#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - Allocates a 2D array of integers
 * @width: Width of the grid
 * @height: Height of the grid
 *
 * Return: Pointer to the 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int i = 0, n = 0;
	int **arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);
	while (n < height)
	{
		arr[n] = malloc(width * sizeof(int));
		if (arr[n] == NULL)
		{
			return (NULL);
		}
		n++;
	}

	if (width <= 0 || height <= 0)
		return (NULL);
	while (i < height)
	{
		for (n = 0; n < width; n++)
		{
			arr[i][n] = 0;
		}
		i++;
	}
	return (arr);
}
