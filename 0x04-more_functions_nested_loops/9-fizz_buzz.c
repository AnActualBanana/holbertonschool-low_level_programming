#include "main.h"
/*
* main - prints the numbers from 1-100, followed by a new line
* except prints 'Fizz' for multiples of 3,
* prints 'Buzz' for multiples of 5,
* and prints 'FizzBuzz' for multiples of 3 and 5
* return - none
*/void main(void)
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
printf("Buzz ");
}
else if ((n % 3 == 0) && (n % 5 == 0))
{
printf("FizzBuzz ");
}
}
printf("\n");
return;
}
