#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function declaration
 * @grid: 2 dimesional array
 * @height: the height
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
