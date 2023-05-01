#include "lists.h"

/**
 * free_listint_t - frees up all space allocated by malloc
 *
 * *head: a pointer to the head node
 *
 * Return: nothing but more spaces
 */

void free_listint(listint_t *head)
{
	if (!head)
	{
		return;
	}
	free_listint(head->next);
	free(&(head->n));
	free(head);
}
