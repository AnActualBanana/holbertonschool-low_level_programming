#include "main.h"
/*
* main - adds positive numbers
* return - 0 if valid, 1 if error
*/int main(int argc, char *argv[])
{
int count;
int cur_num;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (count = 1; count < argc; count++)
{
if (isdigit(*argv[count]) != 0)
{
cur_num = cur_num + atoi(argv[count]);
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", cur_num);
return (0);
}
