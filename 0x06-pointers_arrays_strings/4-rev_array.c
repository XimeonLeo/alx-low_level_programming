#include "main.h"

/**
 *reverse_array - to reverse the content of array 'a'
 *
 *@a: array to reverse
 *@n: size of the array
 *
 *Return: void for success
 */

void reverse_array(int *a, int n)
{
	int index;
	int tmp_index;

	for (index = 0; index <= (n / 2); index++)
	{
		tmp_index = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = tmp_index;
	}


}
