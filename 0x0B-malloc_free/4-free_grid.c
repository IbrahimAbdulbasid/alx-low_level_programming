#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free 2d array
 * @grid: 2d grides
 * @height: height dimension of grides
 * Return: Nothing
*/
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
