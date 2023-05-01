#include "lists.h"

/**
 * pop_listint - deletes the first node from the structre
 *		but return what it holds before doing that
 *
 * @head: a pointer to the head to be popped out
 *
 * Return: what was held in the head before freeing it up
 */

int pop_listint(listint_t **head)
{
	listint_t *tempo = NULL;
	int data;

	if (!(*head))
	{
		return (0);
	}

	tempo = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(tempo);

	return (data);

}
