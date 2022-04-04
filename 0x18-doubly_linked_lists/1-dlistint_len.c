#include "lists.h"
/**
 * dlistint_len - returns the number of elements of a dlistint_t list.
 * @h: the head of the first node in the list.
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h = h->next;
		nodes++;
	}
	nodes++;
	return (nodes);
}
