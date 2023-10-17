#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase with for
 *
 * Description: print the alphabet
 * Return: void
*/

void print_alphabet(void)
{
int i, letter;
for (i = 1; i <= 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
