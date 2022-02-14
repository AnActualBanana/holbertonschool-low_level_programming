#include "main.h"
/*
* _puts - prints a string, followed by a new line,
* to stdout
* return - none
*/void _puts(char *str)
{
while (*str)
{
_putchar(*str);
str++;
}
putchar('\n');
return;
}
