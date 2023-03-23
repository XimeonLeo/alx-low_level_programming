#include "main.h"
#include <stdio.h>


/**
  *print_to_98 - Entrt point
  *@n: an unknown intrger
  *Return: 0 for success
  */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else if (n == 98)
		{
			printf("%d\n", n);
		}
		}
	}

	else if (n >= 98)
	{
		for (; n >= 98; n--)
		{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else if (n == 98)
		{
			printf("%d\n", n);
		}
		}
	}
}
