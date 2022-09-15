#include "main.h"

/**
  * print_most_numbers - print from 0-9 except 2 and 4
  *
  * Return: void
  */

void print_most_numbers(void)
{
	int i;
	int j;

	i = 48;
	j = 57;

	while (i <= j)
	{
		if ((i != 50) || (i != 52))
			_putchar(i);
		else
			continue;
	}

	_putchar(10);
}

