#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
* main - prints all arguments it receives
* return - 0
*/int main(int argc, char *argv[])
{
int count;
for (count = 1; count < argc; count++)
{
printf("%s\n", argv[count]);
}
return (0);
}
