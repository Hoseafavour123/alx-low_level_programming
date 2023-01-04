#include "main.h"

/**
  * _puts - prints strings to stdout
  * @str: argument
  *
  * Return: void
  */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}

	_putchar(10);
}

