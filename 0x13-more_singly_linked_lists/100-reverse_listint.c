#include "lists.h"

/**
 * reverse_listint - reverse the entire linked list
 *
 * @head: a pointer to the head address
 *
 * Return: the address of the first node of the rearranged list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *from_start = NULL, *from_end = *head;

	if (!(*head))
	{
		return (NULL);
	}

	while ((*head)->next)
	{
		from_end = from_end->next;
		(*head)->next = from_start;
		from_start = *head;
		*head = from_end;
	}

	*head = from_start;

	return (*head);

	
}
