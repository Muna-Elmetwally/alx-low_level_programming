#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free up the memory of a 2d array
 * @grid: target memory to free
 * @height: size of array.
 *
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height <= 0)
		return;
	for (x = 0; x < height; x++)
		free(grid[(height - 1) - x]);
	free(grid);
}
