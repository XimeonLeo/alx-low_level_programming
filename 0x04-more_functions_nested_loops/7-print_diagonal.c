#include "main.h"

/**
  *print_diagonal - entry point
  *@n: value to be computed
  *return: void dor success
  */

void print_diagonal(int n)
{
	int d;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (d = 0; d < n; d++)
	{
	for (space = 0; space < d; space++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
}
