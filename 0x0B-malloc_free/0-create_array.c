#include "main.h"
/*
* *create_array - creates an array of chars,
* and initializes it with a specific char
* return - NULL if seize is 0, pointer to array otherwise
*/char *create_array(unsigned int size, char c)
{
char *a;
a = &c;
a = (char *)malloc(4);
if (size == 0)
{
return (NULL);
}
return (a);
}
