#include "dog.h"
/*
* int_dog - initializes a variable of type struct dog
* return - none
*/void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
return;
}
d->name = name;
d->age = age;
d->owner = owner;
return;
}
