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
/**
 * alloc_grid - code explaination comments
 * i and j variables helps us count in our loop
 * tableau is a container that will hold our multi dimensional array
 * we check if width and height not inferior, if so we return NULL
 * we make some space for enough row that height represent
 * if the computer fails to make space then return NULL
 * first loop to go throught height
 * second loop to go throught width
 * we're making space for our current row in the loop -> tableau[i]
 * giving him enough space for width number
 * if we fail making space then return NULL means we can't make the grid
 * we return our complete grid store in tableau
 */
