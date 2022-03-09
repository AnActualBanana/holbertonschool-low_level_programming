#include "lists.h"
/**
 *
 *
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(1 * sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}
	while (*head->next != NULL)
	{
		*head = *head->next;
	}
	new->str = strdup(str);
	new->len = strlen(str);
	*head->next = new;
	return(new);
}
