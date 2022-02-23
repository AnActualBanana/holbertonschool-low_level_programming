#include "function_pointers.h"
/*
* print_name - prints a name
* return - none
*/void print_name(char *name, void (*f)(char *))
{
	if (!name)
		return;
	f(name);
}
