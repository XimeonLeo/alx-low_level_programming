#include "main.h"
/**
  *jack_bauer - Entry point
  *return: 0 for success
  */

void jack_bauer(void)
{
	int x, y, z, t;

	for (x = 0; x <= 2; x++)
	{
	for (y = 0; y < 10; y++)
	{
	if ((x < 2 && y < 10) || (x < 3 && y < 4))
	{
	for (z = 0; z < 6; z++)
	{
	for (t = 0; t < 10; t++)
	{
		_putchar(x + '0');
		_putchar(y + '0');
		_putchar(58);
		_putchar(z + '0');
		_putchar(t + '0');
		_putchar('\n');
	}
	}
	}
	}
	}
}
