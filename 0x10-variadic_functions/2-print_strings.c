#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_strings - prints strings to console
  * @separator: string delimiter
  * @n: number of strings
  *
  * Return: void
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *s;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, char *);
		if (s == NULL)
			printf("(nil)");

		if (i != (n - 1) && separator != NULL)
			printf("%s%s", s, separator);
		printf("%s", s);
	}

	printf("\n");
	va_end(ptr);
}

