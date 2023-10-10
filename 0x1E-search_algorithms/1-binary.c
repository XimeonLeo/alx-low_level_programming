#include "search_algos.h"

void printx(int *array, size_t left, size_t right)
{
	char *comma = NULL;

	printf("Searching in array: ");

	for (; left <= right; left++)
	{
		if (comma != NULL)
			printf("%s", comma);
		printf("%d", array[left]);
		comma = ", ";
	}
	printf("\n");
}

/**
 * binary_search - search for value in array using binary search
 *
 * @array: a pointer to the first element in the array
 * @size: the number of elementsnin the array
 * @value: the value to search for in the array
 *
 * Return: the index where value is found,
 * 	-1 if array is NULL or if value is not found
 */

int binary_search(int *array, size_t size, int value)
{
	if (array)
	{
		size_t left = 0, mid, right = size - 1;

		printx(array, left, right);
		while (left != right)
		{
			mid = (left + right) / 2;

			if (array[mid] == value)
				return (mid);
			else if (array[mid] < value)
				left = mid + 1;
			else
				right = mid - 1;
			printx(array, left, right);
		}
		/* If it reaches here, right must be equal to left
		 * we have to check if the last element is what
		 * we are looking for
		 */
		if (array[left] == value)
			return (right);
		return (-1);
	}
	return (-1);
}
