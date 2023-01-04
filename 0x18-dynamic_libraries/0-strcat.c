#include "main.h"

/**
  * _strcat - concatenates two strings
  * @dest: destination string
  * @src: source string
  *
  * Return: pointer to the resultant string
  */

char *_strcat(char *dest, char *src)
{
	int i, j, k, len1, len2;

	i = 0;
	j = 0;
	len1 = 0;
	len2 = 0;
	while (src[i])
	{
		len1 += 1;
		i++;
	}
	while (dest[j])
	{
		len2 += 1;
		j++;
	}

	for (k = 0; k < len1; k++)
	{
		dest[len2 + k] = src[k];
	}

	dest[len1 + len2] = '\0';

	return (dest);
}

