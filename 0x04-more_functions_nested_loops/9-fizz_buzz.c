#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
* main - prints the numbers from 1-100, followed by a new line
* except prints 'Fizz' for multiples of 3,
* prints 'Buzz' for multiples of 5,
* and prints 'FizzBuzz' for multiples of 3 and 5
* return - none
*/int main(void)
{
int n;
for (n = 1; n <= 100; n++)
{
if ((n % 3 != 0) && (n % 5 != 0))
{
printf("%i ", n);
}
else if ((n % 3 == 0) && (n % 5 != 0))
{
printf("Fizz ");
}
else if ((n % 3 != 0) && (n % 5 == 0))
{
printf("Buzz");
if (n < 100)
{
printf(" ");
}
}
else if ((n % 3 == 0) && (n % 5 == 0))
{
printf("FizzBuzz ");
}
}
printf("\n");
return (0);
}
