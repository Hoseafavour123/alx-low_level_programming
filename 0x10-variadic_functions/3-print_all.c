#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_all - prints arguments of different types
  * @format: a list of characters specifying the types of arguments
  * to print in order
  * @...: variable number of arguments
  */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list list;

	va_start(list, format);

	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
			{
				printf("%c", va_arg(list, int));
				break;
			}

			case 'i':
			{
				printf("%d", va_arg(list, int));
				break;
			}

			case 'f':
			{
				printf("%f", va_arg(list, double));
				break;
			}

			case 's':
			{
				str = va_arg(list, char *);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}

				printf("%s", str);
			}
		}

		i++;
	}

	printf("\n");
	va_end(list);
}

