#include "main.h"

/**
  * jack_bauer - prints time from 00:00 to 23:59
  *
  * Return: void
  */

void jack_bauer(void)
{
	int a, b, c, d;

	a = b = c = d = 48;

	while (a < 51)
	{
		while (b < 52)
		{
			while (c < 54)
			{
				while (d < 58)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);

					if ((a < 50) || (b < 51) || (c < 53) || (d < 57))
					{
						_putchar('\n');
					}
					d++;
				}
				c++;
				d = 48;
			}
			b++;
			c = 48;
		}
		a++;
		b = 48;
	}
}

