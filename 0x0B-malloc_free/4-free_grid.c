#include "main.h"

/**
 * free_grid - A Function To Free A Grid
 * @grid: The Grid We Want To Free
 * @height: The Height of The Grid
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
