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
	int len = 0, index, half;
	
	index = 0;
	while (str[index])
	{
		len++;
		index++;
	}

	if ((len % 2) == 0)
	{
		half = len / 2;
		while (half <= len)
		{
			_putchar(str[half]);
			half++;
		}
	}

	else
	{
		half = ((len - 1) / 2);
		while (half <= len)
		{
			_putchar(str[half]);
			half++;
		}
	}
	_putchar('\0');
	_putchar('\n');

}
