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
	int i, j, len;

	i = 0;
	len = 0;
	while (src[i])
	{
		len += 1;
		i++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	for (j = 0; j < len; j++)
	{
		_putchar(dest[j]);
	}

	_putchar(10);

	return (0);
}


