#include "lists.h"

/**
 * print_dlistint - prints the elements of a dlistint list
 * @h: head of list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t nodes = 0;

    while (h->prev != NULL)
        h = h->prev;

    while (h != NULL)
    {
        printf("%d\n", h->n);
        nodes += 1;
        h = h->next;
    }

    return (nodes);
}
