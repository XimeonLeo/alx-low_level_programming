#include <stdio.h>

/**
  *main - to print the first fibonacci number starting from 1 and 2
  *
  *Return: 0 for success
  */

int main(void)
{
	int a;
	long int b;
	long int c;
	long int d;

	b = 1;
	c = 2;

	for (a = 1; a <= 50; a++)
	{
		if (b < 12586269025)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld\n", b);
		}
		d = b + c;
		b = c;
		c = d;
	}


	return (0);
}
