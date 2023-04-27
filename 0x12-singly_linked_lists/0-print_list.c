#include "lists.h"

/**
 * print_list - printa the element of a structure
 *
 * @h: a pointer to the head of the node
 *
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{
	size_t num_node = 0;

	for (; h; num_node++)
	{
		if (!h->str)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}

	return (num_node);

}
