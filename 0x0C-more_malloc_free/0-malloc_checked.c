#include <stdlib.h>
#include "main.h"

/**
  * malloc_checked - allocates memeory using malloc
  * @b: number of bytes
  *
  * Return: void pointer
  */

void *malloc_checked(unsigned int b)
{
	void *alloc_mem;

	alloc_mem = malloc(b);

	if (alloc_mem == NULL)
	{
		free(alloc_mem);
		exit(98);
	}

	return (alloc_mem);
}

