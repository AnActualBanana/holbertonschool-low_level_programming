#include "lists.h"
/*
* list_len - returns the number of elements in a linked list_t list
* return - the number of elements
*/size_t list_len(const list_t *h)
{
unsigned int count = 0;
while (h->next != NULL)
{
if (h->str != NULL && h->len != 0)
{
count++;
}
h = h->next;
}
if (h->str != NULL && h->len != 0)
{
count++;
}
return (count);
}
