#include "search_algos.h"

/**
 * min - helper function to determine the minimum of 2 values
 *
 * @x: the first number to consider
 * @y: the second number to compare
 *
 * Return: the smaller numbwr
 */
size_t min(size_t x, size_t y)
{
	return ((x < y) ? x : y);
}

/**
 * jump_search - search for value in array using jump search
 *
 * @array: the array to search from
 * @size: the number of elements in the array
 * @value: the value to search for in the array
 *
 * Return: the index where value is found
 *		if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t curr = 0, jump = 0;

	if (!array || !size)
		return (-1);
	while (array[min(jump, size - 1)] < value)
	{
		printf("Value checked array[%ld] = [%d]\n"
			, jump, array[jump]);
		curr = jump;
		jump += sqrt(size);
		if (jump > (size - 1))
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", curr, jump);

	while ((curr <= min(jump, size - 1) && array[curr] <= value))
	{
		printf("Value checked array[%ld] = [%d]\n", curr, array[curr]);
		if (array[curr] == value)
			return (curr);
		curr++;
	}
	return (-1);
}
