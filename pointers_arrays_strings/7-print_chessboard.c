#include "main.h"
#include <stdio.h>
/**
 * leet - entry point
 * @s: pointer
 * Description: function that encodes a string into 1337.
 * Return: convert string if success
 */
void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar('\n');
}
}
