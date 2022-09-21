#include "main.h"

/**
 *  reverse_array - reverses an array of integers
 *  @a: array
 *  @n: number of integers
 *
 *  Return: void
 */

void reverse_array(int *a, int n)
{
    int i;
    int j;

    j = 0;

    for (i = n - 1; i >= 0; i--)
    {
	a[i] = a[j];
	j++;
    }
}
