#include <stdlib.h>
#include "main.h"

/**
  * _strlen - calculates length of string
  * @str: string arg
  *
  * Return: string length
  */

int _strlen(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		i++;
	}

	return (i);
}

/**
  * _strdup - returns a pointer to copied string passed to it
  * @str: string arg
  *
  * Return: ponter to copied string
  */

char *_strdup(char *str)
{
	int len, i;
	char *ptr;

	if (str == NULL)
		return (NULL);
	
	len = _strlen(str) + 1;
	ptr = (char *) malloc(len * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; *(str + i); i++)
	{
		*(ptr + i) = *(str + i);
	}

	*(ptr + i) = '\0';

	return (ptr);

	free(ptr);
}

