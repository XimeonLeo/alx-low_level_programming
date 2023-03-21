#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: 0 for success
  */

int main(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			if (x != y && x < y)
			{
				putchar(x + '0');
				putchar(y + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
