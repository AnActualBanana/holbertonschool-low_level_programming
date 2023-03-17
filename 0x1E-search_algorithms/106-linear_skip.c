#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the list to search in
 * @value: value to search for
 *
 * Return: pointer on the first node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *jump;

	if (list == NULL)
		return (NULL);

	current = list;
	jump = list->express;

	while (jump != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", jump->index, jump->n);
		if (jump->n >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				current->index, jump->index);
			break;
		}
		current = jump;
		jump = jump->express;
	}

	if (jump == NULL)
	{
		current = current->express;
		while (current != NULL)
		{
			printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
			if (current->n == value)
				return (current);
			current = current->next;
		}
		return (NULL);
	}

	while (current != jump)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	printf("Value checked at index [%lu] = [%d]\n", jump->index, jump->n);
	if (jump->n == value)
		return (jump);

	return (NULL);
}
