#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
* main - multiplies two numbers
* return - 0 if two arguments given, 1 if else
*/int main(int argc, char *argv[])
{
if (argc == 3)
{
int number_1;
int number_2;
int product;
number_1 = (*argv[1] - '0');
number_2 = (*argv[2] - '0');
product = (number_1 *number_2);
printf("%d\n", product);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
