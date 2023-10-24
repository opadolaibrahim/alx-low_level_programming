#include "lists.h"
/**
 * print_listint -  Display all elements of a linked list.
 * @h: Pointer to the first node of the linked list.
 * Return: Number of nodes.
 */
size_t print_listint(const listint_t *h)
{
    size_t node_count = 0;

    while (h)
    {
        printf("%d\n", h->n);
        node_count++;
        h = h->next;
    }

    return (node_count);
}
