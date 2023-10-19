#include "main.h"

/**
 * print_numbers - print number
 * Description: print numbers
 * Return: void
*/

void print_numbers(void)
{
int num;

for (num = 0; num < 10; num++)
{
_putchar('0' + num);
}
_putchar('\n');
}
