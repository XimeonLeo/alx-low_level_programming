#include "main.h"

/**
 *factorial - prints the factorial of a given number
 *
 *@n: number given
 *
 *Return: with the calue of factorial if the number
 */

int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
