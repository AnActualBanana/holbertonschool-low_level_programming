#include "main.h"
/*
* _isalpha - checks if character is alphanumeric
* return - 1 if true, 0 if false
*/int _isalpha(int c)
{
if ((c >= 0 && c <= 47) || (c >= 58 && c <= 64) || c >= 123)
{
return (0);
}
else
{
return (1);
}
}
