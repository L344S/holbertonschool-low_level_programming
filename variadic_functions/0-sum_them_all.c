#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: nombre de parametre
 * @...: les paramètres passer à la fonction pour qu'ils soit additioné
 * Return: int of the result of the operation +
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list parametres;
	unsigned int i;

	/* si n = 0, alors on a aucun paramètre donc return -> 0 */
	if (n == 0)
		return (0);

	/* initalisation de notre variable de liste paramètres */
	va_start(parametres, n);

	/* Boucle qui va prendre tout les paramètres et les ajouter à sum */
	for (i = 0; i < n; i++)
		sum = sum + va_arg(parametres, int);

	va_end(parametres);

	return (sum);
}
