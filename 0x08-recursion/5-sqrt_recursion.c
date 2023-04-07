#include "main.h"

/**
 *_sqrt_recursion - gets the square root of a number
 *
 *@n: the number to get it's square root
 *
 *Return: the square root of the number n
 */

int _sqrt_recursion(int n)
{
	return (assist_func(n, 1));
}

/**
 *assist_func - a funtion that helps the main funtion
 *determine the square root of a number
 *
 *@val: the actual number whose square root is to
 *be determined
 *@dgt: a test value that will be check if val
 *is a perfect square
 *
 *Return: results for _squrt_recursion function
 */

int assist_func(int val, int dgt)
{
	if (dgt * dgt > val)
	{
		return (-1);
	}

	if (dgt * dgt == val)
	{
		return (dgt);
	}

	return (assist_func(val, dgt + 1));
}
