#include "function_pointers.h"
/*
* array_iterator - executes a function on each element of an array
* return - none
*/void array_iterator(int *array, size_t size, void (*action)(int))
{
if (!array || !size || !action)
return;
for (int count = 0; count < size; count++)
action(array[count]);
}
