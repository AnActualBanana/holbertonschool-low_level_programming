#include "holberton.h"
/*
* int _strcomp - compares two strings
* return - negative, positive, or 0
*/int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] && s2[i]; i++)
{
if (s1[i] == s2[i])
{
continue;
}
else
{
break;
}
}
if (s1[i] == s2[i])
{
return (0);
}
if ((s1[i]) < (s2[i]))
{
return ((s1[i] - s2[i]));
}
else
{
return ((s1[i] + s2[i]));
}
}
