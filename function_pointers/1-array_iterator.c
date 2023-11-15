#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - print number transform with different functions
 * @array: array of number
 * @size: size of the array
 * @action: function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; array[i] != array[size]; i++)

			action(array[i]);
	}
}
