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
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (n = 0; n < i; n++)
			{
				free(arr[n]);
			}
			free(arr);
			return (NULL);
		}
		for (n = 0; n < width; n++)
		{
			arr[i][n] = 0;
		}
	}
	return (arr);
}
