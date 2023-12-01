#include "main.h"
/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: pointer to the number
* @index: index of the bit to set
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int lenght;

	unsigned long int mask;

	lenght = sizeof(*n) * 8 - 1;

	if (index > lenght)
		return (-1);

	mask = 1 << index;

	*n = *n & ~mask;

	return (1);
}
