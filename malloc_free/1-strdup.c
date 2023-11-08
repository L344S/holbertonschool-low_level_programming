#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - entry point
 * @str: the string we need to duplicate
 * Description: copy of the string given as a parameter
 * Return: a pointer to a new string or NULL
 */
char *_strdup(char *str)
{

	int i;
	char *copy_str;

	/*Si str est vide alors return NULL*/
	if (str == 0)
		return (NULL);

	/*On calcule la longueur de la string str*/
	for (i = 0; str[i]; i++)

		/*On réserve de l'espace mémoire pour notre copy_str*/
		copy_str = (char *) malloc(sizeof(char) * (i + 1));

	/*Si l'allocation de mémoire échoue alors on renvoie NULL*/
	if (copy_str == 0)
		return (NULL);

	/*On copie la string str dans copy_str lettre par lettres*/
	for (i = 0; str[i]; i++)
		copy_str[i] = str[i];

	copy_str[i] = '\0';

	/*Une fois la copie faite on renvoie le copy_str final et complet*/
	return (copy_str);
}
