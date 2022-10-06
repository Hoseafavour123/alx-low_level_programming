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
	
	if (alloc_mem == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		alloc_mem[i] = 0;
	}

	return (alloc_mem);
}

