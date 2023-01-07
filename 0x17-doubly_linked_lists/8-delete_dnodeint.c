#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes a node at an index
  * @head: pointer to head of list
  * @index: index
  *
  * Return: 1 on success, -1 on failure
  */
 int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *current, *previous;
    unsigned int match = 0;

    current = previous = *head;

    while (current != NULL)
    {
        if (index == match)
        {
            previous->next = current->next;
            current->next->prev = previous;
            current = NULL;

            return (1);
        }

        previous = current;
        current = current->next;
        match += 1;
    }

    return (-1);
}
