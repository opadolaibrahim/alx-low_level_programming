#include "lists.h"
/**
 * reverse_listint - Reverse a linked list.
 * @head: Pointer to the first node in the list.
 *Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *current = *head;
    listint_t *prev = NULL;
    listint_t *next = NULL;

    while (current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
    return (*head);
}
