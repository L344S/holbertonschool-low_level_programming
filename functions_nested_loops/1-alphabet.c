#include <stdio.h>

/**
* print_alphabet - entry point
*
* Return: nothing.
*/
void print_alphabet(void)
{
char lettre;

for (lettre = 'a'; lettre <= 'z'; lettre++)
{
_putchar(lettre);
}
_putchar('\n');
}
