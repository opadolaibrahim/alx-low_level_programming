#include "lists.h"
/**
 * get_nodeint_at_index - it returns the node in a certain index of tge linked list
 * @head: pointer to the first node
 * @index: index of the nod
 * Return: NULL if the code does not exist 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
