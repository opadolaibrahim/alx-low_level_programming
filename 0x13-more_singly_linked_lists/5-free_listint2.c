#include "lists.h"
/**
 * free_listint2 - Release a linked list and set the head to NULL.
 * @head: Pointer to the first node.
 */
void free_listint2(listint_t **head)
{
    listint_t *current, *temp;

    if (!head)
        return;

    current = *head;

    while (current)
    {
        temp = current->next;
        free(current);
        current = temp;
    }

    *head = NULL;
}
