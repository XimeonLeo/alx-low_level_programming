#include <stdio.h>

/**
  *main - Entry point
  *Return: (0) for success
  */

int main(void)
{
	int num;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
