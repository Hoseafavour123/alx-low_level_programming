#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - accepts a variable number of arguments and prints
  * their sum
  * @n: number of arguments
  *
  * Return: sum of arguments
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list ptr;

	if (n == 0)
		return (0);

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}

	return (sum);
}

