#include "search_algos.h"

/**
 * linear_search - searches for an element in array using linear search
 * algorithm
 * @array: array to search
 * @size: size of array
 * @value: value to search
 * Return: index of value or -1 if unsuccessful
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
