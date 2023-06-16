#include "lists.h"

/**
 * sum_dlistint - sum up all the elements in the linked list
 *
 * @head: the head address
 *
 * Return: the sum of all the elements
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
