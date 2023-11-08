#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - entry point
 * @grid: multidimensional array
 * @height: Height of the m array
 * Return: Pointer if successful, NULL on failure.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
