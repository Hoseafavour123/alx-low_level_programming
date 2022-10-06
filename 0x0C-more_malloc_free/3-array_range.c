#include <stdlib.h>
#include "main.h"

/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  *
  * Return: pointer to array of int
  */

int *array_range(int min, int max)
{
	int *ptr, i;

	if (min > max)
		return (NULL);

	ptr = malloc((max - min) * sizeof(int));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i <= (max - min); i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}

