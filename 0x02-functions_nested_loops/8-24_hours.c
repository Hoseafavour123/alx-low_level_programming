#include "main.h"

/**
  * jack_bauer - prints time from 00:00 to 23:59
  *
  * Return: void
  */

void jack_bauer(void)
{
	int a, b, c, d;

	a = b = c = d = 0;

	while (a < 3)
	{
		while (b <= 9)
		{
			if ((a == 2) && (b == 4))
				break;
			while (c <= 5)
			{
				while (d <= 9)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');

					d++;
				}
				d = 0;
				c++;
			}
			c = 0;
			b++;
		}
		b = 0;
		a++;
	}
}
