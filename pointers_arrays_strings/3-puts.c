#include "main.h"

/**
 * _puts - entry point
 *
 * @str: function parameter 
 * Description: function that prints a string
 * Return: nothing
*/

void _puts(char *str)
{
int lettre;

for (lettre = 0; str[lettre]; lettre++)
{
_putchar(str[lettre]);
}
_putchar('\n');
}
