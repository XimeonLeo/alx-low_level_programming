#include "lists.h"

/**
 * free_list - frees up what malloc has taken
 *
 * @head: the struct to free
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *tmp = NULL;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
