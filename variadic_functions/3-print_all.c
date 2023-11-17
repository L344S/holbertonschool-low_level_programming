#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - function that prints anything (every datatype)
 * @format: type of paramètre to print
 * Return: print tout les paramètres peu importe leurs datatype
 */
void print_all(const char * const format, ...)
{
	char *str;
	va_list parametres;
	unsigned int i = 0;

	va_start(parametres, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(parametres, int));
				break;
			case 'i':
				printf("%d", va_arg(parametres, int));
				break;
			case 'f':
				printf("%f", va_arg(parametres, double));
				break;
			case 's':
				str = va_arg(parametres, char *);

				if (str != NULL) {
					printf("%s", str);
				} else {
					printf("(nil)");
				}
				break;
			default:
				break;
		}
		if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' ||
					format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(parametres);
}
