#include "main.h"

/**
 * times_table - displays the times table from 0 to 9
 *
 * Return: void
 */

void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);

		for (j = 1; j <= 9; j++)
		{
			k = i * j;
			_putchar(44);
			_putchar(32);

			if (k <= 9)
			{
				_putchar(32);
				_putchar(k + '0');
			}

			else if (k > 9)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

