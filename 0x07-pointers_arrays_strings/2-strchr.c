#include "main.h"
/*
* *_strchr - locates a character in a string
* return - pointer if c is found, null otherwise
*/char *_strchr(char *s, char c)
{
unsigned int i;
char *n;
n = s;
for (i = 0; s[i] != '\0'; i++)
{
n = &s[i];
if (s[i] == c)
{
return (n);
}
}
return (0);
}
