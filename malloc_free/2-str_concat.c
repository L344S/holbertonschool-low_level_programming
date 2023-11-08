#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - entry point
 * @s1: first string that concatenate with s2
 * @s2: second string that concatenate with s1
 * Description: function that concatenates two strings (s1 + s2)
 * Return: pointer if success or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, a, b;
	char *s1_plus_s2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)

	for (j = 0; s2[j] != '\0'; j++)

	s1_plus_s2 = malloc((i + j + 1) * sizeof(char));

	/*si l'allocation en mémoire ne fonctionne pas alors on renvoie NULL*/
	if (s1_plus_s2 == 0)
		return (NULL);

	/*
	 * boucle : qui va copier lettre par lettre la string s1
	 * pour affecter son contenu à s1_plus_s2
	 */
	for (a = 0; a < i; a++)
	s1_plus_s2[a] = s1[a];

	/*
	 * boucle : qui va copier lettre par lettre la string s2
	 * pour affecter son contenu après le contenu actuel de s1_plus_s2
	 */
	for (b = 0; b < j; b++, a++)
	s1_plus_s2[a] = s2[b];

	s1_plus_s2[a] = '\0';

	/*on retourne le résultat de notre string qui a concaténer s1 et s2*/
	return (s1_plus_s2);
}

/*
 * i = longueur de la string s1
 * j = longueur de la string s2
 * a = utile plus tard dans nos boucles
 * b = utile plus tard dans nos boucles
 * s1_plus_s2 = nouvelle variable qui stockera le resultat
 *
 * si s1 et s2 sont vide, si oui on leurs affecte une string vide
 * on compte la longueur de la string s2 -> qu'on stock dans j
 * on réserve un espace mémoire pour s1_plus_s2
 * qui va contenir le resultat de la concaténation
 */
