#include "lists.h"

/**
 * get_nodeint_at_index - a function that gets the nodes of a list
 *
 * @head: a pointer to the head node
 * @index: the node to locate
 *
 * Return: NULL if the node does not exit or the position if found
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth;

	for (nth = 0; nth < index; nth++)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head = head->next;
	}

	return (head);
}
