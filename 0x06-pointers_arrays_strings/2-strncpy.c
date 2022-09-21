#include "main.h"

/**
  * _strncpy - copies n bytes of strings
  * @dest: destination string
  * @src: source string
  * @n: number of bytes
  *
  * Return: pointer to destination string
  */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n && src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

