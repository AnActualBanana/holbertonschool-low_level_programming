#include "main.h"
/*
* main - multiplies two numbers
* return - 0 if two arguments given, 1 if else
*/int main(int argc, char *argv[])
{
if (argc == 3)
{
int num_1;
int num_2;
int product;
num_1 = atoi(argv[1]);
num_2 = atoi(argv[2]);
product = (num_1 *num_2);
printf("%d\n", product);
return (0);
}
else
{
printf("Error\n");
return (1);
}
}
