#include "3-calc.h"

/**
 * op_add - finds the summation of two numbers
 *
 * @a: first number
 * @b: sedomd number
 *
 * Return: sum of numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds the differnece between two numbers
 *
 * @a: first number
 * @b: second number
 *
 * Return: the difference of two numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds the product of two numbers
 *
 * @a: the first number
 * @b: the second number
 *
 * Return: the product of two numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a number by another
 *
 * @a: the first number
 * @b: the other number
 *
 * Return: the division of two numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets what remains when a number is divided by another
 *
 * @a: the first number
 * @b: the second number
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
