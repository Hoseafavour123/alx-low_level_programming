#include <stdlib.h>
#include "main.h"

/**
  * _calloc - allocates memory for an array
  * @nmemb: number of blocks
  * @size: size in bytes of each blocks
  *
  * Return: pointer to allocated blocks
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	void *alloc_mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alloc_mem = (void *) malloc(size * nmemb);

	for (i = 0; i < nmemb; i++)
	{
		(alloc_mem + i) = (void *) malloc(size);
		if ((alloc_mem + i) == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(alloc_mem + j);
			}

			free(alloc_mem);
			return (NULL);
		}
	}

	for (i = 0; i < nmemb; i++)
	{
		alloc_mem[i] = 0;
	}

	return (alloc_mem);
}

