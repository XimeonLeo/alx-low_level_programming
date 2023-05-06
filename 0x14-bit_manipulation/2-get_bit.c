#include "main.h"

/**
 * get_bit - locates and return the bit found at a particular index
 *
 * @n: the number to be considered
 * @index: the position to be located
 *
 * Return: 1 or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	if ((n & (1 << index)) == 0)
	{
		return (0);
	}

	return (1);
}
