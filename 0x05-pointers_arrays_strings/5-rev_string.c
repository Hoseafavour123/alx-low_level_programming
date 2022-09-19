#include "main.h"

/**
  * rev_string - reverse string
  * @s: argument
  *
  * Return: void
  */

void rev_string(char *s)
{
	int i, k, j, len;

	i = 0;
	k = 0;
	len = 0;

	while (s[k])
	{
		_putchar(s[k]);
		k++;
	}

	while (s[i])
	{
		len += 1;
		i++;
	}

	_putchar(10);

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar(10);
}
