#include "main.h"

/**
  *print_line - to print straight lines
  *@n: integer to be computed
  *return: void for success
  */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
