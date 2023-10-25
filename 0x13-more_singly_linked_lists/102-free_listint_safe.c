#include "lists.h"

/**
 * free_listint_safe - Safely frees a linked list, even if it contains loops.
 * @h: Pointer to the first node in the linked list.
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
    size_t len = 0;
    listint_t *current = *h;

    if (!h || !*h)
        return (0);

    while (current)
    {
        listint_t *temp = current->next;
        free(current);
        current = temp;
        len++;
    }

    *h = NULL;

    return (len);
}
