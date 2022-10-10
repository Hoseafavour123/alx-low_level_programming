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
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age < 0)
			printf("Age: (nil)\n");
		else
			printf("%f\n", d->age);

		if (d->owner == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", d->owner);
	}
}
