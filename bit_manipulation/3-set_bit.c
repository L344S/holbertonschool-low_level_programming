#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number
 * @index: index to set the value
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int lenght;
	unsigned long int mask;

	lenght = sizeof(*n) * 8 - 1;

	if (index > lenght)
		return (-1);

	mask = 1 << index;

	*n = mask | *n;

	return (1);
}