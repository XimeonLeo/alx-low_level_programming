#include "main.h"

/**
 *assist_prime - helps the is_prime_number function declear
 *a variable
 *
 *@val: the original value to check from the first function
 *@dgt: the variable decleared
 *
 *Return: proof that we have a prime or not
 */

int assist_prime(int val, int dgt)
{
	if ((val < dgt) || ((val % dgt == 0) && (val != dgt)))
	{
		return (0);
	}

	if ((val == dgt) || ((val % dgt == 0) && (val == dgt)))
	{
		return (1);
	}

	return (assist_prime(val, dgt + 1));
}

/**
 *is_prime_number - to determine if a number is prime or not
 *
 *@n: the number to check
 *
 *Return: 1 if prime and zero if not
 */

int is_prime_number(int n)
{
	return (assist_prime(n, 2));
}
