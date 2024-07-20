#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current = list, *prev = NULL;

    if (!list)
        return (NULL);

    /* Traverse the express lane first */
    while (current->express && current->express->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->express->index, current->express->n);
        current = current->express;
    }

    /* Check if we have reached the end of the list */
    if (current->express)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->express->index, current->express->n);
    }
    else
    {
        /* End of the express lane, search in the rest of the list */
        prev = current;
        while (current->next)
            current = current->next;
        printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
        current = prev;
    }

    /* Linear search in the identified block */
    while (current && current->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        current = current->next;
    }

    /* Check if the current node has the value */
    if (current && current->n == value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        return (current);
    }

    return (NULL);
}

