#include <stdio.h>
#include "dog.h"

/**
  * print_dog - prints a dog item
  * @d: dog struct
  *
  * Return: void
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (!(d->name))
		printf("Name: (nil)\n");
	printf("Name: %s\n", d->name);

	if (!(d->age))
		printf("Age: (nil)\n");
	printf("Age: %f\n", d->age);

	if (!(d->owner))
		printf("Owner: (nil)\n");
	printf("Owner: %s\n", d->owner);
}

