#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - entry point
 * @width: width of our two dimension array of intergers
 * @height: height of our two dimension array of intergers
 * Description: returns a pointer to a 2 dimensional array of integers
 * Return: Null if failure, pointer if success
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **tableau;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	tableau = malloc(height * sizeof(int *));
	if (tableau == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		tableau[i] = (int *)malloc(width * sizeof(int));

		if (tableau[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(tableau[j]);
			free(tableau);
			return NULL;
		}
	}

	return (tableau);
}
