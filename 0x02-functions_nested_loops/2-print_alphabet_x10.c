#include "main.h"
/*
* print_alphabet_x10 - prints the lowercase alphabet
* then a new line, ten times
* return - returns
*/void print_alphabet_x10(void)
{
int n;
char i;
for (n = 0; n < 10; n++)
{
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
return;
}
