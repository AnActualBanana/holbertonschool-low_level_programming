#include "variadic_functions.h"
/*
* sum_them_all - sums its parameters
* return - the sum of parameters, or 0
*/int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum;
va_list args;
if (args == 0 || n == 0)
{
return (0);
}
va_start(args, n);
sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
