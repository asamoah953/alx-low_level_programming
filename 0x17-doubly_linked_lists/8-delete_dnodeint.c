#include "lists.h"
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;
	unsigned int count;

	if (!(*head))
		return -1;

	node = *head;
	if (index == 0)
	{
		*head = node->next;
		if (node->next)
			node->next->prev = NULL;
		free(node);
		return 1;
	}

	for (count = 0; node && count < index - 1; count++)
		node = node->next;

	if (!node || !node->next)
		return -1;

	if (node->next->next)
	{
		node->next = node->next->next;
		free(node->next->prev);
		node->next->prev = node;
		return 1;
	}
	else
	{
		free(node->next);
		node->next = NULL;
		return 1;
	}

	return -1;
}

