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

	if (!arr)
	{
		return (NULL);
	}

	row = 0;
	while (row < height)
	{
		arr[row] = malloc(sizeof(int *) * width);

		if (!arr[row])
		{
			return (NULL);
		}

		column = 0;
		while (column < width)
		{
			arr[row][column] = 0;
			column++;
		}
		row++;
	}

	return (arr);
	free(arr[row]);
	free(arr);
}
