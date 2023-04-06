#include "main.h"

/**
 *_strlen_recursion - prints the length of a string
 *
 *@s: the string to check
 *
 *Return: the length of stfing
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}

	else
	{
		return (1 + _strlen_recursion(s + 1);
	}
}
