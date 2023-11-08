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
		tableau[i] = malloc(width * sizeof(int));
		for (j = 0; j < width; j++)
		{
			if (tableau[i] == NULL)
				return (NULL);
		}
	}

	return (tableau);
}
