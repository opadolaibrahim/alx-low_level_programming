#include "lists.h"
/**
 * count_listint - Calculate the number of element in a linked list.
 * @h: Pointer to the first node
 * Return: Number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
