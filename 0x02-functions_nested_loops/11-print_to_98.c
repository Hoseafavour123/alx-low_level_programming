#include <stdio.h>
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
			printf("%d, ", n);
			n++;
		}
	}

	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}

	printf("%d", n);
	putchar('\n');
}

