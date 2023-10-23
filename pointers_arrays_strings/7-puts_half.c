#include "main.h"

/**
 * puts_half - entry point
 *
 * @str: function parameter
 * Description: function that prints half of a string
 * Return: nothing
*/

void puts_half(char *str)
{
int letter;

for (letter = 0; str[letter] != '\0'; letter++)

letter++;

for (letter /= 2; str[letter] != '\0'; letter++)
{
_putchar(str[letter]);
}
_putchar('\n');
}
