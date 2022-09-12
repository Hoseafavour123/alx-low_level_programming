#include <stdio.h>

/**
  * main - Entry point
  *
  * Description - A program that prints all possible combinations
  * of two two-digit numbers
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int a, b, c, d;

	a = 48;
	while (a < 58)
	{
		b = 48;

		while (b < 58)
		{
			c = a;
			d = b + 1;

			while (c < 58)
			{
				while (d < 58)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);

					if ((a < 57) || (b < 56) || (c < 57) || (d < 57))
					{
						putchar(',');
						putchar(32);

					}
					d++;
				}
				c++;
				d = 48;
			}
			b++;
		}
		a++;
	}

	putchar(10);
	return (0);
}

