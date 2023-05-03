#include "lists.h"

/**
 * sum_listint - adds up the n values of the linked list
 *
 * @head: a poineter to the head node
 *
 * Return: sum of all the n value, or zero if an empty list
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
