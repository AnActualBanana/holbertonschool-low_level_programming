#ifndef MAIN_H
#define MAIN_H
/* includes */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
/* prototypes */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* MAIN_H */
