#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: number to flip
 * @m: number to flip to
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int lenght;
	unsigned long int nb_of_fbits;
	unsigned long int i;

	lenght = sizeof(n) * 8 - 1;

	nb_of_fbits = 0;
	i = 0;

	while (i <= lenght)
	{
		if ((n & 1) != (m & 1))
			nb_of_fbits++;

		n = n >> 1;
		m = m >> 1;

		i++;
	}

	return (nb_of_fbits);

}
