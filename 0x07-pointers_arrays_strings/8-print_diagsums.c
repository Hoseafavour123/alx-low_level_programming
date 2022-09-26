#include "main.h"

/**
  * print_diagsum - prints the sum of two diagonals of a square matrix
  * @a: square matrix
  * @size: size of square
  *
  * Return: void
  */

void print_diagsum(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
		sum2 += a[i][size - i - 1];
	}

	printf("%d, %d\n", sum1, sum2);
}

