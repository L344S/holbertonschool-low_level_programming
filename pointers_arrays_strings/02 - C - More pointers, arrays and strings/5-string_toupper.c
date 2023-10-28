#include "main.h"
#include <stdio.h>
/**
 * string_toupper - entry point
 * @string: pointer
 * Description: function that changes
 * all lowercase letters of a string to uppercase.
 * Return: convert string if success
 */
char *string_toupper(char *string)
{
int i;
/*
 * on boucle tant qu'on n'est pas a la fin de la string
 */
for (i = 0; string[i] != '\0'; i++)
{
/*
 * On vérifie que notre élément est bien une minuscule
 */
if (string[i] >= 'a' && string[i] <= 'z')
/*
 * On assigne la valeur convertit à string.
 * ex if i = 'a'
 * son code ascii est de 97
 * le code ascii des 'A' c'est 65
 * alors on enlève 32 pour convertir nos minuscules en MAJ
 */
string[i] = string[i] - 32;
}
return (string);
}
