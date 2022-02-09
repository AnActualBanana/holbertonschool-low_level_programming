#include "main.h"
/*
* _puts_recursion - prints a string,
* followed by a new line
* return - none
*/void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
s = &s[1];
_print_rev_recursion(s);
s = &s[-1];
_putchar(*s);
}
return;
}
