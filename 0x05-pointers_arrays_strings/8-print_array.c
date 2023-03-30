#include "main.h"

/**
 *print_array - to print the content of an array
 *
 *@a: address of the array
 *@n: size of array
 *
 *Return: void for success
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index == n - 1)
			continue;

		printf(", ");
	}
	printf("\n");
}
