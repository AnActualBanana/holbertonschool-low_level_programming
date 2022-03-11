#include "dog.h"
/*
* new_dog - creates a new dog
* return - pointer to new dog, or NULL if fail
*/dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *good_boy;
good_boy = malloc(1 * sizeof(dog_t));
if (good_boy == NULL)
{
return (NULL);
}
good_boy->name = name;
good_boy->age = age;
good_boy->owner = owner;
return (good_boy);
}
