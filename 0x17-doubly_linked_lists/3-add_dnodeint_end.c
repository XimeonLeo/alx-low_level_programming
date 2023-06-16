#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of a doubly linked list
 *
 * @head: the head node
 * @n: the value the new node will hold
 *
 * Return: the address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *my_node;
	dlistint_t *tmp;

	my_node = malloc(sizeof(dlistint_t));
	if (!my_node)
	{
		dprintf(2, "Error: Can't malloc\n");
		return (NULL);
	}

	my_node->n = n;
	my_node->next = NULL;
	tmp = *head;

	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = my_node;
	}
	else
		*head = my_node;
	my_node->prev = tmp;

	return (my_node);
}
