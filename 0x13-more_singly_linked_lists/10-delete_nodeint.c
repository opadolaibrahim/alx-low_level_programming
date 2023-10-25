#include "lists.h"
/**
 * delete_nodeint_at_index - Remove a node at a specified index.
 * @head: Pointer to the first node
 * @index: Index of the node to delete.
 * Returns: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *current, *temp = *head;

    if (!*head)
        return (-1);

    if (index == 0)
    {
        *head = (*head)->next;
        free(temp);
        return (1);
    }

    while (index > 1)
    {
        if (!temp->next)
            return (-1);
        temp = temp->next;
        index--;
    }

    if (temp && temp->next)
    {
        current = temp->next;
        temp->next = current->next;
        free(current);
        return (1);
    }

    return (-1);
}
