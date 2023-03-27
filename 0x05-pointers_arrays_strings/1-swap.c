#include "main.h"

/**
 *swap_int - To interchange the values of
 *two variables
 *@a: first integer
 *@b: secomd integer
 *Return: void for success
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
