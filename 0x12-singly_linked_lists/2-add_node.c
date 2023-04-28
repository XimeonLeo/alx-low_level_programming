#include "lists.h"

/**
 * add_node - appends a new node to the begining of a list
 *
 * @head: a pointee the new node
 * @s: the sring in the new node
 *
 * Return: the address to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *my_node = NULL;

	my_node = malloc(sizeof(list_t));

	if (!my_node)
	{
		return (NULL);
	}

	my_node->str = strdup(str);
	my_node->len = strlen(str);
	my_node->next = *head;

	*head = my_node;

	return (my_node);
}
