#include "main.h"
/*
* *malloc_checked - allocates memory
* return - 0 if normal, 1 if fail
*/void *malloc_checked(unsigned int b)
{
int *a = malloc(b);
if (a == NULL)
{
exit(98);
}
return (a);
}
