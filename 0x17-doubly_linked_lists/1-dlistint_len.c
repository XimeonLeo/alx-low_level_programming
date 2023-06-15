#include "lists.h"

/**
 * dlistint_len - gets the number of elements in a doubly linked list
 *
 * @h: the head node of the linked list
 *
 * Return: the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t no_node = 0;

	while (h)
	{
		no_node++;
		h = h->next;
	}
	return (no_node);
}
