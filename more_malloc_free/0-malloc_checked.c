#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - entry point
 * @b: quantity of memory we want to allocates to our function
 * Return: pointer if successful or NULL if failure
 */
void *malloc_checked(unsigned int b)
{
	/*déclaration de variable qui va stocker notre mémoire alloué*/
	int *memory = malloc(b);

	/*si l'allocation de mémoire échoue alors on renvoie le statut 98*/
	if (memory == NULL)
		exit(98);

	/*on renvoie notre pointeur qui stocke l'adresse de la mémoire alloué*/
	return (memory);
}
