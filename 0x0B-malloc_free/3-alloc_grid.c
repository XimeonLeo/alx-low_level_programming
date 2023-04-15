#include "main.h"

/**
 *alloc_grid - returns a pointer to a two dimensional array
 *
 *@width: the width of array
 *@height: the height of array
 *
 *Return: a double pointer
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int row, column;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		arr[row] = malloc(sizeof(int) * width);

		if (arr[row] == NULL)
		{
			return (NULL);
		}

		for (column = 0; column < width; column++)
		{
			arr[row][column] = 0;
		}
	}
	return (arr);
}
