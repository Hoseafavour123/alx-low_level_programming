#include <stdlib.h>
#include "main.h"

/**
  * free_grid - frees a 2D grid of memory
  * @grid: 2D grid
  * @height: rows of the grid
  *
  * Return: void
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}

