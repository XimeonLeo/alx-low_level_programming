#include "main.h"

/**
  *print_most_numbers - to print numbers without
  *2 amd 4
  *Return: void for success
  */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
