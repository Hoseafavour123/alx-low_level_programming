#include <stdlib.h>
#include "main.h"

/**
  * _realloc - reallocates a block of memory
  * @ptr: old block of memory
  * @old_size: size of old block
  * @new_size: new size of block
  *
  * Return: pointer to newly allocated memory on success, NULL on failure
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
		ptr = malloc(new_size);

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	free(ptr);

	ptr = malloc(new_size);
	return (ptr);
}
