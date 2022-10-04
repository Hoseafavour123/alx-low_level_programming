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

	return (i);
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
	int i, j, len1, len2;
	char *ptr;

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if ((s1 == NULL) || (s2 == NULL) || ((s1 == NULL) && (s2 == NULL)))
		return (NULL);

	ptr = (char *) malloc((len1 + len2) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; *(s1 + i); i++)
	{
		*(ptr + i) = *(s1 + i);
	}

	for (j = 0; *(s2 + j); i++, j++)
	{
		*(ptr + i) = *(s2 + j);
	}

	*(ptr + i) = '\0';

	return (ptr);
}

