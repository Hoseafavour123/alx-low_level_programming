#include "main.h"

/**
  * print_times_table - displays times table
  * @n: argument
  *
  * Return : void
  */

void print_times_table(int n)
{
	int i, j, prod;

	for (i = 0; i <= n; i++)
	{
		if ((n < 0) || (n > 15))
			break;
		_putchar(48);
		
		for (j = 1; j <= n; j++)
		{
			prod = i * j;
			_putchar(',');
			_putchar(' ');

			if (prod <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}

			else if ((prod > 9) && (prod <= 99))
			{
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}

			else if (prod >= 100)
			{
				_putchar(((prod / 100) % 10) + '0');
				_putchar(((prod / 10) % 10) + '0');
				_putchar((prod % 10) + '0');

			}
		}
		_putchar('\n');
	}
}

