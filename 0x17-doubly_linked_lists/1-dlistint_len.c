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

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int count = 0;
	const dlistint_t *list;

	list = malloc(sizeof(dlistint_t));
	list = h;

	if (list == NULL)
	{
		return (0);
	}
	while (list)
	{
		list = list->next;
		count++;
	}
	return (count);
}
