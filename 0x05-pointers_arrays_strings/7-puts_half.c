#include "main.h"

/**
  * puts_half - print half of a string
  * @str: argument
  *
  * Return: void
  */

void puts_half(char *str)
{
	int i, j, k, n, len;

	i = 0;
	len = 0;
	while (str[i])
	{
		len += 1;
		i++;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
		for (j = n; j < len; j++)
			_putchar(str[j]);

	}

	else if (len % 2 == 1)
	{
		n = (len - 1) / 2;
		for (k = ++n; k < len; k++)
			_putchar(str[k]);
	}

	_putchar(10);
}

