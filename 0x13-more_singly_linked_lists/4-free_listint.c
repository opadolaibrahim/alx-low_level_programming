#include "lists.h"
/**
 * free_listint - Deallocates memory used by a linked list.
 * @head: Pointer to the first node of the linked list to be freed.
 */
void free_listint(listint_t *head)
{
    while (head)
    {
        listint_t *temp = head;
        head = head->next;
        free(temp);
    }
}
