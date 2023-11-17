#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: charactère à print entre les nombres
 * @n: nombre de parametre
 * @...: les paramètres passer à la fonction pour qui'ils soit affiché
 * Return: print de tout les nombres en paramètres séparer par une virgules
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list parametres;
	unsigned int i;

	va_start(parametres, n);

	for (i = 0; i < n; i++)
	{
		/* print le chiffre en paramètre */
		printf("%d", va_arg(parametres, int));

		/* ajoute une virgule si separator n'est pas NULL */
		/* et si c'est n'est pas le dernier paramètre */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(parametres);
}
