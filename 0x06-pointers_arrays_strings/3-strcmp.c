#include "holberton.h"
/*
* int _strcomp - compares two strings
* return - negative, positive, or 0
*/int _strcmp(char *s1, char *s2)
{
if (s1 < s2)
{
return ((-1));
}
else if (s1 > s2)
{
return ((+1));
}
else
{
return ((0));
}
}
