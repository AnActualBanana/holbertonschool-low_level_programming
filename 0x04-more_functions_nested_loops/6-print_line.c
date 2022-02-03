#include "main.h"
/*
* print_line - draws a straight line of length n
* return - 0
*/void print_line(int n)
{
int length;
if (n > 0)
{
for (length = 0; length < n; length++)
{
_putchar('_');
}
}
_putchar('\n');
return;
}
