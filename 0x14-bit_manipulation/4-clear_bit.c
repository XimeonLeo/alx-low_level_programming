#include "main.h"

/**
 * clear_bit - set the bit at a location to 0
 *
 * @n: pointer to the number to be converted
 * @index: location to be changed
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
