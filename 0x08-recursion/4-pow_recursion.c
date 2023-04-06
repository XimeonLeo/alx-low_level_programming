#include "main.h"

/**
 *_pow_recursion - prints the result of a number raised
 *to a given power
 *
 *@x: the base of the operation
 *@y: the power of the operation
 *
 *Return: the value of x raised to the power of x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
