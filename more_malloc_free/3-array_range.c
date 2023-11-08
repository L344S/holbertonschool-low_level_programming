#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - entry point
 * @min: int min
 * @max: int max
 * Description: function that creates an array of integers.
 * Return: pointer if success, NULL if failure
 */
int *array_range(int min, int max)
{
	int	*r;
	int	x;

	if (min > max)
		return (0);
	r = (int *) malloc(sizeof(int) * (abs(min - max) + 1));
	if (r == 0)
		return (0);
	for (x = min; x <= max; x++)
		r[x - min] = x;
	return (r);
}
