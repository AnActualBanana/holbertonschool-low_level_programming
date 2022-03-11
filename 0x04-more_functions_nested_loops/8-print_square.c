#include "main.h"
/*
* print_square - draws a square on the terminal
* return - none
*/void print_square(int size)
{
int height;
int width;
if (size > 0)
{
for (height = 0; height < size; height++)
{
for (width = 0; width < size; width++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
return;
}
