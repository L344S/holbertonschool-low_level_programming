#include "main.h"

/**
  * print_rev - Entry point
  * @s : string to update
  * Description: function that prints a string, in reverse
  * Return: Always nothing
*/

void print_rev(char *s)
{
int nbLettre = 0;
int index = 0;
while (s[index++])
nbLettre++;
for (index = nbLettre - 1; index >= 0; index--)
_putchar(s[index]);
_putchar('\n');
}
