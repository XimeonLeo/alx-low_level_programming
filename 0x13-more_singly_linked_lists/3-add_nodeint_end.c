#include "lists.h"

/**
 * add_nodeint_end - append a new node to the end of the struct
 *
 * @head: a double pointer to the head of the struct
 * @n: the integer to be stored
 *
 * Return: address to the new node created
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = NULL;
	listint_t *tmp = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
	}
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);

}
