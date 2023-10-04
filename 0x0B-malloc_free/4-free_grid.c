#include "main.h"
/**
 * free_grid - frees memory
 * @grid: array to free
 * @height: height of 2d array
 * Return: none
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
