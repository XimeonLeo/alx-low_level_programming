#include "lists.h"

/**
 * listint_len - get the number of elements in the linked list
 *
 * @h: a pointer to the head if the nodes
 *
 * Return: the number of elements present in the nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num_elem = 0;

	while (h)
	{
		h = h->next;
		num_elem++;
	}
	return (num_elem);
}
