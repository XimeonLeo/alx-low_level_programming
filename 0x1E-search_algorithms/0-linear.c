#include "search_algos.h"

/**
 * linear_search - performs a linear search on array
 *
 * @array: a pointer to the first element of the array
 * @size: the nu!ber of elements in the array
 * @value: the value to serch for in the array
 *
 * Return: the index where value is found or -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	if (array)
	{
		size_t index;

		for (index = 0; index < size; index++)
		{
			printf("Value checked array[%ld] = [%d]\n"
				, index, array[index]);
			if (array[index] == value)
				return (index);
		}
		return (-1);
	}
	return (-1);
}
