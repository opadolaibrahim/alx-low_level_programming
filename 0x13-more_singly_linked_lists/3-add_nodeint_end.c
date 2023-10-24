#include "lists.h"
/**
 * add_nodeint_end - Appends a node at the end of the linked list.
 * @head: Pointer to the first node. 
 * @n: Data to insert into the new node.
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));
    
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (!*head)
    {
        *head = new_node;
        return (*head);
    }

    listint_t *current = *head;
    while (current->next)
        current = current->next;

    current->next = new_node;
    
    return (*head);
}
