#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include<stddef.h>

int _putchar(char);
void print_name(char *, void (*f)(char *));
int int_index(int *, int, int (*cmp)(int));
void array_iterator(int *, size_t, void (*action)(int));
#endif
