#include "lists.h"

/**
 * print_listint - return the number of nodes found
 * @h: a pointer to the head of nodes
 *
 * Return: elements of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t node_elem = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_elem++;
	}
	return (node_elem);
}
