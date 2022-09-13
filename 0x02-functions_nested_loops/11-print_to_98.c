#include "main.h"

/**
 * print_to_98 - print numbers to 98
 * @n: first parameter
 *
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			putchar(n + '0');
			n++;
		}
	}

	else if (n > 98)
	{
		while (n > 98)
		{
			putchar(n + '0');
			n--;
		}
	}
}

