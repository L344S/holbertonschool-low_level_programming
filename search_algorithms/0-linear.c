#include "search_algos.h"

/**
* linear_search - entry point
* @array: first element of the array (head)
* @size: number of elements in array (size of array)
* @value: value we are searching for
*
* ---------- Description ----------
* This function searches for a value in an array of integers
*
* Return: first index where value is located
* or -1 if array is NULL or value not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0; /* index for our loop */

	/* check : if array, size, or value is NULL */
	if (array == NULL || size == 0)
		return (-1);

	/* loop through array checking one by one */
	for (index = 0; index < size; index++)
	{
		/* for each iteration print the index and value of the element */
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);

		/* if current element is equal to value */
		if (array[index] == value)
			/* stop printing and return index */
			return (index);
	}
	return (-1); /* if loop ends and value not found, return -1 */
}
