#include "main.h"
/*
* _strlen - returns the length of a string
* return - the length of the string
*/int _strlen(char *s)
{
char c[] = "*s";
int i;
for (i = 0; c[i] != '\0'; i++);
return (i);
}
