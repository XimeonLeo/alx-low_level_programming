#include "search_algos.h"

/**
 * probe - an helper function that implemet the ppf
 *
 * @array: a pointer to the first element of the array
 * @low: the updated low index
 * @high: the updated high index
 * @value: the element looked for
 *
 * Return: the index value ia found
 */
int probe(int *array, size_t low, size_t high, int value)
{
	size_t location;

	if (low <= high)
	{
		location = low + (((double)(high - low) / (array[high] - array[low]))
				* (value - array[low]));

		if (value < array[low] || value > array[high])
		{
			printf("Value checked array[%ld] is out of range\n", location);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", location, array[location]);
		if (array[location] == value)
			return (location);
		if (array[location] < value)
			return (probe(array, location + 1, high, value));
		if (array[location] > value)
			return (probe(array, low, location - 1, value));
	}
	return (-1);
}

/**
 * interpolation_search - searches for value in array using
 *		interpolation search algorithm
 * @array: a pointer to the first element of the array
 * @size: number of elements in the array
 * @value: the value to look for in the array
 *
 * Return: the index where value is found or -1 if not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (probe(array, 0, size - 1, value));
}
