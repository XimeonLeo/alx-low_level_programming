#include "main.h"

/**
 *_puts_recursion - prints all characters in a strings
 *@s: a pointer to accept the string
 *
 *Return: void for success
 */

void _puts_recursion(char *s)
{
	int index = 0;

	if (s[index] == '\0')
	{
		_putchar('\n');
	}

	else
	{
		_putchar(s[index]);
		index++;
		_puts_recursion(s + index);
	}
}
