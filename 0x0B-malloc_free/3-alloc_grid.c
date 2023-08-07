#include"main.h"
#include<stdlib.h>
/**
 * alloc_grid - allocates a grid
 * @width: size of 2d array
 * @height: size of 2d array
 * Return: double pointer
 */
int **alloc_grid(int width, int height)
{
	int **grid = (int **)malloc(width * sizeof(int));
	int i, h;

	if (grid != NULL && width >= 0 && height >= 0)
	{
		for (i = 0; i < width; i++)
		{
			grid[i] = (int *)malloc(height * sizeof(int));
			for (h = 0; h < height; h++)
			{
				grid[i][h] = 0;
			}
		}
		return (grid);
	}
	else
		return (NULL);
}
