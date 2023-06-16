#include "lists.h"

/**
 * free_dlistint - freea up the entire list using malloc
 *
 * @head: the begining of thr list
 *
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
