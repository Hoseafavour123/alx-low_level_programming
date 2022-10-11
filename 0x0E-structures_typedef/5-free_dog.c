#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - frees a dog item of type dog_t
  * @d: dog to be freed
  *
  * Return: void
  */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return (NULL);

	free(d->name);
	free(d->owner);
	free(d);
}

