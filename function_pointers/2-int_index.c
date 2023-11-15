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
	int i;

	if (size != 0 || array != NULL || cmp != NULL)
	{
		for (i = 0; i < size; i++)

			if (cmp(array[i]))
			{
				return (i);
			}
	}
	return (-1);
}
