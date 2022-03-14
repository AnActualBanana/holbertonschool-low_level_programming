#include "lists.h"
/**
* print_list - prints all the elements of a list_t list
* return - the number of nodes
*/
size_t print_listint(const listint_t *h)
{
unsigned int count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}
