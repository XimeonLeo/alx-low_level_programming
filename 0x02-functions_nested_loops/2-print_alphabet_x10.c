#include "main.h"
/**
  * print_alphabet_x10 - Entry point
  *
  * Return: Always void
  */

void print_alphabet_x10(void)
{
	char let;
	int num = 0;

	while (num < 10)
	{
		for (let = 'a'; let <= 'z'; let++)
		{
			_putchar(let);
		}
	_putchar('\n');
	num++;
	}
}
