#include <stdlib.h>
#include "main.h"

/**
  * create_array - creates an;arry and initialises it with a constant byte
  *
  * @size: array size
  * @c: constant char
  *
  * Return: pointer to array
  */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;
	}

	return (ptr);
}

