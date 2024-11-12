#include "main.h"
#include <stdlib.h>

void free_grid(int **grid, int height)
{
	height -= 1
	for (; height >= 0; height--)
	{
		free(grid[height]);
	}
	free(grid);
}
