#include "main.h"

/**
  * _strcpy - copies the content of src to dest including
  * the null character
  * @src: the source array
  * @dest: destination array
  *
  * Return: copied array
  */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	_putchar(10);

	return (dest);
}


