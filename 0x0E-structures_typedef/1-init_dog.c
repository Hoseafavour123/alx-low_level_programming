#include "dog.h"

/**
  * init_dog - initialise structure to the passed arguments
  * @d: pointer to element of type struct dog
  * @name: 2nd arg
  * @age: 3rd arg
  * @owner: 4th arg
  *
  * Return: void
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	else
	{
		d -> name = name;
		d -> age = age;
		d -> owner = owner;
	}
}

