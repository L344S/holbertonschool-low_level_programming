#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number or 0 if b is NULL or contains chars not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
    /* variable qui va contenir le nombre converti */
	unsigned int num = 0;
    /* variable qui va contenir la base de la puissance */
	int base = 1;
    /* variable qui va contenir la longueur de la chaine */
	int lenght = 0;

    /* si b est NULL, on retourne 0 */
	if (b == NULL)
		return (0);

    /* on parcourt la chaine pour verifier si elle contient que des 0 et 1 */
	for (lenght = 0; b[lenght] != '\0'; lenght++)
    /* si on trouve un caractere different de 0 ou 1, on retourne 0 */
		if (b[lenght] != '0' && b[lenght] != '1')
			return (0);

    /* on parcourt la chaine en partant de la fin */
    /* on convertit chaque caractère en nombre */
    /* on multiplie le nombre par la base de la puissance */
    /* on incremente la base de la puissance */
    /* on incremente le nombre */
    /* on decremente la longueur */
	for (lenght--; lenght >= 0; lenght--, base = base * 2)
		if (b[lenght] == '1')
			num = num + base;

    /* on retourne le nombre converti */
	return (num);
}
