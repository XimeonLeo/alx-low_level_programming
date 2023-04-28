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
	if (!head)
	{
		return;
	}
	free_list(head->next);
	free(head->str);
	free(head);
}
