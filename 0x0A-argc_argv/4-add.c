#include "main.h"
/*
* main - adds positive numbers
* return - 0 if valid, 1 if error
*/int main(int argc, char *argv[])
{
int count;
int count2;
int cur_num = 0;
char *num_str = NULL;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (count = 1; count < argc; count++)
{
num_str = argv[count];
for (count2 = 0; num_str[count2] != '\0'; count2++)
{
if (num_str[count2] < '0' || num_str[count2] > '9')
{
printf("Error\n");
return (1);
}
}
cur_num = cur_num + atoi(argv[count]);
}
printf("%d\n", cur_num);
return (0);
}
