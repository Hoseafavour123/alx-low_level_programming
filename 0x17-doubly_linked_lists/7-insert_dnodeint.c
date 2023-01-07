#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at an index
 * @h: pointer to head of list
 * @idx: index to insert at
 * @n: integer
 *
 * Return: pointer to new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current, *previous;
	unsigned int match = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	current = previous = *h;

	while (current != NULL)
	{
		if (idx == match)
		{
			previous->next = new;
			current->prev = new;

			new->prev = previous;
			new->next = current;

			return (new);
		}

		previous = current;
		current = current->next;
		match += 1;
	}

	return (NULL);
}
