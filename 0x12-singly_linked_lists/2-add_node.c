#include "lists.h"
/**
* add_node - add a new node at the beginning of a list_t list
* @head: head of first node in list
* @str: new string of list_t
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(1 * sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	*head->next = new;
	return (new);
}
