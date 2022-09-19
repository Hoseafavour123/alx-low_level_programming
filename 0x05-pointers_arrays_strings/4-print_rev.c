#include "main.h"

/**
  * print_rev - reverses a string
  * @s: argument
  *
  * Return: void
  */

void print_rev(char *s)
{
	int i, len;

	i = 0;
	len = 0;

	while (s[i])
	{
		len += 1;
		i++;
	}

	for (; len >= 0; len--)
	{
		_putchar(s[len]);
	}

	_putchar('\n');

}

