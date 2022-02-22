#include "dog.h"
/*
* print_dog - prints a struct dog
* return - none
*/void print_dog(struct dog *d)
{
if (d == NULL)
{
return;
}
if (d.name == NULL)
{
d.name = "(nil)";
}
if (d.age == NULL)
{
d.age = "(nil)";
}
if (d.owner == NULL)
{
d.owner = "(nil)";
}
printf("Name: %s\nAge: %d\nOwner: %s\n", d.name, d.age, d.owner);
return;
}
