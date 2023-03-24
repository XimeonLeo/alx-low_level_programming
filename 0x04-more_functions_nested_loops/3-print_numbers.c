#include "main.h"

/**
  *print_numbers - to print numbers from 0 to 9
  *
  *return: void for success
  */

void print_numbers(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
