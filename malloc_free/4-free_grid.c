#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2D grid previously created by alloc_grid function
 * @grid: The grid to be freed
 * @height: The height of the grid
 *
 * Description: This function frees the memory allocated for a 2D grid.
 * It first frees each row of the grid, then frees the array of pointers.
 */
void free_grid(int **grid, int height)
{
	height -= 1;
	for (; height >= 0; height--)
	{
		free(grid[height]);
	}
	free(grid);
}
