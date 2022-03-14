#include "lists.h"
/**
* list_len - returns the number of elements in a linked list_t list
* @h: head of list
* Return: the number of elements
*/
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (h != NULL)
	{
		while (h->next != NULL)
		{
			count++;
			h = h->next;
		}
		count++;
	}
	return (count);
}
