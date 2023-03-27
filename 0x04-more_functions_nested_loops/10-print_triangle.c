#include "main.h"

/**
  *print_triangle - to print the size of a triangle
  *@size: how big the triangle will be
  *rrturn: 0 for success
  */

void print_triangle(int size)
{
	int i, j, k;

	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < (size - 1); i++)
		{
			for (j = 0; j < (size - 1) - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
