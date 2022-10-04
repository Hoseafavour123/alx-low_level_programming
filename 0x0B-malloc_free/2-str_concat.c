#include <stdlib.h>
#include "main.h"


/**
  * _strlen - returns length of a string
  * @s: argument
  *
  * Return: string length
  */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
	{
		i++;
	}

	return (i + 1);
}

/**
  * str_concat - concatenates two strings
  * @s1: first string
  * @s2: second string
  *
  * Return: pointer to resultant string
  */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *ptr;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	ptr = (char *) malloc((len1 + len2) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		*(ptr + i) = *(s1 + i);
	}

	for (i = 0; i < len2; i++)
	{
		*(ptr + len1 + i) = *(s2 + i);
	}

	*(ptr + len1 + i) = '\0';

	return (ptr);
}

