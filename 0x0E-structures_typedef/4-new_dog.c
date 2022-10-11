#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _strlen - computes the length of a string
  * @s: string argument
  *
  * Return: string length
  */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;

	return (i + 1);
}

/**
  * _strcpy - copies string from src to dest
  * @src: source string
  * @dest: destination string
  *
  * Return: pointer to resultant string
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}

	*(dest + i) = '\0';

	return (dest);
}

/**
  * new_dog - crestes a  new dog item
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  *
  * Return: pointer to dog item
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(_strlen(name) * sizeof(char));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(_strlen(owner) * sizeof(char));
	if (my_dog->owner == NULLL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->name = _strcpy(my_dog->name, name);
	my_dog->age = age;
	my_dog->owner = _strcpy(my_dog->owner, owner);

	return (my_dog);
}

