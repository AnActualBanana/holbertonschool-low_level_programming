#include <stdio.h>
/*
* This will print all numbers from 0 to 16 in hexadecimal,
* then a new line
*/int main(void)
{
int n;
char a;

for (n = '0'; n <= '9'; n++)
{
putchar (n);
}
for (a = 'a'; a <= 'f'; a++)
{
putchar (a);
}
putchar ('\n');
return (0);
}
