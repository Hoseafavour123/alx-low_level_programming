#include "lists.h"

/**
  * sum_dlistint - sums up the data contained in a list
  * @head: pointer to head of list
  *
  * Return: result of summation
  */
int sum_dlistint(dlistint_t *head)
{
    int sum = 0;
    dlistint_t *ptr = head;

    while (ptr != NULL)
    {
        sum += ptr->n;
        ptr = ptr->next;
    }

    return (sum);
}
