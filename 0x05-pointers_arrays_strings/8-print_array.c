#include "main.h"
#include <stdio.h>

/**
  * print_array - prints the n number of elements
  * @a: array argument
  * @n: number of elements to print
  *
  * Return: void
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] != a[n - 1])
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}

	printf("\n");
}

