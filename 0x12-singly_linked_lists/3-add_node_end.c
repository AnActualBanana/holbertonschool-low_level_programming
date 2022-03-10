#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of the first node in the list
 * @str: the string to populate the new node with
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(1 * sizeof(list_t));
	list_t *iterate = malloc(1 * sizeof(list_t));
	if (new == NULL || iterate == NULL)
	{
		return (NULL);
	}
	while (iterate->next != NULL)
	{
		iterate = iterate->next;
		}
	iterate->str = strdup(str);
	iterate->len = strlen(str);
	iterate->next = new;
	new->str = strdup(str);
	new->len = strlen(str);
	/*printf("%s, %s\n", new->str, iterate->str);*/
	 return (new);
}
