#include "main.h"
#include <stdio.h>
/**
 *  _puts_recursion - entry point
 * @s: pointer of a string with the value : 'Puts with recursion'
 * Description: function that prints a string, followed by a new line.
 * Return: 0 if success
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
++s;
_puts_recursion(s);
}
else
{
_putchar('\n');
}
}
