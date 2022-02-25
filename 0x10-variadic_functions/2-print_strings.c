#include "variadic_functions.h"
/*
* print_numbers - prints numbers, followed by a new line
* return - none
*/void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int count;
char *string;
va_list args;
if (args == 0)
{
return;
}
va_start(args, n);
for (count = 0; count < n; count++)
{
string = va_arg(args, char *);
if (string == NULL)
{
printf("(nil)");
}
else
{
printf("%s", string);
}
if (count != (n - 1) && separator != NULL)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
return;
}
