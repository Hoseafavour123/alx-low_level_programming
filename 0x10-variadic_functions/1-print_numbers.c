#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints a variable number of arguments passed to it
  * @separator: number seperator
  * @n: maximum of arguments to be received
  *
  * Return: void
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ptr, int);
		printf("%d", num);

		if (separator == NULL)
		{
			;
		}

		if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}

	va_end(ptr);

	printf("\n");
}

