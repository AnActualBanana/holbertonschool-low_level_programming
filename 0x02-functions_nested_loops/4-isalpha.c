#include "main.h"
/*
* _isalpha - checks if character is alphanumeric
* return - 1 if true, 0 if false
*/int _isalpha(int c)
{
if ((c >= 48 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
{
return (0);
}
}
