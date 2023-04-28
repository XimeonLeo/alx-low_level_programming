#include "lists.h"

/**
 * add_nodeint - adds a new node to the begining of the list
 *
 * @head: a double pointer to the head addressn of nodes
 * @n: the integer to be stored in the nodes
 *
 * Return: the adress of the new node added
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
