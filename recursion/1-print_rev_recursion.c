#include "main.h"
#include <stdio.h>
/**
 *  _print_rev_recursion - entry point
 * @s: pointer of a string with the value : 'Puts with recursion'
 * Description: function that prints a string, followed by a new line.
 * Return: 0 if success
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
