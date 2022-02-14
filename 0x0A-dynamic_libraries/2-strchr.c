#include "main.h"
#include <stddef.h>
/*
* *_strchr - locates a character in a string
* return - pointer if c is found, null otherwise
*/char *_strchr(char *s, char c)
{
unsigned int i;
for (i = 0; s[i] >= '\0'; i++)
{
if (s[i] == c)
{
return (s + i);
}
}
return (NULL);
}
