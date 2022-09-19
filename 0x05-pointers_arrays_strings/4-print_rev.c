#include "main.h"

/**
  * print_rev - reverses a string
  * @s: argument
  *
  * Return: void
  */

void print_rev(char *s)
{
	int i, j, len;

	i = 0;
	len = 0;

	while (s[i])
	{
		len += 1;
		i++;
	}

	for (j = len; j >= 0; j--)
	{
		_putchar(s[j]);
	}

}

