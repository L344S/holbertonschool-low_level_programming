#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - entry point
 * @name: name of the person -> string
 * @f: pointer to an function here its print_name_as_is & print_name_uppercase
 * description: function that prints a name using function in the file 0-main.c
 * francais - on a créer une une fonction qui prends deux arguments
 * un nom :  (*name) -> string ici c'est "Bob"
 * une fonction : qui prends un nom en argument et qui sais quoi faire avec
 * return: nothing (void function)
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL && f == NULL)
		return;
	/*on appelle notre fonction et on lui donne en paramètre un nom*/
	f(name);
	/*
	 * notre main appelera notre fonction print_name et il faudra
	 * lui passer en argument une string et le nom de la fonction qu'on
	 * veut utiliser pour print notre nom
	 */
}
