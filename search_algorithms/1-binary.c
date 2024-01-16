#include "search_algos.h"

/**
* binary_search - entry point
* @array: first element of the array (head)
* @size: number of elements in array (size of array)
* @value: value we are searching for
*
* ---------- Description ----------
* This function searches for a value in an sorted array
*
* Return: first index where value is located
* or -1 if array is NULL or value not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, half = 0; /* start is first index, half is middle */
	size_t end = size - 1;      /* end is last index */
	size_t i = 0;               /* index for our loop */

	if (!array || size == 0) /* check if array is NULL or size is 0 */
		return (-1);         /* stop and return -1 */

	while (start <= end) /* loop checking one by one until we reach end */
	{
		half = (start + end) / 2; /* find & updt middle of array at each iteration */

		printf("Searching in array: "); /* print array portion at each iteration */
		for (i = start; i <= end; i++)
		{
			if (i != start)
				printf(", "); /* print delemiter if not first element */

			printf("%i", array[i]); /* print element */
		}
		printf("\n");

		if (array[half] == value)     /* if value is found */
			return (half);            /* stop and return index of search value */
		else if (array[half] < value) /* if value is greater than half */
			start = half + 1;         /* update start to half + 1 */
		else                          /* if value is less than half */
			end = half - 1;           /* update end to half - 1 */
	}
	return (-1); /* if loop ends and value not found, return -1 */
}
/* ----------- Example ------------ */
/* array = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9] */
/* value = 7 */
/* start = 0, half = 4, end = 9 */
/* if value(7) > half(4), start = half + 1 = 5 */
/* start = 5, half = 7, end = 9 */
/* if array[half] == value, return half(7) */
