#include "main.h"

/**
 *print_rev - to print a string in reverse
 *@s: string to reverse
 *return: void for success
 */
void print_rev(char *s)
{
	int length = 0, i = 0;

	while (s[i++])
		length++;

	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
