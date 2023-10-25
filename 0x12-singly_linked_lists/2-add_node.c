#include "lists.h"
/**
 * add_node - add a node at the beginning
 * of a list_t list.
 * @head: head of the list.
 * @str: string to store list.
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t a = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[a])
		a++;

	new->str = strdup(str);
	new->len = a;
	new->next = *head;
	*head = new;

	return (*head);
}
