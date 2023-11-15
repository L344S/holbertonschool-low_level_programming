#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - entry point
 * @name: name of the person -> string
 * @f: pointer to an function here its print_name_as_is & print_name_uppercase
 * description: function that prints a name using function in the file 0-main.c
 * return: nothing (void function)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;
	f(name);
}
