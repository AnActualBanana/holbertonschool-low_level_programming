#include "main.h"
/*
* swap_int - swaps the value of two integers
* through pointers
* return - none
*/void swap_int(int *a, int *b)
{
int temp_a;
int temp_b;
temp_a = *a;
temp_b = *b;
*a = temp_b;
*b = temp_a;
return;
}
