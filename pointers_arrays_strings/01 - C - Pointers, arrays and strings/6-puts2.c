#include "main.h"

/**
 * puts2 - entry point
 *
 * @str: pointer to an string
 * Description: function that prints every other character of a string.
 * Return: nothing
 */

void puts2(char *str)
{
int lettre;

for (lettre = 0; str[lettre] != '\0'; lettre++)
{
if (lettre % 2 == 0)
_putchar(str[lettre]);
}
_putchar('\n');
}
