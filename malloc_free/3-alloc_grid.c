#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int i = 0, n = 0;
	int **arr = malloc(width * sizeof(int));
	
	if (arr == NULL)
		return (NULL);
	while (n < width)
	{
		arr[n] = malloc(height * sizeof(int));
		n++;
	}

	if (width <= 0 || height <= 0)
		return (NULL);
	if (arr == NULL)
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
