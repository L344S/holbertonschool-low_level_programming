#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number
 *
 * @n: The number to be checked.
 *
 * Description: Prints if n is positive, negative, or zero.
 * Return: 1 if positive, 0 if n is zero, -1 if negative.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
