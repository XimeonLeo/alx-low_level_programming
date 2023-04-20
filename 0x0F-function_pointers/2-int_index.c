#include "function_pointers.h"

/**
 * int_index - returns the index where a particular
 *		comdition is meet in a function array
 *
 * @array: a pointer to an array
 * @size: the size of thre array
 * @cmp: a pointer to the functions with the conditions
 *
 * Return: 1 for success and -1 if not
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size <= 0)
	{
		return (-1);
	}


	if (array != NULL && size > 0 && cmp != NULL)
	{
		for (; index < size; index++)
		{
			if (cmp(array[index]) == 1)
				return (index);
		}
	}
	return (-1);
}
