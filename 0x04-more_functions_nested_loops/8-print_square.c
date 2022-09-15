#include "main.h"

/**
  * print_square - prints square
  * @size: size of square
  *
  * Return: void
  */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}

	else if (size <= 0)
		_putchar('\n');
}

