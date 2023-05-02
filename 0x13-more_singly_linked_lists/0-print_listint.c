#include "lists.h"
#include <stdio.h>

/**
 * print_listint - return the number of nodes found
 * @h: a pointer to the head of nodes
 *
 * Return: elements of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node_elems = 0;

	while (h)
	{
		node_elems++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node_elems);
}
