#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates memory for a 2D array of integers.
 * @width: Width of the 2D array.
 * @height: Height of the 2D array.
 *
 * Return: Pointer to the 2D array, or NULL if failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
