#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - to determing if a number is positivw or negative
  *
  *Return: 0 for success
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is %s\n", n, "zero");
	}

	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
