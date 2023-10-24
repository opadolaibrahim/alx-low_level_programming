#include "lists.h"
/**
 * pop_listint - Remove the head node
 * @head: Pointer to the first node .
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
    int head_data = 0;

    if (head && *head)
    {
        listint_t *temp = *head;
        head_data = temp->n;
        *head = temp->next;
        free(temp);
    }

    return head_data;
}
