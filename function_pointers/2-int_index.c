#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array of number
 * @size: size of the array
 * @cmp: function to use
 * Return: -1 if fail and no matching number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
