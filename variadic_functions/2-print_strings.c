#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: charactère à print entre les nombres
 * @n: nombre de parametre
 * @...: les paramètres passer à la fonction pour qui'ils soit affiché
 * Return: print toutes les strings en paramètres séparé par une virgule
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	va_list parametres;
	unsigned int i;

	va_start(parametres, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(parametres, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		/* ajoute une virgule si separator n'est pas NULL */
		/* et si c'est n'est pas le dernier paramètre */
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(parametres);
}
