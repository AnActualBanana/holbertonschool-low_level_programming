#include <stdio.h>
/*
* This prints all numbers from 0 to 9, then a new line
*/int main(void)
{
char n;

for (n = '0'; n <= '9'; n++)

{
putchar (n);
}
putchar ('\n');
return (0);
}
