#include "main.h"

/**
 * print_times_table - print the times table of argument
 * @n: argument
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, prod, ldgt;

	for (i = 0; i <= n; i++)
	{
		if ((n > 15) || (n < 0))
			break;
		putchar('0');
		for (j = 1; j <= n; j++)
		{
			prod = i * j;
			if (prod <= 9)
			{
				_putchar(prod + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((prod > 9) && (prod <= 99))
			{
				_putchar(prod / 10 + '0');
				_putchar(prod % 10 + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (prod >= 100)
			{
				ldgt = prod % 10;
				prod = prod / 10;

				if (prod >= 10)
				{
					_putchar(prod / 10 + '0');
					_putchar(prod % 10 + '0');
				}
				_putchar(ldgt);
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
