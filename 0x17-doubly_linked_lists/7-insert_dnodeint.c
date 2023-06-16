#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a particular index
 *
 * @h: the head node of the doubly linked list
 * @idx: the index to insert the new node
 * @n: the value the new node will hold
 *
 * Return: the address of the new node creater or NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *my_node, *tmp;

	tmp = *h;
	my_node = malloc(sizeof(dlistint_t));
	if (!my_node)
		return (NULL);

	my_node->n = n;
	if (idx == 0) /* Meaning at the begining */
		return (add_dnodeint(h, n));

	while (idx != 0 && tmp)
	{
		tmp = tmp->next;
		idx--;
	}
	if (!tmp && idx <= 0)
		return (add_dnodeint_end(h, n));

	my_node->prev = tmp->prev;
	tmp->prev->next = my_node;
	tmp->prev = my_node;
	my_node->next = tmp;

	return (my_node);
}
