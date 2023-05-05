#include "main.h"

/**
 * binary_to_uint - converts a binary number to decimal
 *
 * @b: a pointer to the string of number to be converted
 *
 * Return: the converted decimal number
 */

unsigned int binary_to_uint(const char *b)
{
	int index, b_len = 0, power_of_two;
	unsigned int decimal_val;

	if (!b)
	{
		return (0);
	}

	for (index = 0; b[index]; index++)
	{
		if (b[index] != '1' && b[index] != '0')
		{
			return (0);
		}
		b_len++;
	}

	decimal_val = 0;
	power_of_two = 1;
	while (b_len >= 0)
	{
		if (b[(b_len) - 1] == '1')
		{
			decimal_val += power_of_two;
		}
		power_of_two *= 2;
		b_len--;
	}
	return (decimal_val);
}
