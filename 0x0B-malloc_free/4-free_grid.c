#include"main.h"
#include<stdlib.h>
/**
 * free_grid - frees up a grid
 * @grid - grid to be freed
 * @height: height of grid
 * Return: nothing
 */
void free_grid(int **grid, int height __attribute__((unused)))
{
	int i;

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)realloc(grid[i], 0);
	}
	free(grid);
}
