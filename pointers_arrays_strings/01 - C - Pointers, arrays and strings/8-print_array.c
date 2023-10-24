#include "main.h"
#include <stdio.h>
/**
 * print_array - entry point
 *
 * @a: function parameter
 * @n: function parameter
 * Description: function that prints n elements of an array of integers
 * Return: nothing
*/

void print_array(int *a, int n)
{
int p;

for (p = 0; p < n; p++)
{
printf("%d", a[p]);
if (p < (n - 1))
{
printf(", ");
}
}
printf("\n");
}
