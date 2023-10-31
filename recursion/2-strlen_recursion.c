#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - entry point
 * @s: pointer to a string
 * Description: function that returns the length of a string
 * Return: (int) if success
 */
int _strlen_recursion(char *s)
{
/*Cas de base : si le current char est null alors on arrête de boucler*/
if (*s == '\0')
{
return (0);
}
/*
 * On créer une variable i dans laquelle on va stocker le nombre de lettres
 * On boucle en utlisant la recursion pour passer au caractère suivant (s + 1)
 * Chaque fois qu'on passe au carractère suivant on incrémente notre return
 */
else
{
int i = _strlen_recursion(s + 1);
i++;
return (i);
}
}
