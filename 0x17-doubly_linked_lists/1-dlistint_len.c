#include "lists.h"

/**
 * dlistint_len - computes the length of a dlistint list
 * @h: head of list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
    size_t elem = 0;
    const dlistint_t *head;

    head = h;

    while (h->prev != NULL)
        elem += 1;

    while (head->next != NULL)
        elem += 1;

    return (elem);
}
