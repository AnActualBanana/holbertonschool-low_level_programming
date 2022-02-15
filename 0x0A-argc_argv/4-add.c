#include "main.h"
/*
* main - adds positive numbers
* return - 0 if valid, 1 if error
*/int main(int argc, char *argv[])
{
int count;
int cur_num;
 if (argc < 2)
   {
     printf("0\n");
     return (-1);
   }
 for (count = 1; count < argc; count++)
   {
     cur_num += atoi(argv[count]);
   }
 printf("%d\n", cur_num);
 return (0);
}
