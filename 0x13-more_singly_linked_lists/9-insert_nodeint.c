#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: a pointer to the head address
 * @idx: the index where the new node would be created
 * @n: the value to be stored in the new node
 *
 * Return: the address of the new node added
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *my_node = NULL;
	listint_t *head_dup = *head;

	if (!(*head))
	{
		return (NULL);
	}
	my_node = malloc(sizeof(listint_t));

	if (!my_node)
	{
		return (NULL);
	}
	my_node->n = n;

	if (idx == 0)
	{
		*head = my_node;
		my_node->next = head_dup;
		return (my_node);
	}
	else
	{
		listint_t *head_dup2 = *head;
		unsigned int check = 1;

		while (check < idx)
		{
			if (head_dup2 == NULL || head_dup2->next == NULL)
			{
				return (NULL);
			}
			head_dup2 = head_dup2->next;
			check++;
		}
		my_node->next = head_dup2->next;
		head_dup2->next = my_node;
		return (my_node);

	}
}
