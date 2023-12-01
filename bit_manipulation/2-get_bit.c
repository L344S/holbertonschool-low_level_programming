#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be converted
 * @index: index of the bit to be returned
 * Return: value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int lenght;

	lenght = sizeof(n) * 8 - 1;

	if (index > lenght)
		return (-1);

	return ((n >> index) & 1);

}
