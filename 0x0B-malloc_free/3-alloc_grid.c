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
	int **ptr;
	long unsigned int i;

	if ((width == 0 || height == 0) || (width < 0 || height < 0))
		return (NULL);

	ptr = (int **) malloc((width * height) * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (sizeof(ptr) / sizeof(int)); i++)
	{
		**(ptr + i) = 0;
	}

	return (ptr);
}

