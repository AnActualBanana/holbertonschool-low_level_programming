#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/*
* main - prints the number of arguments passed to it
* return - 0
*/int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", (argc - 1));
return (0);
}
