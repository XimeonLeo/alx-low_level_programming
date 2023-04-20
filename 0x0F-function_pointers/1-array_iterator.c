#include "function_pointers.h"

/**
 * array_iterator - Executes an array function of all
 *		elements present in the array
 *
 * @array: a pointer to the array
 * @size: the size of the array
 * @action: a pointer to a function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (index = 0; index < size; index++)
		{
			action(array[index]);
		}
	}
}
