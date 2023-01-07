#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at an index
 * @head: pointer to head of list
 * @index: index to return
 *
 * Return: node at 'index'
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int match = 0;
	dlistint_t *search;

	search = head;

	while (search != NULL)
	{
		if (index == match)
			return (search);
		search = search->next;
		match += 1;
	}

	return (NULL);
}
