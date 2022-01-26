#include <stdio.h>
/*
* This will print all numbers from 0 to 9, then a new line
*/int main(void)
{
int n;

for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar ('\n');
return (0);
}
