#include "main.h"

/**
  * print_diagonal - prints diagonal line
  * @n: argument
  *
  * Return: void
  */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i == j)
					_putchar('\\');
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}

	else if (n <= 0)
		_putchar('\n');
}

