#include "main.h"

/**
  *puts2 - to print the characters
  *of a string
  *
  *@str: string to print
  *
  *Return: void for success
  */

void puts2(char *str)
{
	int a = 0;

	for (; str[a] != '\0'; a++)
	{
		if ((a % 2) == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');

}
