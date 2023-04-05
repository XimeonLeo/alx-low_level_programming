#include "main.h"

/**
 *_print_rev_recursion - prints a givem string in reverse
 *
 *@s: the string to be reversed
 *
 *Return: void
 */

void _print_rev_recursion(char *s)
{
	int index = 0;

	if (s[index] != '\0')
	{
		index++;
		_print_rev_recursion(s + index);
		_putchar(s[index]);
	}
}
