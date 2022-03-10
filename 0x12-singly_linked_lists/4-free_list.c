#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: head of list_t list
 */
void free_list(list_t *head)
{
	list_t *iterate = head;

	while (head != NULL)
	{
		iterate = iterate->next;
		free(head->str);
		free(head);
		head = iterate;
	}
}
