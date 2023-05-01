#include "lists.h"

/**
 * free_listint2 - frees up the space allocated to listint_t
 *
 * @head: the address to the head of the the nodes
 *
 * Return: n{thing but free spaces
 */

void free_listint2(listint_t **head)
{
	listint_t *tempo;

	if (!(*head))
	{
		return;
	}

	while (*head)
	{
		tempo = (*head)->next;
		free(*head);
		*head = tempo;
	}

	*head = NULL;
}
