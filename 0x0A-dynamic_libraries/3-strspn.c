#include "main.h"
/*
* _strspn - gets the length of a prefix substring
* return - the nubmer of bytes in s which consist,
* only of bytes from accept
*/unsigned int _strspn(char *s, char *accept)
{
unsigned int i;
unsigned int j;
unsigned int p;
for (i = 0; s[i] != '\0'; i++)
{
for (p = 0; accept[p] != '\0'; p++)
{
if (s[i] == accept[p])
{
(j++);
}
}
}
return (j);
}
