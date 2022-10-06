#include <stdlib.h>
#include "main.h"

/**
  * _strlen - computes lenth of string
  * @s: argument
  *
  * Return: string length
  */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}

	return (i);
}

/**
  * string_nconcat - concatenates strings
  * @s1: 1st arg
  * @s2: 2nd arg
  * @n: bytes of s2 to concatenate
  *
  * Return: pointee to concatenated string
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *alloc_mem;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1) + 1;
	len2 = _strlen(s2) + 1;

	if (n >= len2)
		n = len2;

	alloc_mem = (char *) malloc((len1 + n) * sizeof(char));
	if (alloc_mem == NULL)
	{
		free(alloc_mem);
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		alloc_mem[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		alloc_mem[i++] = s2[j];
	}

	alloc_mem[i] = '\0';

	return (alloc_mem);
}

