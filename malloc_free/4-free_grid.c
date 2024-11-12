#include "main.h"
#include <stdlib.h>

void free_grid(int **grid, int height)
{
	for (; height > 0; height--)
	{
		free(grid[height]);
	}
	free(grid);
}
