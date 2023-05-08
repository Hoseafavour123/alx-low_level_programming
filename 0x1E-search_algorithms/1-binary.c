#include "search_algos.h"

/**
  * recursive_search - recursively search through an array
  * @array: the array to search
  * @left: starting index of subarray to search
  * @right: The ending index of subarray
  * @value: value to search for
  * Return: index of value on success, -1 on failure
  */
int recursive_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);

	i = left + (right - left) / 2;
	if (array[i] == value)
		return (i);
	if (array[i] > value)
		return (recursive_search(array, left, i - 1, value));
	return (recursive_search(array, i + 1, right, value));
}


/**
  * binary_search - uses the binary search algorithm to retrieve element in
  * array
  * @array: array to search
  * @size: array size
  * @value: value to retrieve
  * Return: index of elemnet search, -1 if unsuccessful
  */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recursive_search(array, 0, size - 1, value));
}
