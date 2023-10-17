#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: This function prints the string "_putchar"
 * Return: Always returns 0
*/
int main(void)
{
_putchar('_');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');

return (0);
}

/**
* _putchar - Writes a character to the standard output.
* @l: The character to be written.
* Description: This function writes the character @l to the standard output.
* Return: Upon success, it returns the number of characters written (1).
* On error, it returns -1 and sets the errno to indicate the error.
*/
int _putchar(char l)
{
return (write(1, &l, 1));
}
