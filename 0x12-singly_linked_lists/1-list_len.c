#include "lists.h"
/*
* list_len - returns the number of elements in a linked list_t list
* return - the number of elements
*/size_t list_len(const list_t *h)
{
unsigned int count = 0;
while (h->next != NULL)
{
h = h->next;
count++;
}
count++;
return (count);
}
