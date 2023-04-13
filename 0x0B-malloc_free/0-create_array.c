#include "main.h"

/**
 *create_array - creates an array holding a specific char
 *
 *@size: size of array
 *@c: character to fill
 *
 *Return: a pointer to character
 */

char *create_array(unsigned int size, char c)
{
	char *point;
	unsigned int index;

	if (!(size))
	{
		return (NULL);
	}

	point = malloc(sizeof(c) * size);

	if (point == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < size; index++)
	{
		point[index] = c;
	}

	return (point);

}
