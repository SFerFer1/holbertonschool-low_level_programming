#include <stddef.h>
#ifndef MAIN_H
#define MAIN_H


int _putchar (char c);
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

int sum_them_all(const unsigned int n, ...);
#endif /* MAIN_H */
