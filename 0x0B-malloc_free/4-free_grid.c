#include "main.h"

/**
 *free_grid - a function that frees up space allofated in
 *the finction 3-alloc_grid.c
 *
 *@grid: the matrix that needs to be freed
 *@height: the height of the grid to be freed
 *
 *Return: nothing
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
