#include "main.h"

/**
  * print_diagonal - prints diagonal line
  * @n: argument
  *
  * Return: void
  */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			_putchar(' ');
		}

		_putchar('\n');
	}

	else if (n <= 0)
		_putchar('\n');
}

