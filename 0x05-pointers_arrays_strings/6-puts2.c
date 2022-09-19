#include "main.h"

/**
  * puts2 - prints every other character of string
  * @str: argument
  *
  * Return: void
  */

void puts2(char *str)
{
	int i, j, len;

	i = 0;
	len = 0;

	while (str[i])
	{
		len += 1;
	}

	len = len - 1;

	for (j = 0; j <= len; (j += 2))
	{
		_putchar(*(str + j));
	}

	_putchar(10);
}

