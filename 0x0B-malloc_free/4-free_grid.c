#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees 2D created
 * @grid: double pointer to 2D array
 * @height: height of array
 */

void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL)
		free(grid);

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
