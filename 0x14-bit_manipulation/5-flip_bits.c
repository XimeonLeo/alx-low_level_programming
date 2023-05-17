#include "main.h"

/**
 * flip_bits - gets the number of bits needed to be flied to 
 *		convert one number to another
 *
 * @n: the first number to consider
 * @m: the second number to consider
 *
 * Return: the number of bit needed to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned long int bits_to_flip;

	bits_to_flip = 0;
	while (xor > 0)
	{
		bits_to_flip += (xor & 1);
		xor >>= 1;
	}

	return (bits_to_flip);
}
