#include "lists.h"

/**
  * free_dlistint - frees a doubly linked list
  * @h: pointer to head of list
  *
  * Return: void
  *
  */
void free_dlistint(dlistint_t *head)
{
    dlistint_t *tmp;

    while (head != NULL)
    {
        tmp = head->next;
        free(head);
        head = tmp;
    }
}
