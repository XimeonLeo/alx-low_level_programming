#include "lists.h"

/**
 * delete_nodeint_at_index - frees the position where a node is no longer needed
 *
 * @head: a pointer to the head node
 * @index: the position where the node is found
 *
 * Return: 1 for success, -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *head_dup = *head, *tmp;
	unsigned int check = 1;

	if (!(*head))
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(head_dup);
		return (1);
	}
	else
	{
		while (check < index)
		{
			if (!(head_dup) || !(head_dup->next))
			{
				return (-1);
			}
			head_dup = head_dup->next;
		}
		tmp = head_dup->next;
		head_dup->next = head_dup->next->next;
		free(tmp);
		return (1);
	}

}
