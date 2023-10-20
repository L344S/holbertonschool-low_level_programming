#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: how many slash we need to print
 * Description: draw a diagonal
 */
void print_diagonal(int n)
{
int o, s;

for (o = 1; o <= n; o++)
{
for (s = 2; s <= o; s++)
{
_putchar(' ');
}
_putchar('/');
_putchar('\n');
}
if (n > 1)
{
_putchar('\n');
}
}
