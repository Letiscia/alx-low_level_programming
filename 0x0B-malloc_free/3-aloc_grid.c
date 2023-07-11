#include "main.h"
/**
 * alloc_grid - allocates a grid
 * @width: width of grid
 * @height: height of grid
 * Return: grid
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(width * sizeof(int));
		if (grid[a] == NULL)
		{
			for (a = a - 1; a >= 0; a--)
			{
				free(grid[a]);
			}
		free(grid);
		return (NULL);
		}
	}
	for (a = 0; b < width; b++)
	grid[a][b] = 0;
	return (grid);
}
