#include <stdlib.h>
#include "main.h"

/**
  * alloc_grid - returns a pointer to 2D array
  * @width: first arg
  * @height: second arg
  *
  * Return: pointer to 2D array
  */

int **alloc_grid(int width, int height)
{
	int **mem_alloc, i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	mem_alloc = (int **) malloc(height * sizeof(int *));
	if (mem_alloc == NULL)
	{
		free(mem_alloc);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		mem_alloc[i] = (int *) malloc(width * sizeof(int));

		if (mem_alloc[i] == NULL)
		{
			for (k = i; k >= 0; k--)
			{
				free(mem_alloc[k]);
			}

			free(mem_alloc);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			mem_alloc[i][j] = 0;
		}
	}

	return (mem_alloc);

}

