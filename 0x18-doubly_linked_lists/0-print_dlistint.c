#include "lists.h"
/**
 * print_dlistint - prints all the alements of a dlistint_t list.
 * @h: the head of the first node in the list.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int count;
	size_t nodes = 0;

	for (count = 0; h->next != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	printf("%d\n", h->n);
	nodes++;
	return (nodes);
}
