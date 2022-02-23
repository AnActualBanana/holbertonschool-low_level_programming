#ifndef MAIN_H
#define MAIN_H
/* includes */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/* prototypes */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /* MAIN_H */
