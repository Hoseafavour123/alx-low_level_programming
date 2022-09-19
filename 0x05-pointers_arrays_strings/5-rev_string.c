#include "main.h"

/**
  * rev_string - reverse string
  * @s: argument
  *
  * Return: void
  */

void rev_string(char *s)
{
	int i, j, len;

	i = 0;
	len = 0;

	while (s[i])
	{
		_putchar(s[i]);
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
