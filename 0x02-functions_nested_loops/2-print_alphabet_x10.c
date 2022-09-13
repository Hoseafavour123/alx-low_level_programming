#include "main.h"

/**
  * print_alphabet_x10 - print the alphabets 10 times
  *
  * Return: void
  */

void print_alphabet_x10(void)
{
	int i;
	int j;

	i = 1;
	j = 97;

	while (i <= 10)
	{
		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar(10);
	}
}

