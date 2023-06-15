#include "lists.h"

/**
 * add_dnodeint - adds a new node to the begining of a doubly linked list
 *
 * @head: the current head of the doubly linked list
 * @n: the valuse the new node will hold
 *
 * Return: The address of the new node created
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
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
	my_node->prev = NULL;
	tmp = *head;

	if (tmp)
	{
		while (tmp->prev)
			tmp = tmp->prev;
	}
	my_node->next = tmp;

	if (tmp)
		tmp->prev = my_node;
	*head = my_node;

	return (my_node);
}
