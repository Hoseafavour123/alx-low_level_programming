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

	while (i <= 10)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}

		_putchar(10);
		i++;
	}
}

