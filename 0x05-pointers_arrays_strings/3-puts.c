#include "main.h"

/**
 *_puts - to print out a string
 *@str: string to be printed
 *return: 0 for success
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');

}
