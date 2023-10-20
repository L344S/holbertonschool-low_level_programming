#include "main.h"

/**
 * print_triangle - draw a triangle
 * @size: the size of our triangle
 * Description: just a triannngleee
 */
void print_triangle(int size)
{
int c1 = 0;
int c2;

if (size <= 0)
{
_putchar('\n');
}
else
while (c1 < size)
{
for (c2 = 1; c2 <= size; c2++)
{
if (c2 < (size - c1))
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
c1++;
}
}
