#include "main.h"
/*
* _abs - prints the absolute value of a number
* return - 0
*/int _abs(int r)
{
if (r >= 0)
{
_putchar(r);
}
else
{
_putchar(r * (-1));
}
return (0);
}
