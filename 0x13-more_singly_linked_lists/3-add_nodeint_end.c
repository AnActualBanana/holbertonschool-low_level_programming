#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: head of the first node in the list
 * @n: the int to populate the new node with
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(1 * sizeof(listint_t));
	listint_t *iterate = *head;

	if (new == NULL)
	{
		free(new);
		free(iterate);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (iterate->next != NULL)
	{
		iterate = iterate->next;
	}
	iterate->next = new;
	return (new);
}
