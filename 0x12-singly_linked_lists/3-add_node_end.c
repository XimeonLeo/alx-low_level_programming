#include "lists.h"

/**
 * add_node_end - append a new node at the end of the node
 *
 * @head: a pointer to the new node
 * @str: string to be present in the new node
 *
 * Return: address to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *my_node = NULL;
	list_t *tmp = *head;

	my_node = malloc(sizeof(list_t));

	if (!my_node)
	{
		return (NULL);
	}

	my_node->str = strdup(str);
	my_node->len = strlen(str);

	if (!(*head))
	{
		*head = my_node;
	}
	else
	{
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		my_node->next = tmp->next;
		tmp->next = my_node;
	}

	return (my_node);
}
