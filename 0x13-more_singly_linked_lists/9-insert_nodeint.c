#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a specified position.
 * @head: Pointer to the head node.
 * @idx: The index at which the new node is to be added.
 * @n: The integer data of the new node.
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *current = *head;
    size_t i = 0;

    new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (!*head && !idx)
    {
        *head = new_node;
        return (new_node);
    }

    else if (!*head && idx)
        return (NULL);

    else if (!idx)
    {
        new_node->next = *head;
        *head = new_node;
        return (new_node);
    }

    while (current && i < (idx - 1))
    {
        current = current->next;
        i++;
    }
    if (!current)
    {
        free(new_node);
        return (NULL);
    }

    new_node->next = current->next;
    current->next = new_node;

    return (new_node);
}
