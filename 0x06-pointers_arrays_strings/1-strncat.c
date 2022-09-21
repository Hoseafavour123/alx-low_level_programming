#include "main.h"

/**
  * _strncat - concatenates n bytes strings
  * @src: source string
  * @dest: destination string
  * @n: number of bytes
  *
  * Return: pointer to resultant string
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	i = 0;
	len = 0;

	while (dest[i])
	{
		len += 1;
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[len + j] = src[j];
	}

	dest[len + n] = '\0';

	return (dest);
}

