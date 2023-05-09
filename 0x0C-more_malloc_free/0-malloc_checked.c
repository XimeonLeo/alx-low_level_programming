#include "main.h"

/**
 * malloc_checked - assign memory space
 *
 * @b: the size of the type to be allocated
 *
 * Return: a pointer to the allocated space
 */

void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);

	if (!space)
	{
		exit(98);
	}

	return (space);
}
