#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number.
 *
 * @num: the value to check it
 *
 * Description: prints the last digit of a number.
 * Return: the value of num
*/

int print_last_digit(int num)
{
int d = num % 10;
if (d < 0)
d *= -1;

_putchar(d + '0');

return (d);
}
