#include "variadic_functions.h"
/*
* print_numbers - prints numbers, followed by a new line
* return - none
*/void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int count, num;
va_list args;
if (args == 0 || n == 0 ||)
{
return;
}
va_start(args, n);
num = 0;
for (count = 0; count < n; count++)
{
num = va_arg(args, int);
printf("%d", num);
if (count != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
return;
}
