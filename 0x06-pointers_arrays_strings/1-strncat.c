#include "holberton.h"
/*
* char *_strncat - concatenates two strings,
* but it will use at most n bytes from src,
* and src does not need to be null-terminated if,
* it contains n or more bytes
* return - a pointer to the resulting string dest
*/char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; j < n; j++)
{
dest[i + j] = src[j];
}
if (j < n)
{
dest[i + j] = '\0';
}
return (dest);
}
