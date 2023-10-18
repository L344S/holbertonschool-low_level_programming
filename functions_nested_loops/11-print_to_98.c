#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print the all natural numbers
 * @n: int
 * Description: 98
 * Return: void
*/

void print_to_98(int n)
{
while (n != 98)
{
putchar('0' + n / 10);
putchar('0' + n % 10);
if (n < 98)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
}
n += (n < 98) ? 1 : -1;
}
}
