#include "lists.h"
/**
 * sum_listint - Computes the sum of all data 
 * @head: Pointer to the first node
 * Return: Sum of data elements in the linked list.
 */
int sum_listint(listint_t *head)
{
    int sum = 0;

    while (head)
    {
        sum += head->n;
        head = head->next;
    }

    return sum;
}
