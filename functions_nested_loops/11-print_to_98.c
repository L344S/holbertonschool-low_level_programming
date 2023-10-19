#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - print all natural numbers
 *
 * @n:  parameter to check
 *
 * Return: void
 */

void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d", i);
}
}
printf("\n");
}
else if (n > 98)
{
for (i = n; i >= 98; i--)
{
if (i != 98)
{
printf("%d, ", i);
}
else
{
printf("%d", i);
}
}
printf("\n");
}
}
