#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print
 * Return: nothing (void)
 */
void print_binary(unsigned long int n)
{
	unsigned long value = n;

	if (value > 1)
		print_binary(value >> 1);

	_putchar((value & 1) + '0');
}

