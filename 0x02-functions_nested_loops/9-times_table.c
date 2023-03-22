#include "main.h"
/**
  *times_table - Entry point
  *
  *Return: void for success
  */

void times_table(void)
{
	int a;
	int b;
	int prdt;

	for (a = 0; a < 10; a++)
	{
	for (b = 0; b < 10; b++)
	{
		prdt = a * b;
		if (b == 0)
		{
			_putchar(prdt + '0');
		}
		else if (prdt < 10 && b != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(prdt + '0');
		}
		else if (prdt >= 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((prdt / 10) + '0');
			_putchar((prdt % 10) + '0');
		}
	}
	_putchar('\n');
	}
}
