#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees the memory allocated for a 2D grid.
 * @grid: The pointer to the 2D grid.
 * @height: The height of the grid.
 *
 * This function frees the memory previously allocated by alloc_grid.
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}

