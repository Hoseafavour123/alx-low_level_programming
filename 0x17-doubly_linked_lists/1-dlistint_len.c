#include "lists.h"

/**
 * dlistint_len - computes the length of a dlistint list
 * @h: head of list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elem = ;

	if (h == NULL)
		return (elem);


	while (h != NULL)
	{
		elem += 1;
		h = h->next;
	}

	return (elem);
}
