#include "main.h"

/**
 * print_square - draw a square
 * @size: the size of our square
 * Description: longueur same as hauteur
 */
void print_square(int size)
{
int longueur, hauteur;
hauteur = 0;

while (hauteur < size)
{
for (longueur = 0; longueur <= size; longueur++)
{
_putchar('#');
}
_putchar('\n');
hauteur++;
}
if (size < 1)
{
_putchar('\n');
}
}
