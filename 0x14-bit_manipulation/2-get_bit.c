#include "main.h"

/**
 * set_bit - changes the bit at a particular index using not
 *
 * @n: a pointer to the number to be tempared
 * @index: the position to change
 *
 * Return: a new number
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n ^= (1 << index);

	return (1);
}
