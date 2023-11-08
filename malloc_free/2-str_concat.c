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

    // Check if s1 or s2 are NULL and replace with empty strings
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    // Calculate the lengths of s1 and s2
    for (i = 0; s1[i] != '\0'; i++)
        ;  // Empty loop body, just count the characters in s1

    for (j = 0; s2[j] != '\0'; j++)
        ;  // Empty loop body, just count the characters in s2

    // Allocate memory for the concatenated string
    s1_plus_s2 = (char *)malloc((i + j + 1) * sizeof(char));

    // Check if memory allocation failed
    if (s1_plus_s2 == NULL)
        return (NULL);

    // Copy characters from s1 to s1_plus_s2
    for (a = 0; a < i; a++)
        s1_plus_s2[a] = s1[a];

    // Copy characters from s2 to s1_plus_s2 after the s1 content
    for (b = 0; b < j; b++, a++)
        s1_plus_s2[a] = s2[b];

    // Null-terminate the concatenated string
    s1_plus_s2[a] = '\0';

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
