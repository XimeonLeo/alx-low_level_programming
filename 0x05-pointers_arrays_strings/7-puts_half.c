#include "main.h"

/**
 *puts_half - to print half of a string
 *
 *@str: string to be printed
 *
 *Return: void for success
 */

void puts_half(char *str)
{
	int length = 0, a = 0;

	while (str[a++])
	{
		length++;
	}
	if ((length % 2) != 0)
	{
		int i = length - 1 / 2;

		for (; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if ((length % 2) == 0)
	{
		int j = length / 2;

		for (; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
