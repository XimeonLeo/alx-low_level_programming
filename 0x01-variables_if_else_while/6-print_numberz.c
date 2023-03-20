#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: (0) for success
  */

int main(void)
{
	int dgt;

	for (dgt = 0; dgt < 10; dgt++)
	{
		putchar((dgt) + '0');
	}
	putchar('\n');
	return (0);
}
