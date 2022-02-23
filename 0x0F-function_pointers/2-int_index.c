#include "function_pointers.h"
/*
* int_index - searches for an integer
* return - the index of the first element that matched, or -1 if no match
*/int int_index(int *array, int size, int (*cmp)(int))
{
int count;
int check;
if (size <= 0)
return (-1);
for (count = 0; count < size; count++)
{
check = cmp(array[count]);
if (check == 1)
return (count);
}
return (-1);
}
