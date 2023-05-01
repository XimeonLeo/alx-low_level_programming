#include "lists.h"

/**
 * free_listint - frees up all space allocated by malloc
 *
 * @head: a pointer to the head node
 *
 * Return: nothing but more spaces
 */

void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head);
		head = tempo;
	}
}
