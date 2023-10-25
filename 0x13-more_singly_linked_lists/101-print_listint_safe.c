#include "lists.h"
/**
 * print_listint_safe - Safely prints a linked list even with loops.
 * @head: Pointer to the first node 
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow_ptr = head;
    const listint_t *fast_ptr = head;
    size_t counter = 0;

    while (fast_ptr && fast_ptr->next)
    {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
        counter++;

        if (slow_ptr == fast_ptr)
        {
            printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
            return (counter);
        }
    }

    slow_ptr = head;
    while (slow_ptr != fast_ptr)
    {
        printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next;
        counter++;
    }

    return (counter);
}
