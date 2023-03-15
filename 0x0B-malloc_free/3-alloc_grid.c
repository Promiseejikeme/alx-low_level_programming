#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array
 * of integers
 * @width: accept an integer value representing the width of the grid
 * @height: accepts an integer value
 * Return: return NULL.
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **grid = malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
