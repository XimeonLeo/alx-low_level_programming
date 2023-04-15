#include "main.h"

/**
 *alloc_grid - returns a pointer to a 2 × 2 matrix
 *of integers.
 *@width: width of the array.
 *@height: height of the array.
 *
 * Return: pointer of an array of integers
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int row, column;

	if (width < 1 || height < 1)
		return (NULL);

	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		arr[row] = malloc(width * sizeof(int));
		if (arr[row] == NULL)
		{
			for (row--; row >= 0; row--)
				free(arr[row]);
			free(arr);
			return (NULL);
		}
	}

	for (row = 0; row < height; row++)
		for (column = 0; column < width; column++)
			arr[row][column] = 0;

	return (arr);
}
