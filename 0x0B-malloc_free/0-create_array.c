#include "main.h"
/*
* *create_array - creates an array of chars,
* and initializes it with a specific char
* return - NULL if size is 0, pointer to array otherwise
*/char *create_array(unsigned int size, char c)
{
char *array = NULL;
unsigned int count;
array = (char *)malloc(size * sizeof(c));
if (array == NULL)
{
return (NULL);
}
for (count = 0; count < size; count++)
{
array[count] = c;
}
if (size == 0)
{
return (NULL);
}
return (array);
}
