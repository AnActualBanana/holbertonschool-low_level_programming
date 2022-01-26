#include <stdio.h>
/*
* This will print the alphabet in lowercase, except q and e
*/int main(void)
{
char n;

for (n = 'a'; n <= 'z'; n++)
{
if (n != 'q' && n != 'e')
{
putchar (n);
}
}
putchar ('\n');
return (0);
}
