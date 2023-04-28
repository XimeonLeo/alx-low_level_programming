#include "lists.h"

/**
 * list_len - returns the number of elements preseent in node
 *
 * @h: a pointer to the head node
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t list = 0;

	for (; h; list++)
	{
		h = h->next;
	}
	return (list);
}
