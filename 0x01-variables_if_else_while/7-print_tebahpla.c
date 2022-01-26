#include <stdio.h>
/*
* This will print the lowercase letters of the alphabet in reverse,
* then a new line
*/int main(void)
{
char n;

for (n = 'z'; n >= 'a'; n--)
{
putchar (n);
}
putchar ('\n');
return (0);
}
