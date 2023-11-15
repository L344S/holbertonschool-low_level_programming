#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
#include <stddef.h>

/*0-print_name.c*/
void print_name(char *name, void (*f)(char *));

/*1-array_iterator.c*/
void array_iterator(int *array, size_t size, void (*action)(int));

/*2-int_index.c*/
int int_index(int *array, int size, int (*cmp)(int));

/*3-op_functions.c*/
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/*3-get_op_func.c*/
int (*get_op_func(char *s))(int, int);

#endif
